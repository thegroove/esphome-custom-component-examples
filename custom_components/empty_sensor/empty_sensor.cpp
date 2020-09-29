#include "esphome/core/log.h"
#include "empty_sensor.h"

namespace esphome {
namespace empty_sensor {

static const char *TAG = "empty_sensor.sensor";

void EmptySensor::setup() {
  
}

void EmptySensor::loop() {
  
}

void EmptySensor::update() {

}

void EmptySensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty custom sensor");
}

} //namespace empty_sensor
} //namespace esphome