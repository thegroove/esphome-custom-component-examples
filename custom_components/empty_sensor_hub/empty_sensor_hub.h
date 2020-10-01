#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/text_sensor/text_sensor.h"

namespace esphome {
namespace empty_sensor_hub {

class EmptySensorHub : public Component {
 public:
  void register_sensor(sensor::Sensor *obj) { this->sensors_.push_back(obj); }
  void register_text_sensor(text_sensor::TextSensor *obj) { this->text_sensors_.push_back(obj); }
  void register_binary_sensor(binary_sensor::BinarySensor *obj) { this->binary_sensors_.push_back(obj); }
  void setup() override;
  void dump_config() override;
  
 protected:
  std::vector<sensor::Sensor *> sensors_;
  std::vector<text_sensor::TextSensor *> text_sensors_;
  std::vector<binary_sensor::BinarySensor *> binary_sensors_;
};

} //namespace empty_sensor_hub
} //namespace esphome