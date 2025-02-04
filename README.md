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

## Instruções de Uso

1. **Clone o repositório**:
    ```sh
    git clone <URL_DO_REPOSITORIO>
    cd <NOME_DO_REPOSITORIO>
    ```

2. **Configure o ambiente de desenvolvimento**:
    - Instale a extensão do vscode: Raspberry Pi Pico e configure o ambiente conforme instruções.
    - Instale a extensão do vscode: Wokwi e configure o ambiente conforme instruções.

3. **Compile o código**:
    - Abra o projeto no VS Code.
    - Aperte no botão Compile da extensão do Pico SDK.

4. **Carregue o código na Bitdoglab**:
    - Conecte a Bitdoglab ao computador.
    - Entre no modo de gravação.
    - Aperte no botão Run da extensão do Pico SDK.

5. **Rode no wokwi integrado ao vscode**:
    - Abra o arquivo diagram.json.
    - Aperte no botão Run da extensão do Wokwi.

6. **Execute o código**:
    - O semáforo começará a alternar entre as cores a cada 3 segundos.
    - Conecte-se ao monitor serial para observar as mensagens impressas a cada 1 segundo.
