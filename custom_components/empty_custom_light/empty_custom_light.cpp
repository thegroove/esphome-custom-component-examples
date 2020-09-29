#include "esphome.h"
#include "empty_custom_light.h"

namespace esphome {
namespace empty_custom_light {

void EmptyCustomLightOutput::setup() {
   
}

light::LightTraits EmptyCustomLightOutput::get_traits() {
    auto traits = light::LightTraits();
    traits.set_supports_brightness(true);
    traits.set_supports_rgb(false);
    traits.set_supports_rgb_white_value(false);
    traits.set_supports_color_temperature(false);

    return traits;
}

void EmptyCustomLightOutput::write_state(light::LightState *state) {

}

void EmptyCustomLightOutput::dump_config(){

}

} //namespace empty_custom_light
} //namespace esphome