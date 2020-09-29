#pragma once

#include "esphome/core/component.h"
#include "esphome/components/switch/switch.h"

namespace esphome {
namespace empty_custom_switch {

class EmptyCustomSwitch : public switch_::Switch, public Component {
 public:
  void setup() override;
  void write_state(bool state) override;
};

} //namespace empty_custom_switch
} //namespace esphome