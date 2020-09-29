#pragma once

#include "esphome/core/component.h"
#include "esphome/components/spi/spi.h"

namespace esphome {
namespace empty_spi_component {

class EmptySPIComponent : public Component, 
                    public spi::SPIDevice<spi::BIT_ORDER_MSB_FIRST,spi::CLOCK_POLARITY_LOW, 
                            spi::CLOCK_PHASE_LEADING,spi::DATA_RATE_1KHZ> {
  public:
    void setup() override;
    void loop() override;
    void dump_config() override;
};


}  // namespace empty_spi_component
}  // namespace esphome