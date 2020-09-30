#include "esphome/core/log.h"
#include "empty_spi_sensor.h"

namespace esphome {
namespace empty_spi_sensor {

static const char *TAG = "empty_spi_sensor.sensor";

void EmptySPISensor::setup() {

}

void EmptySPISensor::update() {

}

void EmptySPISensor::loop() {

}

void EmptySPISensor::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI sensor");
}

}  // namespace empty_spi_sensor
}  // namespace esphome