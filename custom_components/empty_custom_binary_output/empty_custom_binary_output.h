#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/binary_output.h"

namespace esphome {
namespace empty_custom_binary_output {

class EmptyCustomBinaryOutput : public output::BinaryOutput, public Component {
 public:
  void setup() override;
  void write_state(bool state) override;
  void dump_config() override;
};


} //namespace empty_custom_binary_output
} //namespace esphome