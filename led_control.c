#include "led_control.h"
#include "pico/stdlib.h"

#define RED_LED_PIN 11

void init_leds() {
    gpio_init(RED_LED_PIN);
    gpio_set_dir(RED_LED_PIN, GPIO_OUT);
}

void blink_red_led() {
    gpio_put(RED_LED_PIN, 1);
    sleep_ms(100);
    gpio_put(RED_LED_PIN, 0);
}
