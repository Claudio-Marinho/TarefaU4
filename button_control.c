#include "button_control.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define BUTTON_A_PIN 5
#define BUTTON_B_PIN 6

void debounce(uint gpio, uint32_t events, void (*callback)()) {
    static uint64_t last_time = 0;
    uint64_t current_time = time_us_64();
    
    if ((current_time - last_time) > 200000) { 
        callback();
    }

    last_time = current_time;
}

void init_buttons(void (*button_a_callback)(), void (*button_b_callback)()) {
    gpio_init(BUTTON_A_PIN);
    gpio_set_dir(BUTTON_A_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_A_PIN);
    gpio_set_irq_enabled_with_callback(BUTTON_A_PIN, GPIO_IRQ_EDGE_FALL, true, &debounce);

    gpio_init(BUTTON_B_PIN);
    gpio_set_dir(BUTTON_B_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_B_PIN);
    gpio_set_irq_enabled_with_callback(BUTTON_B_PIN, GPIO_IRQ_EDGE_FALL, true, &debounce);
}
