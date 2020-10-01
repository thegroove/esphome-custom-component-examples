import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID, UNIT_EMPTY, ICON_EMPTY
from . import EmptySensorHub, CONF_HUB_ID

DEPENDENCIES = ['empty_sensor_hub']

sensor_ns = cg.esphome_ns.namespace('sensor')
Sensor = sensor_ns.class_('Sensor', sensor.Sensor, cg.Nameable)

CONFIG_SCHEMA = sensor.sensor_schema(UNIT_EMPTY, ICON_EMPTY, 1).extend({
    cv.GenerateID(): cv.declare_id(Sensor),
    cv.GenerateID(CONF_HUB_ID): cv.use_id(EmptySensorHub)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    paren = yield cg.get_variable(config[CONF_HUB_ID])
    var = cg.new_Pvariable(config[CONF_ID])
    
    yield sensor.register_sensor(var, config)
    
    cg.add(paren.register_sensor(var))