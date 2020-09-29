#include "esphome/core/log.h"
#include "empty_custom_switch.h"

namespace esphome {
namespace empty_custom_switch {

static const char *TAG = "empty_custom_switch.switch";

void EmptyCustomSwitch::setup() {

}

void EmptyCustomSwitch::write_state(bool state) {

}

void EmptyCustomSwitch::dump_config(){
    ESP_LOGCONFIG(TAG, "Empty custom switch");
}

} //namespace empty_custom_switch
} //namespace esphome