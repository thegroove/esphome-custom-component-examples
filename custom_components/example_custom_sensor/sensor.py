import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID

example_custom_sensor_ns = cg.esphome_ns.namespace('example_custom_sensor')

ExampleCustomSensor = example_custom_sensor_ns.class_('ExampleCustomSensor', cg.PollingComponent)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(ExampleCustomSensor)
}).extend(cv.polling_component_schema('60s'))

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    