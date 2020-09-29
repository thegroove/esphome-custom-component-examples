#include "esphome/core/log.h"
#include "empty_custom_sensor.h"

namespace esphome {
namespace empty_custom_sensor {

static const char *TAG = "empty_custom_sensor.sensor";

void EmptyCustomSensor::setup() {
  
}

void EmptyCustomSensor::loop() {
  
}

void EmptyCustomSensor::update() {

}

void EmptyCustomSensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty custom sensor");
}

} //namespace empty_custom_sensor
} //namespace esphome