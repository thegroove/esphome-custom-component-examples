import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import uart, sensor
from esphome.const import CONF_ID, ICON_EMPTY, UNIT_EMPTY

DEPENDENCIES = ['uart']

empty_uart_sensor_ns = cg.esphome_ns.namespace('empty_uart_sensor')
EmptyUARTSensor = empty_uart_sensor_ns.class_('EmptyUARTSensor', cg.PollingComponent, uart.UARTDevice)

CONFIG_SCHEMA = sensor.sensor_schema(UNIT_EMPTY, ICON_EMPTY, 1).extend({
    cv.GenerateID(): cv.declare_id(EmptyUARTSensor),
}).extend(cv.polling_component_schema('60s')).extend(uart.UART_DEVICE_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
    yield sensor.register_sensor(var, config)
    yield uart.register_uart_device(var, config)
    