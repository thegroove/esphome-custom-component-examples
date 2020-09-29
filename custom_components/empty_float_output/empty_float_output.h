#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/float_output.h"

namespace esphome {
namespace empty_float_output {

class EmptyFloatOutput : public output::FloatOutput, public Component {
 public:
  void setup() override;
  void write_state(float state) override;
  void dump_config() override;
};


} //namespace empty_float_output
} //namespace esphome