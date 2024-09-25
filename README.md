# 🥷 **Attack Ino - Arduino Project**

Este projeto para Arduino tem fins **educacionais** e exemplifica como escanear e identificar frequências de drones comerciais na faixa de 2.4 GHz e, em seguida, enviar comandos simulados para interferir na comunicação com o drone. O código opera escaneando frequências de rádio e pode enviar pacotes de controle quando uma frequência ativa é detectada. 

⚠️ **IMPORTANTE**: Este projeto é exclusivamente para fins educacionais e não deve ser utilizado para práticas ilegais, como o sequestro de drones sem autorização.

<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=blue&color=black"/> <img loading="lazy" src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white"> <img loading="lazy" src="https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white">

## 🚧 **Arquitetura do Projeto**

1. **Módulo de Escaneamento de Frequências**: Este módulo escaneia a faixa de frequências de 2.4 GHz (usada pela maioria dos drones) para identificar atividade em um canal. Quando detectada, ele retorna o canal ativo.

2. **Módulo de Controle de Comandos**: Depois que a frequência do drone é identificada, este módulo envia comandos de controle simulados para o drone. Isso inclui comandos como "enviar pacote" para imitar a comunicação com o drone.

3. **Módulo de Interface com o Usuário**: O usuário pode visualizar o canal detectado via comunicação serial e monitorar o status do envio dos comandos. 

4. **Módulo de Segurança (Futuro)**: Em versões futuras, este módulo pode ser expandido para implementar verificação de sinal e funções de segurança para impedir que drones sejam controlados de forma maliciosa.

---

## 🚀 **Como Funciona**

- O código escaneia todos os 126 canais na faixa de 2.4 GHz, identificando o canal ativo utilizado pelo drone.
- Quando um canal ativo é encontrado, o código configura o módulo **NRF24L01** para operar nesse canal.
- Uma vez configurado, o código envia comandos simulados para interferir na comunicação do drone.
  
## 🛠️ **Requisitos de Hardware**

- **Arduino Uno/Nano** (ou compatível)
- **Módulo NRF24L01** (para comunicação em 2.4 GHz)
- **Cabo USB** (para carregar o código no Arduino e monitorar via serial)

## 📝 **Como Usar**

1. **Clonar o Repositório**: Baixe ou clone este repositório.
   ```bash
   git clone https://github.com/seuusuario/drone-hijack-arduino.git
   ```

2. **Carregar o Código no Arduino**: Abra o arquivo `.ino` no **Arduino IDE** e faça o upload para o seu Arduino.

3. **Monitorar o Canal Ativo**: Abra o monitor serial no Arduino IDE para visualizar qual canal está sendo detectado e se os comandos estão sendo enviados com sucesso.

4. **Ajuste o Endereço de Controle**: Se necessário, ajuste o array de endereço no código (exemplo: `byte address[6] = {0xDE, 0xAD, 0xBE, 0xEF, 0x01}`) para corresponder ao protocolo do drone.

---

## ⚠️ **Licença e Observações**

- **Licença**: Este projeto está sob a licença **CC0 1.0 Universal**, o que significa que pode ser usado livremente para qualquer propósito.
- **Atenção**: Este projeto é **apenas para fins educacionais**. Não deve ser usado para práticas ilegais, como a interferência ou controle não autorizado de drones. O autor **não se responsabiliza** pelo uso indevido do código.

---
