/* Copyright 2024 kamilsss655
 * https://github.com/kamilsss655
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include "hardware/http_server.h"
#include "hardware/uart.h"
#include "hardware/wifi.h"
#include "hardware/button.h"
#include "hardware/spiffs.h"
#include "board.h"

// Initialize the board
void BOARD_init(void)
{
    // Initialize SPIFFS
    SPIFFS_init(BOARD_BASE_PATH);
    // Initialize UART
    UART_init();
    // Initialize WIFI
    WIFI_init();
    //Initialize HTTP Server
    HTTP_SERVER_init(BOARD_BASE_PATH);
    // Initialize button
    BUTTON_init();
}