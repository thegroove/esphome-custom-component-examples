```yaml
# example configuration:

empty_sensor_hub:
  id: empty_sensor_hub_1

sensor:
  - platform: empty_sensor_hub
    name: Sensor for empty sensor hub 1
    empty_sensor_hub_id: empty_sensor_hub_1

  - platform: empty_sensor_hub
    name: Sensor for empty sensor hub 2
    empty_sensor_hub_id: empty_sensor_hub_1

text_sensor:
  - platform: empty_sensor_hub
    name: Text sensor for empty sensor hub 1
    empty_sensor_hub_id: empty_sensor_hub_1

  - platform: empty_sensor_hub
    name: Text sensor for empty sensor hub 2
    empty_sensor_hub_id: empty_sensor_hub_1

binary_sensor:
  - platform: empty_sensor_hub
    name: Binary sensor for empty sensor hub 1
    empty_sensor_hub_id: empty_sensor_hub_1

  - platform: empty_sensor_hub
    name: Binary sensor for empty sensor hub 2
    empty_sensor_hub_id: empty_sensor_hub_1
```