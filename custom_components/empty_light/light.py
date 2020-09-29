import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import light, output
from esphome.const import CONF_OUTPUT_ID, CONF_OUTPUT

empty_light_ns = cg.esphome_ns.namespace('empty_light')
EmptyLightOutput = empty_light_ns.class_('EmptyLightOutput', light.LightOutput)

CONFIG_SCHEMA = light.BRIGHTNESS_ONLY_LIGHT_SCHEMA.extend({
    cv.GenerateID(CONF_OUTPUT_ID): cv.declare_id(EmptyLightOutput),
    cv.Required(CONF_OUTPUT): cv.use_id(output.FloatOutput)
})

def to_code(config):
    var = cg.new_Pvariable(config[CONF_OUTPUT_ID])
    yield light.register_light(var, config)

    out = yield cg.get_variable(config[CONF_OUTPUT])
    cg.add(var.set_output(out))