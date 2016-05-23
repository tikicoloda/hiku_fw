/**
 * \file
 *
 * \brief Board configuration.
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef CONF_BOARD_H_INCLUDED
#define CONF_BOARD_H_INCLUDED


#ifndef HIKU_HW
#define HIKU_HW // this will be the flag to wrap around all the hiku related implementaions
#define CONF_BOARD_TWI4
#define CONF_FREERTOS_USE_TWI4
#endif /* nHIKU_HW */

//#define CONF_BOARD_KEEP_WATCHDOG_AT_INIT

#ifndef BOARD_FLEXCOM_TWI
/** FLEXCOM base address for TWI mode*/
#define BOARD_FLEXCOM_TWI    FLEXCOM4
#endif

#ifndef BOARD_FLEXCOM_SPI
/** FLEXCOM base address for SPI mode*/
#define BOARD_FLEXCOM_SPI    FLEXCOM5
#endif

#ifndef BOARD_FLEXCOM_USART
/** FLEXCOM base address for USART mode*/
#define BOARD_FLEXCOM_USART  FLEXCOM6
#endif

/** Enable Com Port. */
#define CONF_BOARD_UART_CONSOLE

/** Define USART used. */
#define CONF_FREERTOS_USE_USART0
#define CONF_FREERTOS_USE_USART7

#endif /* CONF_BOARD_H_INCLUDED */