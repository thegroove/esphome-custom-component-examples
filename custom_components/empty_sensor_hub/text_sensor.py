import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor
from esphome.const import CONF_ID
from . import EmptySensorHub, CONF_HUB_ID

DEPENDENCIES = ['empty_sensor_hub']

text_sensor_ns = cg.esphome_ns.namespace('text_sensor')
TextSensor = text_sensor_ns.class_('TextSensor', text_sensor.TextSensor, cg.Nameable)

CONFIG_SCHEMA = text_sensor.TEXT_SENSOR_SCHEMA.extend({
    cv.GenerateID(): cv.declare_id(TextSensor),
    cv.GenerateID(CONF_HUB_ID): cv.use_id(EmptySensorHub)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    paren = yield cg.get_variable(config[CONF_HUB_ID])
    var = cg.new_Pvariable(config[CONF_ID])

    yield text_sensor.register_text_sensor(var, config)

    cg.add(paren.register_text_sensor(var))