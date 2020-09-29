#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/binary_output.h"
#include "esphome/components/fan/fan_state.h"

namespace esphome {
namespace empty_custom_fan {

class EmptyCustomFan : public Component {
 public:
  void set_fan(fan::FanState *fan) { fan_ = fan; }
  void set_output(output::BinaryOutput *output) { output_ = output; }
  void setup() override;
  void loop() override;
  void dump_config() override;
  void set_oscillating(output::BinaryOutput *oscillating) { this->oscillating_ = oscillating; }
  void set_direction(output::BinaryOutput *direction) { this->direction_ = direction; }

 protected:
  fan::FanState *fan_;
  output::BinaryOutput *output_;
  output::BinaryOutput *oscillating_{nullptr};
  output::BinaryOutput *direction_{nullptr};
  bool next_update_{true};
};

}  // namespace empty_custom_fan
}  // namespace esphome