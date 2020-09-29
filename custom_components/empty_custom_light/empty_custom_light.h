#pragma once

#include "esphome/core/component.h"
#include "esphome/components/light/light_output.h"

namespace esphome {
namespace empty_custom_light {

class EmptyCustomLightOutput : public light::LightOutput, public Component {
 public:
  void setup() override;
  light::LightTraits get_traits() override;
  void set_output(output::FloatOutput *output) { output_ = output; }
  void write_state(light::LightState *state) override;
  void dump_config() override;
 
 protected:
  output::FloatOutput *output_;
};

} //namespace empty_custom_light
} //namespace esphome