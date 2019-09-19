/*
 * Copyright (C) 2018 Tim Broenink
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_Blitzwolf_SHPX
 */

/**
 * @ingroup     boards_Blitzwolf_SHPX
 * @brief       Board specific definitions for Blitzwolf_SHPX (SHP6/SHP2)
 * @file
 * @author      Tim Broenink (t.g.broenink@utwente.nl)
 * @{
 */

#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    On-board LED configuration and control definitions
 * @{
 */
#define LED0_PIN    GPIO2   /**< GPIO2 is used as LED Pin */
#define LED0_ACTIVE (0)     /**< LED is low active */
#define LED1_PIN    GPIO0   /**< GPIO0 is used as LED Pin */
#define LED1_ACTIVE (0)     /**< LED is low active */
/** @} */

/**
 * @name    On Board button definition
 * @{
 */
#define BUTTON0_PIN    GPIO13   /**< GPIO3 is used for the button */
#define BUTTON0_ACTIVE (0)     /**< Button is low active */
/** @} */

/**
 * @name    On Board relay configuration
 * @{
 */
#define RELAY_PIN    GPIO15   /**< GPIO3 is used for the button */
#define RELAY_ACTIVE (1)     /**< Button is low active */
/** @} */





#ifdef __cplusplus
} /* end extern "C" */
#endif

/* include common board definitions as last step */
#include "board_common.h"

#endif /* BOARD_H */
/** @} */
