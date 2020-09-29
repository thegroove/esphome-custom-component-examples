import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID

empty_custom_sensor_ns = cg.esphome_ns.namespace('empty_custom_sensor')

EmptyCustomSensor = empty_custom_sensor_ns.class_('EmptyCustomSensor', cg.PollingComponent)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(EmptyCustomSensor)
}).extend(cv.polling_component_schema('60s'))

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    