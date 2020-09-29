#include "esphome/core/log.h"
#include "empty_custom_binary_sensor.h"

namespace esphome {
namespace empty_custom_binary_sensor {

static const char *TAG = "empty_custom_binary_sensor.binary_sensor";

void EmptyCustomBinarySensor::setup() {
    
}
  
void EmptyCustomBinarySensor::update() {

}

void EmptyCustomBinarySensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Custom binary sensor");
}

} //namespace empty_custom_binary_sensor
} //namespace esphome