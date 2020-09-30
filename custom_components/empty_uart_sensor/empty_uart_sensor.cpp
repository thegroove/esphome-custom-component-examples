#include "esphome/core/log.h"
#include "empty_uart_sensor.h"

namespace esphome {
namespace empty_uart_sensor {

static const char *TAG = "empty_uart_sensor.sensor";

void EmptyUARTSensor::setup() {

}

void EmptyUARTSensor::update() {

}

void EmptyUARTSensor::loop() {

}

void EmptyUARTSensor::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty UART sensor");
}

}  // namespace empty_UART_sensor
}  // namespace esphome