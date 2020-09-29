#include "esphome/core/log.h"
#include "empty_custom_binary_output.h"

namespace esphome {
namespace empty_custom_binary_output {

static const char *TAG = "empty_custom_binary_output.binary_output";

void EmptyCustomBinaryOutput::setup(){

}

void EmptyCustomBinaryOutput::write_state(bool state){

}

void EmptyCustomBinaryOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Custom binary output");
}

} //namespace empty_custom_binary_output
} //namespace esphome

