#pragma once

#include "esphome/core/component.h"
#include "esphome/components/cover/cover.h"

namespace esphome {
namespace empty_cover {

class EmptyCover : public cover::Cover, public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  cover::CoverTraits get_traits() override;
  
 protected:
  void control(const cover::CoverCall &call) override;
};

}  // namespace empty_cover
}  // namespace esphome