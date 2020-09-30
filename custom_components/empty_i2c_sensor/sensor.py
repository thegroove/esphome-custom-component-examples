import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import i2c, sensor
from esphome.const import CONF_ID, ICON_EMPTY, UNIT_EMPTY

DEPENDENCIES = ['i2c']

CONF_I2C_ADDR = 0x01

empty_i2c_sensor_ns = cg.esphome_ns.namespace('empty_i2c_sensor')
EmptyI2CSensor = empty_i2c_sensor_ns.class_('EmptyI2CSensor', cg.PollingComponent, i2c.I2CDevice)

CONFIG_SCHEMA = sensor.sensor_schema(UNIT_EMPTY, ICON_EMPTY, 1).extend({
    cv.GenerateID(): cv.declare_id(EmptyI2CSensor),
}).extend(cv.polling_component_schema('60s')).extend(i2c.i2c_device_schema(CONF_I2C_ADDR))

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield sensor.register_sensor(var, config)
    yield i2c.register_i2c_device(var, config)
    