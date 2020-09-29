#include "esphome/core/log.h"
#include "empty_custom_float_output.h"

namespace esphome {
namespace empty_custom_float_output {

static const char *TAG = "empty_custom_float_output.output";

void EmptyCustomFloatOutput::setup(){

}

void EmptyCustomFloatOutput::write_state(float state){

}

void EmptyCustomFloatOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty custom float output");
}

} //namespace empty_custom_float_output
} //namespace esphome

