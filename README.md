# Temporizador Periódico - Semáforo com Raspberry Pi Pico W

Este projeto implementa um **semáforo controlado por temporizador periódico** utilizando a função `add_repeating_timer_ms()` do **Pico SDK**. O semáforo alterna entre as cores **vermelho → amarelo → verde** a cada 3 segundos.

## Requisitos do Projeto

- **Microcontrolador**: Raspberry Pi Pico W  
- **LEDs**: 3 LEDs (vermelho, amarelo e verde)  
- **Resistores**: 3 resistores de 330Ω  
- **Ambiente de desenvolvimento**: VS Code + Pico SDK  
- **Simulação**: Wokwi integrada ao VS Code  

## Descrição do Funcionamento

1. O **LED vermelho** acende primeiro.  
2. Após **3 segundos**, o LED vermelho apaga e o **LED amarelo** acende.  
3. Após **mais 3 segundos**, o LED amarelo apaga e o **LED verde** acende.  
4. Após **mais 3 segundos**, o LED verde apaga e o ciclo reinicia.  
5. A cada **1 segundo**, uma mensagem é impressa na **porta serial** para monitoramento.

## Instruções
- Observe o tempo e os leds mudando ao passar do tempo
- Conecte-se ao monitor serial e observe as mensagens
