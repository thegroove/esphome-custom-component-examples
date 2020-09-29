#include "esphome/core/log.h"
#include "empty_component.h"

namespace esphome {
namespace empty_component {

static const char *TAG = "empty_component.component";

void EmptyComponent::setup() {

}

void EmptyComponent::loop() {

}

void EmptyComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty component");
}


}  // namespace empty_component
}  // namespace esphome