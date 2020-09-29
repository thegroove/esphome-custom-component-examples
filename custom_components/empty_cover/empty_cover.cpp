#include "esphome/core/log.h"
#include "empty_cover.h"

namespace esphome {
namespace empty_cover {

static const char *TAG = "empty_cover.cover";

void EmptyCover::setup() {

}

void EmptyCover::loop() {

}

void EmptyCover::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty cover");
}

cover::CoverTraits EmptyCover::get_traits() {
    auto traits = cover::CoverTraits();
    traits.set_is_assumed_state(false);
    traits.set_supports_position(false);
    traits.set_supports_tilt(false);

    return traits;
}

void EmptyCover::control(const cover::CoverCall &call) {
    
}

}  // namespace empty_cover
}  // namespace esphome
