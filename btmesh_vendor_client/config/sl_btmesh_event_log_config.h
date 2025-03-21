/***************************************************************************//**
 * @file
 * @brief Mesh events logging configuration
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_BTMESH_EVENT_LOG_CONFIG_H
#define SL_BTMESH_EVENT_LOG_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <q SL_BTMESH_EVENT_LOG_ENABLE_UNKNOWN_CFG_VAL> Enable unknown events logging
// <i> Enables logging of unknown events.
#define SL_BTMESH_EVENT_LOG_ENABLE_UNKNOWN_CFG_VAL      0

// <s SL_BTMESH_EVENT_LOG_PREFIX_CFG_VAL> Prefix
// <i> Prefix of the logged events.
#define SL_BTMESH_EVENT_LOG_PREFIX_CFG_VAL      "evt:"

// <<< end of configuration section >>>

#endif // SL_BTMESH_EVENT_LOG_CONFIG_H