# Projeto de Controle de LEDs com Interrupções no RP2040

Este projeto foi desenvolvido para a placa de desenvolvimento RP2040 (Raspberry Pi Pico) e utiliza interrupções para controlar botões e LEDs. O objetivo principal do projeto é controlar uma matriz de LEDs WS2812, exibir números de 0 a 9 de forma digital, e fazer o LED RGB piscar com base em ações do usuário, utilizando interrupções e debouncing de software.

## Objetivos do Projeto

1. **LED RGB**: O LED vermelho pisca continuamente 5 vezes por segundo.
2. **Botão A**: Incrementa o número exibido na matriz de LEDs cada vez que for pressionado.
3. **Botão B**: Decrementa o número exibido na matriz de LEDs cada vez que for pressionado.
4. **Matriz WS2812**: Exibe os números de 0 a 9 utilizando uma formatação digital fixa (estilo segmentos iluminados).

### Componentes Utilizados

- **RP2040 (Raspberry Pi Pico)**: Placa de desenvolvimento que serve como o microcontrolador.
- **Botões (Pushbuttons)**: Dois botões (A e B) para interagir com a matriz de LEDs e controlar o número exibido.
- **Matriz de LEDs WS2812**: Matriz de LEDs endereçáveis para exibir números.
- **LED RGB**: Um LED RGB controlado via GPIO para indicar a execução do código.

## Funcionalidade

1. **LED Vermelho Pisca**: O LED vermelho do LED RGB pisca 5 vezes por segundo para fornecer feedback visual.
2. **Botões de Controle**: O botão A incrementa o número exibido na matriz de LEDs e o botão B decrementa o número. A cada pressionamento de botão, o número na matriz de LEDs é atualizado.
3. **Matriz de LEDs WS2812**: A matriz de LEDs exibe números de 0 a 9 em formato digital, utilizando segmentos iluminados. A matriz é controlada pela interface WS2812, onde os LEDs são endereçados e acesos de acordo com o número a ser exibido.

## Arquitetura

O projeto utiliza interrupções para detectar os pressionamentos dos botões e atualizar a matriz de LEDs. O tratamento de debouncing foi feito via software para evitar leituras falsas nos botões.

A estrutura do código envolve a seguinte lógica:
1. O **LED RGB** (vermelho) pisca continuamente com uma frequência de 5Hz.
2. **Botões A e B** usam interrupções para alterar o número exibido na matriz de LEDs WS2812. 
3. A matriz de LEDs é manipulada para exibir números de 0 a 9, utilizando LEDs endereçáveis.

## Como Funciona

- **Botão A** (conectado ao pino GPIO 5) é utilizado para incrementar o número exibido na matriz.
- **Botão B** (conectado ao pino GPIO 6) é utilizado para decrementar o número exibido.
- **LED RGB**: O LED vermelho pisca a uma taxa de 5Hz para indicar o estado ativo do código.

### Diagrama de Conexões

O diagrama de conexões pode ser visualizado no [Wokwi Simulator](https://wokwi.com/). O código usa as seguintes conexões:

- **Botões A e B** estão conectados aos pinos GPIO 5 e 6, com pull-down internos.
- **Matriz de LEDs WS2812** está conectada ao pino GPIO 7.
- **LED RGB** está conectado aos pinos GPIO 11 (vermelho), GPIO 12 (verde) e GPIO 13 (azul).

## Como Rodar o Projeto

### Pré-requisitos

1. **Instalar o Wokwi Simulator**:
   - Você pode utilizar o [Wokwi](https://wokwi.com/) para simular o circuito.
   
2. **Instalar o Ambiente de Desenvolvimento (opcional)**:
   - Caso queira rodar o código diretamente na placa RP2040, será necessário configurar o ambiente de desenvolvimento com o SDK do Raspberry Pi Pico.

### Passos para Rodar no Wokwi

1. Abra o projeto no Wokwi, acessando o [link do diagrama](https://wokwi.com/).
2. Conecte os pinos e simule o código.
3. Pressione os botões A e B para observar a mudança no número exibido na matriz WS2812.
4. O LED vermelho irá piscar 5 vezes por segundo.

### Passos para Rodar na Placa RP2040

1. **Configurar o ambiente**:
   - Instale o SDK do Raspberry Pi Pico e o compilador necessário para o seu sistema operacional.
   
2. **Carregar o código para o RP2040**:
   - Compile o código e envie para a placa RP2040 via USB.
   
3. **Teste o código**:
   - Conecte os componentes (botões, LEDs, etc.) conforme o diagrama de conexões e observe o funcionamento.

## Considerações Finais

- O código utiliza interrupções para detectar o pressionamento dos botões, o que melhora a eficiência e evita a sobrecarga do processador.
- O tratamento de debouncing foi implementado em software para garantir leituras precisas dos botões.
- A matriz WS2812 é controlada para exibir números de 0 a 9, e o LED RGB fornece feedback visual contínuo.

