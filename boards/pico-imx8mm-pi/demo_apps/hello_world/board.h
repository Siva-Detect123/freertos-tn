/*
 * Copyright 2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _BOARD_H_
#define _BOARD_H_
#include "clock_config.h"
#include "fsl_clock.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @brief The board name */
#define BOARD_NAME "PICO-IMX8MM"
#define MANUFACTURER_NAME "NXP"
#define BOARD_DOMAIN_ID (1)
/* The UART to use for debug messages. */
#define BOARD_DEBUG_UART_TYPE kSerialPort_Uart
#define BOARD_DEBUG_UART_BAUDRATE 115200u
#define BOARD_DEBUG_UART_BASEADDR UART3_BASE
#define BOARD_DEBUG_UART_INSTANCE 3U
#define BOARD_DEBUG_UART_CLK_FREQ                                                           \
    CLOCK_GetPllFreq(kCLOCK_SystemPll1Ctrl) / (CLOCK_GetRootPreDivider(kCLOCK_RootUart3)) / \
        (CLOCK_GetRootPostDivider(kCLOCK_RootUart3)) / 10
#define BOARD_UART_IRQ UART3_IRQn
#define BOARD_UART_IRQ_HANDLER UART3_IRQHandler

#define BOARD_GPC_BASEADDR GPC
#define BOARD_MU_IRQ_NUM MU_M4_IRQn
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
 * API
 ******************************************************************************/

void BOARD_InitDebugConsole(void);
void BOARD_InitMemory(void);
void BOARD_RdcInit(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* _BOARD_H_ */
