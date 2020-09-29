#include "esphome/core/log.h"
#include "empty_i2c_component.h"

namespace esphome {
namespace empty_i2c_component {

static const char *TAG = "empty_i2c_component.component";

void EmptyI2CComponent::setup() {

}

void EmptyI2CComponent::loop() {

}

void EmptyI2CComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty I2C component");
}


}  // namespace empty_i2c_component
}  // namespace esphome