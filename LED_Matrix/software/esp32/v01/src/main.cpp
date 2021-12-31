#include <Arduino.h>
#include "SPI.h"
#include "ESP32DMASPIMaster.h"

#if CONFIG_FREERTOS_UNICORE
#define ARDUINO_RUNNING_CORE 0
#else
#define ARDUINO_RUNNING_CORE 1
#endif

ESP32DMASPI::Master vspi;
ESP32DMASPI::Master hspi;

static const uint32_t  BUFFER_SIZE = 24*16*9*9;
uint8_t* vbuf;
uint8_t* hbuf;

void vspiCommand(void *pvParameters);
void hspiCommand(void *pvParameters);

static const int spiClk = 2000000;

void setup()
{
    vbuf = vspi.allocDMABuffer(BUFFER_SIZE);
    hbuf = hspi.allocDMABuffer(BUFFER_SIZE);

    vspi.setDataMode(SPI_MODE1);
    vspi.setFrequency(spiClk);
    vspi.setMaxTransferSize(BUFFER_SIZE);
    vspi.setDMAChannel(1);
    vspi.setQueueSize(1);
    hspi.setDataMode(SPI_MODE1);
    hspi.setFrequency(spiClk);
    hspi.setMaxTransferSize(BUFFER_SIZE);
    hspi.setDMAChannel(2);
    hspi.setQueueSize(1);
    vspi.begin(VSPI);
    hspi.begin(HSPI);
    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        vbuf[i] = 0b01010100;
        hbuf[i] = vbuf[i];
    }

    xTaskCreate(vspiCommand,
                "vspiCommand",
                1024,
                NULL,
                2,
                NULL);
    xTaskCreate(hspiCommand,
                "hspiCommand",
                1024,
                NULL,
                2,
                NULL);
}

void loop()
{
}

void vspiCommand(void *pvParameters)
{
    for(;;){
        vspi.transfer(vbuf, BUFFER_SIZE);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

void hspiCommand(void *pvParameters)
{
    for(;;)
    {
        hspi.transfer(hbuf, BUFFER_SIZE);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}