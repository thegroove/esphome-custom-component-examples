#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace empty_custom_sensor {

class EmptyCustomSensor : public sensor::Sensor, public PollingComponent {
    void setup() override;
    void loop() override;
    void update() override;
    void dump_config() override;
};

} //namespace empty_custom_sensor
} //namespace esphome