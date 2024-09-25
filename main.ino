#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10);  // Pinos CE e CSN do NRF24L01

// Função para verificar os canais ativos
int verify_loop() {
  // Loop pelos 126 canais possíveis (2.400 GHz a 2.525 GHz)
  for (int channel = 0; channel <= 125; channel++) {
    radio.setChannel(channel);   // Mudar canal do módulo
    radio.startListening();      // Iniciar escuta
    delay(5);                    // Aguarda por pacotes
    
    if (radio.testRPD()) {       // Se detectar atividade no canal
      Serial.print("Atividade detectada no canal: ");
      Serial.println(channel);
      radio.stopListening();     // Parar escuta imediatamente após detectar o canal
      return channel;            // Retorna o canal ativo
    }
  }
  return 0;  // Se nenhum canal for detectado, retorna 0
}

void setup() {
  Serial.begin(9600);
  radio.begin();
  Serial.println("Escaneando frequências...");
  
  // Verificar qual canal está ativo
  int channelVerified = verify_loop();
  
  // Se um canal ativo foi encontrado
  if (channelVerified != 0) {
    Serial.print("Canal verificado: ");
    Serial.println(channelVerified);
    
    // Configurações do rádio para transmissão
    radio.setPALevel(RF24_PA_HIGH);   // Configurar a potência máxima de transmissão
    radio.setChannel(channelVerified); // Usar o canal detectado
    radio.setDataRate(RF24_250KBPS);  // Taxa de dados (depende do protocolo do drone)

    // Configurar o endereço de destino
    const byte address[6] = {0xDE, 0xAD, 0xBE, 0xEF, 0x01};  // Exemplo de endereço de 5 bytes
    radio.openWritingPipe(address);   // Configurar o pipe para enviar dados
    radio.stopListening();            // Modo de envio
  } else {
    Serial.println("Nenhum canal ativo encontrado.");
  }
}

void loop() {
  // Comando exemplo (os dados reais dependem do protocolo do drone)
  const char command[] = {0xA0, 0x00, 0x01, 0xFF}; // Exemplo de protocolo

  // Enviar o comando
  bool success = radio.write(&command, sizeof(command));
  
  if (success) {
    Serial.println("Comando enviado com sucesso");
  } else {
    Serial.println("Falha ao enviar comando");
  }
  
  delay(1000);  // Enviar o comando a cada segundo
}
