import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import binary_sensor
from esphome.const import CONF_ID
from . import EmptySensorHub, CONF_HUB_ID

DEPENDENCIES = ['empty_sensor_hub']

binary_sensor_ns = cg.esphome_ns.namespace('binary_sensor')
BinarySensor = binary_sensor_ns.class_('BinarySensor', binary_sensor.BinarySensor, cg.Nameable)

CONFIG_SCHEMA = binary_sensor.BINARY_SENSOR_SCHEMA.extend({
    cv.GenerateID(): cv.declare_id(BinarySensor),
    cv.GenerateID(CONF_HUB_ID): cv.use_id(EmptySensorHub)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    paren = yield cg.get_variable(config[CONF_HUB_ID])
    var = cg.new_Pvariable(config[CONF_ID])
    
    yield binary_sensor.register_binary_sensor(var, config)
    
    cg.add(paren.register_binary_sensor(var))