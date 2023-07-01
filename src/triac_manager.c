//--------------------INCLUDES--------------------------------------------------
//------------------------------------------------------------------------------
#include <stdio.h>
#include <assert.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"

#include "../include/board_def.h"
#include "../include/triac_manager.h"
//--------------------MACROS Y DEFINES------------------------------------------
//------------------------------------------------------------------------------

//------------------- TYPEDEF --------------------------------------------------
//------------------------------------------------------------------------------


//------------------- DECLARACION DE DATOS LOCALES -----------------------------
//------------------------------------------------------------------------------

//------------------- DECLARACION DE FUNCIONES LOCALES -------------------------
//------------------------------------------------------------------------------

//------------------- DEFINICION DE DATOS LOCALES ------------------------------
//------------------------------------------------------------------------------

//------------------- DEFINICION DE DATOS GLOBALES -----------------------------
//------------------------------------------------------------------------------

//------------------- DEFINICION DE FUNCIONES LOCALES --------------------------
//------------------------------------------------------------------------------

//------------------- DEFINICION DE FUNCIONES EXTERNAS -------------------------
//------------------------------------------------------------------------------
void triac_manager_init(void)
{
    gpio_set_direction(TRIAC_OUTPUT, GPIO_MODE_OUTPUT);
    gpio_set_level(TRIAC_OUTPUT, 0);
}
//------------------------------------------------------------------------------
void triac_manager_turn_on_triac(void)
{
    gpio_set_level(TRIAC_OUTPUT, 1);
}
//------------------------------------------------------------------------------
void triac_manager_turn_off_triac(void)
{
    gpio_set_level(TRIAC_OUTPUT, 0);
}
//---------------------------- END OF FILE -------------------------------------
//------------------------------------------------------------------------------