#include "ws2812_display.h"
#include "pico/stdlib.h"

#define WS2812_PIN 7

void ws2812_init() {
    gpio_init(WS2812_PIN);
    gpio_set_dir(WS2812_PIN, GPIO_OUT);
}

void ws2812_display_number(int number) {
    // Aqui você deve implementar a lógica para exibir números na matriz WS2812
    // Exemplo: Usando um buffer de pixels para formar os números
}
