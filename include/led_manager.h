#ifndef LED_MANAGER_H__
#define LED_MANAGER_H__
//------------------- INCLUDES -------------------------------------------------
//------------------------------------------------------------------------------

//------------------- MACROS Y DEFINES -----------------------------------------
//------------------------------------------------------------------------------

//------------------- TYPEDEF --------------------------------------------------
//------------------------------------------------------------------------------

//------------------- DECLARACION DE DATOS EXTERNOS ----------------------------
//------------------------------------------------------------------------------

//------------------- DECLARACION DE FUNCIONES EXTERNAS ------------------------
//------------------------------------------------------------------------------
void led_manager_init(void);

void led_manager_power_up(void);
void led_manager_triac_on(void);
void led_manager_triac_off(void);
void led_manager_rele_vege_on(void);
void led_manager_rele_vege_off(void);
void led_manager_wifi_ap_mode(void);
void led_manager_wifi_sta_mode(void);
void led_manager_wifi_net_problem(void);

void led_manager_set_device_mode_auto(void);
void led_manager_set_device_mode_manual(void);

void led_manager_send_duty_cycle(uint8_t duty_cycle);
//------------------- FIN DEL ARCHIVO ------------------------------------------
#endif /* LED_MANAGER_H__ */