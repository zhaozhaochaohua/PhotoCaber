#include <Arduino.h>
#include "SPI.h"
#include "ESP32DMASPIMaster.h"
#include "AsyncUDP.h"
#include "WiFi.h"

#if CONFIG_FREERTOS_UNICORE
#define ARDUINO_RUNNING_CORE 0
#else
#define ARDUINO_RUNNING_CORE 1
#endif

// SPI parameters
ESP32DMASPI::Master hspi;

static const uint32_t  BUFFER_SIZE = 24*16*9*9;
uint8_t* hbuf;

// WiFi parameters
const char * ssid = "HUAA";
const char * password = "12345678";
uint16_t udp_port = 1777;
AsyncUDP udp;

void sdTask(void *pvParameters);
void hspiCommand(void *pvParameters);
void onPacketCallback(AsyncUDPPacket packet)
{
    Serial.print
}

static const int spiClk = 2000000;

void setup()
{
    // Serial
    Serial.begin(115200);

    // SPI
    hbuf = hspi.allocDMABuffer(BUFFER_SIZE);
    hspi.setDataMode(SPI_MODE1);
    hspi.setFrequency(spiClk);
    hspi.setMaxTransferSize(BUFFER_SIZE);
    hspi.setDMAChannel(2);
    hspi.setQueueSize(1);
    hspi.begin(HSPI);
    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        hbuf[i] = 0b01010100;
    }

    // WiFi udp
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    while (!WiFi.isConnected())
    {
        delay(1000);
        Serial.println("Connecting...");
    }
    while (!udp.listen(udp_port));
    udp.onPacket()
    xTaskCreate(hspiCommand,
                "hspiCommand",
                1024,
                NULL,
                2,
                NULL);
    xTaskCreate(sdTask,
                "sdTask",
                512,
                NULL,
                2,
                NULL);
}

void loop()
{
}


void udpListen(void *pvParameters)
{
    for(;;)
    {

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

void sdTask(void *pvParameters)
{
    for(;;)
    {
        Serial.println("sd task");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}