/* -----------------------------------------------------------------------------
 * @file   ble.h
 * @brief  
 * @author Jake Michael, jami1063@colorado.edu
 * ---------------------------------------------------------------------------*/

#ifndef _BLE_H_
#define _BLE_H_

#include <em_common.h>
#include <sl_bluetooth.h>
#include <gatt_db.h>

#include "log.h"
#include "events.h"
#include "adxl343.h"

void handle_ble_event(sl_bt_msg_t *evt);

#endif // _BLE_H_
