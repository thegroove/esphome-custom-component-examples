#include "empty_sensor_hub.h"
#include "esphome/core/log.h"

namespace esphome {
namespace empty_sensor_hub {

static const char *TAG = "empty_sensor_hub.component";

void EmptySensorHub::setup(){

}

void EmptySensorHub::dump_config(){
    for (auto *sensor : this->sensors_) {
        LOG_SENSOR("  ", "Sensor", sensor);
    }

    for(auto *text_sensor : this->text_sensors_){
        LOG_TEXT_SENSOR("  ", "Text sensor", text_sensor);
    }

    for(auto *binary_sensor : this->binary_sensors_){
        LOG_BINARY_SENSOR("  ", "Binary sensor", binary_sensor);
    }
}

} //namespace empty_sensor_hub
} //namespace esphome