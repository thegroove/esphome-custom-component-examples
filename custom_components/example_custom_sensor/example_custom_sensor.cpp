#include "esphome/core/log.h"
#include "example_custom_sensor.h"

namespace esphome {
namespace example_custom_sensor {

void ExampleCustomSensor::setup() {
  // This will be called by App.setup()
}

void ExampleCustomSensor::loop() {
  // This will be called by App.loop()
}

void ExampleCustomSensor::update(){
  // This will be called every "update_interval" milliseconds.
}

void ExampleCustomSensor::dump_config(){
  ESP_LOGCONFIG(TAG, "Empty custom sensor");
}

} //namespace example_custom_sensor
} //namespace esphome