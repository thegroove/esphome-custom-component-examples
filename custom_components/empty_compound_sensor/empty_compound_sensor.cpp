#include "esphome/core/log.h"
#include "empty_compound_sensor.h"

namespace esphome {
namespace empty_compound_sensor {

static const char *TAG = "empty_compound_sensor.sensor";

void EmptyCompoundSensor::setup() {
  
}

void EmptyCompoundSensor::loop() {
  
}

void EmptyCompoundSensor::update() {
    if (this->sensor1_ != nullptr)
      this->sensor1_->publish_state(1.0f);
    if (this->sensor2_ != nullptr)
      this->sensor2_->publish_state(2.0f);
    if (this->sensor3_ != nullptr)
      this->sensor3_->publish_state(3.0f);
}

void EmptyCompoundSensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty compound sensor");
}

} //namespace empty_compound_sensor
} //namespace esphome