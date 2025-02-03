#include <stdio.h>
#include "pico/stdlib.h"
#include "led_control.h"
#include "button_control.h"
#include "ws2812_display.h"

volatile int current_number = 0;

void button_a_pressed() {
    current_number = (current_number + 1) % 10;
    ws2812_display_number(current_number);
}

void button_b_pressed() {
    current_number = (current_number - 1 + 10) % 10;
    ws2812_display_number(current_number);
}

int main() {
    stdio_init_all();
    init_leds();
    init_buttons(button_a_pressed, button_b_pressed);
    ws2812_init();

    while (1) {
        blink_red_led();
        sleep_ms(200);
    }

    return 0;
}
