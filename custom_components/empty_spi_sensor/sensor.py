import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import spi, sensor
from esphome.const import CONF_ID, ICON_EMPTY, UNIT_EMPTY

DEPENDENCIES = ['spi']

empty_spi_sensor_ns = cg.esphome_ns.namespace('empty_spi_sensor')
EmptySPISensor = empty_spi_sensor_ns.class_('EmptySPISensor', cg.PollingComponent,
                                  spi.SPIDevice)

CONFIG_SCHEMA = sensor.sensor_schema(UNIT_EMPTY, ICON_EMPTY, 1).extend({
    cv.GenerateID(): cv.declare_id(EmptySPISensor),
}).extend(cv.polling_component_schema('60s')).extend(spi.spi_device_schema())


def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield sensor.register_sensor(var, config)
    yield spi.register_spi_device(var, config)
    