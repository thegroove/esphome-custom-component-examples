import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import spi
from esphome.const import CONF_ID

DEPENDENCIES = ['spi']

empty_spi_component_ns = cg.esphome_ns.namespace('empty_spi_component')
EmptySPIComponent = empty_spi_component_ns.class_('EmptySPIComponent', cg.Component, spi.SPIDevice)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(EmptySPIComponent)
}).extend(cv.COMPONENT_SCHEMA).extend(spi.spi_device_schema(cs_pin_required=True))

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield spi.register_spi_device(var, config)