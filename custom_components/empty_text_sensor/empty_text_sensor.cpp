#include "esphome/core/log.h"
#include "empty_text_sensor.h"

namespace esphome {
namespace empty_text_sensor {

static const char *TAG = "empty_text_sensor.text_sensor";

void EmptyTextSensor::setup() {
  
}

void EmptyTextSensor::dump_config() { 
    ESP_LOGCONFIG(TAG, "Empty text sensor");
}

}  // namespace empty_text_sensor
}  // namespace esphome