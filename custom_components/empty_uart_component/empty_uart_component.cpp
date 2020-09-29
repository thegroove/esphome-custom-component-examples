#include "esphome/core/log.h"
#include "empty_uart_component.h"

namespace esphome {
namespace empty_uart_component {

static const char *TAG = "empty_uart_component.component";

void EmptyUARTComponent::setup() {

}

void EmptyUARTComponent::loop() {

}

void EmptyUARTComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty UART component");
}

}  // namespace empty_uart_component
}  // namespace esphome