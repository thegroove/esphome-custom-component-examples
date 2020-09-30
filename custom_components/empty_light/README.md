```yaml
# example configuration:

light:
  - platform: empty_light
    name: Empty light
    output: pwm_output

output:
  - platform: esp8266_pwm
    pin: D1
    frequency: 1000 Hz
    id: pwm_output
```