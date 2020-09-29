#include "esphome/core/log.h"
#include "empty_binary_output.h"

namespace esphome {
namespace empty_binary_output {

static const char *TAG = "empty_binary_output.binary_output";

void EmptyBinaryOutput::setup(){

}

void EmptyBinaryOutput::write_state(bool state){

}

void EmptyBinaryOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Custom binary output");
}

} //namespace empty_binary_output
} //namespace esphome

