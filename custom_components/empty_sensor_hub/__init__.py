import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

AUTO_LOAD = ['sensor','text_sensor', 'binary_sensor']
MULTI_CONF = True

CONF_HUB_ID = 'empty_sensor_hub_id'

empty_sensor_hub_ns = cg.esphome_ns.namespace('empty_sensor_hub')

EmptySensorHub = empty_sensor_hub_ns.class_('EmptySensorHub', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(EmptySensorHub),
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)