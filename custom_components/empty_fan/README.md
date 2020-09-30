```yaml
# example configuration:

fan:
  - platform: empty_fan
    name: Empty fan
    output: gpio_d1

output:
  - platform: gpio
    pin: D1
    id: gpio_d1
```