#include "sl_event_handler.h"

#include "em_chip.h"
#include "sl_device_init_nvic.h"
#include "sl_board_init.h"
#include "sl_device_init_dcdc.h"
#include "sl_device_init_lfxo.h"
#include "sl_device_init_hfxo.h"
#include "sl_device_init_clocks.h"
#include "sl_device_init_emu.h"
#include "pa_conversions_efr32.h"
#include "sl_rail_util_pti.h"
#include "btl_interface.h"
#include "sl_board_control.h"
#include "sl_sleeptimer.h"
#include "app_button_press.h"
#include "app_log.h"
#include "app_timer.h"
#include "sl_bluetooth.h"
#include "sl_btmesh_wstk_lcd.h"
#include "sl_debug_swo.h"
#include "gpiointerrupt.h"
#include "sl_i2cspm_instances.h"
#include "sl_iostream_stdlib_config.h"
#include "sl_iostream_init_usart_instances.h"
#include "sl_mbedtls.h"
#include "sl_mpu.h"
#include "nvm3_default.h"
#include "sl_simple_button_instances.h"
#include "sl_btmesh.h"
#include "sl_iostream_init_instances.h"
#include "sl_power_manager.h"
#include "sl_cos.h"
#include "sl_rail_util_power_manager_init.h"

void sl_platform_init(void)
{
  CHIP_Init();
  sl_device_init_nvic();
  sl_board_preinit();
  sl_device_init_dcdc();
  sl_device_init_lfxo();
  sl_device_init_hfxo();
  sl_device_init_clocks();
  sl_device_init_emu();
  sl_board_init();
  bootloader_init();
  nvm3_initDefault();
  sl_power_manager_init();
}

void sl_driver_init(void)
{
  sl_debug_swo_init();
  GPIOINT_Init();
  sl_i2cspm_init_instances();
  sl_simple_button_init_instances();
  sl_cos_send_config();
}

void sl_service_init(void)
{
  sl_board_configure_vcom();
  sl_sleeptimer_init();
  sl_iostream_stdlib_disable_buffering();
  sl_mbedtls_init();
  sl_mpu_disable_execute_from_ram();
  sl_iostream_init_instances();
}

void sl_stack_init(void)
{
  sl_rail_util_pa_init();
  sl_rail_util_pti_init();
  sl_bt_init();
  sl_btmesh_init();
  sl_rail_util_power_manager_init();
}

void sl_internal_app_init(void)
{
  app_button_press_init();
  app_log_init();
  sl_btmesh_LCD_init();
}

void sl_platform_process_action(void)
{
}

void sl_service_process_action(void)
{
  app_button_press_step();
  sli_app_timer_step();
}

void sl_stack_process_action(void)
{
  sl_bt_step();
  sl_btmesh_step();
}

void sl_internal_app_process_action(void)
{
}

void sl_iostream_init_instances(void)
{
  sl_iostream_usart_init_instances();
}

