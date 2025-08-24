#include "input/input.h"
#include "ui/ui.h"
#include "ui/vars.h"
#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    DisplayTouch::init();
    ui_init();
}

void loop() {
    DisplayTouch::handle();
    ui_tick();
}