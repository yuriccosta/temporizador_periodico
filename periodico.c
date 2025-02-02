#include <stdio.h>
#include "pico/stdlib.h"


#define LED_PIN_RED 11
#define LED_PIN_YELLOW 12
#define LED_PIN_GREEN 13

// Matriz que representa os estados do semáforo
uint8_t semaforo[3][3] = {
    {1, 0, 0}, // Estado 1: LED vermelho ligado
    {0, 1, 0}, // Estado 2: LED amarelo ligado
    {0, 0, 1}  // Estado 3: LED verde ligado
};

int i = 0; // Estado atual do semáforo

// Função de callback para o timer repetitivo
bool repeating_timer_callback(struct repeating_timer *timer) {
    // Atualiza os LEDs de acordo com o estado atual do semáforo
    gpio_put(LED_PIN_RED, semaforo[i][0]);
    gpio_put(LED_PIN_YELLOW, semaforo[i][1]);
    gpio_put(LED_PIN_GREEN, semaforo[i][2]);
    
    // Avança para o próximo estado do semáforo
    i = (i + 1) % 3;
    return true;
}

// Função principal
int main()
{
    // Inicializa todas as entradas e saídas padrão
    stdio_init_all();
    
    // Inicializa e configura os pinos dos LEDs como saída
    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT);
    gpio_init(LED_PIN_YELLOW);
    gpio_set_dir(LED_PIN_YELLOW, GPIO_OUT);
    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_GREEN, GPIO_OUT);

    struct repeating_timer timer;

    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        printf("1 segundo se passou!\n");
        sleep_ms(1000);
    }
}
