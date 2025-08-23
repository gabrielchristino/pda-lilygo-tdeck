#include "input/input.h"
#include "ui/ui.h"
#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    DisplayTouch::init(); // Inicializa display, LVGL e touch
    ui_init();            // Cria e exibe a tela principal
}

void loop() {
    DisplayTouch::handle(); // Atualiza LVGL e eventos de toque
    ui_tick();              // Atualiza lógica da tela (se necessário)
}