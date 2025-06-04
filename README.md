📡 RF Drone Analyzer - Arduino Educational Project

Este projeto para Arduino tem fins **estritamente educacionais** e demonstra como escanear e identificar frequências utilizadas por drones comerciais na faixa de 2.4 GHz. Após a identificação, ele permite o envio de **pacotes de teste simulando comunicações padrão**, com o objetivo de entender protocolos de rádio.

⚠️ IMPORTANTE: Este projeto não realiza nenhuma ação de interferência real e **não deve ser utilizado para práticas ilegais**, como a interrupção ou controle não autorizado de drones.

---

🚧 Arquitetura do Projeto

- **Módulo de Escaneamento de Frequências:** Escaneia os 126 canais da faixa de 2.4 GHz para identificar atividade e retorna o canal ativo.
- **Módulo de Simulação de Comunicação:** Após identificar um canal, este módulo envia **pacotes simulados** que imitam estruturas de comunicação para fins de análise de protocolo.
- **Módulo de Interface com o Usuário:** Exibe via serial o canal detectado e o status das transmissões simuladas.
- **Módulo de Segurança (Futuro):** Planejado para futuras versões, poderá verificar a integridade do sinal e impedir usos indevidos.

---

🚀 Como Funciona

1. O código escaneia todos os canais de 2.4 GHz para detectar sinais ativos.
2. Quando um canal ativo é encontrado, o módulo NRF24L01 é configurado para operar nesse canal.
3. São enviados pacotes de teste simulando uma comunicação padrão, com fins educacionais.

---

🛠️ Requisitos de Hardware

- Arduino Uno, Nano ou compatível
- Módulo NRF24L01
- Cabo USB (para upload e monitoramento serial)

---

📝 Como Usar

1. Clone este repositório:

   ```bash
   git clone https://github.com/cvinicius369/rfDroneAnalyzer.git
   ```

2. **Carregar o Código no Arduino**: Abra o arquivo `.ino` no **Arduino IDE** e faça o upload para o seu Arduino.

3. **Monitorar o Canal Ativo**: Abra o monitor serial no Arduino IDE para visualizar qual canal está sendo detectado e se os comandos estão sendo enviados com sucesso.

4. **Ajuste o Endereço de Controle**: Se necessário, ajuste o array de endereço no código (exemplo: `byte address[6] = {0xDE, 0xAD, 0xBE, 0xEF, 0x01}`) para corresponder ao protocolo do drone.

---

## ⚠️ **Licença e Observações**

- **Licença**: Este projeto está sob a licença **CC0 1.0 Universal**, o que significa que pode ser usado livremente para qualquer propósito.
- **Atenção**: Este projeto é **apenas para fins educacionais**. Não deve ser usado para práticas ilegais, como a interferência ou controle não autorizado de drones. O autor **não se responsabiliza** pelo uso indevido do código.

---
