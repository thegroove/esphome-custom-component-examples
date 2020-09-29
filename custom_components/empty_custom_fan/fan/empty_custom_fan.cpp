#include "empty_custom_fan.h"
#include "esphome/core/log.h"

namespace esphome {
namespace empty_custom_fan {

static const char *TAG = "empty_custom_fan.fan";

void EmptyCustomFan::setup() {
  auto traits = fan::FanTraits(this->oscillating_ != nullptr, false, this->direction_ != nullptr);
  this->fan_->set_traits(traits);
  this->fan_->add_on_state_callback([this]() { this->next_update_ = true; });
}

void EmptyCustomFan::loop() {
 
}

void EmptyCustomFan::dump_config() {
  ESP_LOGCONFIG(TAG, "Fan '%s':", this->fan_->get_name().c_str());
}

}  // namespace binary
}  // namespace empty_custom_fan
