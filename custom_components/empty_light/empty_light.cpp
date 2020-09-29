#include "esphome/core/log.h"
#include "empty_light.h"

namespace esphome {
namespace empty_light {

static const char *TAG = "empty_light.light";

void EmptyLightOutput::setup() {
   
}

light::LightTraits EmptyLightOutput::get_traits() {
    auto traits = light::LightTraits();
    traits.set_supports_brightness(true);
    traits.set_supports_rgb(false);
    traits.set_supports_rgb_white_value(false);
    traits.set_supports_color_temperature(false);

    return traits;
}

void EmptyLightOutput::write_state(light::LightState *state) {

}

void EmptyLightOutput::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty custom light");
}

} //namespace empty_light
} //namespace esphome