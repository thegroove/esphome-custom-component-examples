# ESPHome custom component examples

This repository provides examples and basic empty components that can be used as templates to quickly develop your own custom components for the splendid [ESPHome](https://esphome.io/) ESP8266/ESP32 home automation system.

## How to use
All sample components can be found in the `custom_components` directory. The `test_empty_components.yaml` file provides configuration examples for the various custom components. To use a particular component for your project, do the following:


- Create a `custom_components` directory in your esphome configuration directory (the directory where your ```.yaml``` files are)

- Copy the directory of the empty component to `custom_components` in its entirety, so you end up with e.g. `custom_components/empty_sensor/`

- Find the configuration entry for the empty component in `test_empty.yaml` and copy it into your own `.yaml` file.

- Compile with `esphome your_config.yaml compile` (change `your_config.yaml` to your own `.yaml` file) or compile with the dashboard.

- No errors? Great! You can now start modifying the empty component into your own custom component.

