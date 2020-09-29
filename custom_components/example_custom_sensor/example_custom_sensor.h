#pragma once

#include "esphome/core/component.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace example_custom_sensor {

class ExampleCustomSensor : public sensor::Sensor, public PollingComponent {
    void setup() override;
    void dump_config() override;
    void loop() override;
    void update() override;
};

} //namespace example_custom_sensor
} //namespace esphome