#include "esphome/core/log.h"
#include "empty_spi_component.h"

namespace esphome {
namespace empty_spi_component {

static const char *TAG = "empty_spi_component.component";

void EmptySPIComponent::setup() {

}

void EmptySPIComponent::loop() {

}

void EmptySPIComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty SPI component");
}

}  // namespace empty_spi_component
}  // namespace esphome