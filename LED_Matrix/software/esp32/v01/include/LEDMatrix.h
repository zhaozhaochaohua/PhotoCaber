//
// Created by HUA on 2021/11/2.
//

#ifndef V01_LEDMATRIX_H
#define V01_LEDMATRIX_H

#include "ESP32DMASPIMaster.h"

class LEDMat
{
    ESP32DMASPI::Master vspi;
    ESP32DMASPI::Master hspi;
    int spi_clk {2000000};
    int vspi_size;

};


#endif //V01_LEDMATRIX_H