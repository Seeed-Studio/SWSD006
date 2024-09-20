/**
 * @file	  example_options.h
 *
 * @brief	 User options to be used in example applications
 *
 * The Clear BSD License
 * Copyright Semtech Corporation 2021. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted (subject to the limitations in the disclaimer
 * below) provided that the following conditions are met:
 *	 * Redistributions of source code must retain the above copyright
 *	   notice, this list of conditions and the following disclaimer.
 *	 * Redistributions in binary form must reproduce the above copyright
 *	   notice, this list of conditions and the following disclaimer in the
 *	   documentation and/or other materials provided with the distribution.
 *	 * Neither the name of the Semtech corporation nor the
 *	   names of its contributors may be used to endorse or promote products
 *	   derived from this software without specific prior written permission.
 *
 * NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
 * THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 * CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
 * NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL SEMTECH CORPORATION BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EXAMPLE_OPTIONS_H
#define EXAMPLE_OPTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * -----------------------------------------------------------------------------
 * --- DEPENDENCIES ------------------------------------------------------------
 */

#include <stdint.h>   // C99 types
#include <stdbool.h>  // bool type

#include "smtc_modem_api.h"

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC CONSTANTS --------------------------------------------------------
 */

/**
 * @brief LoRaWAN User credentials
 *		cd-zephyr-nov30
 * joineu 97742779212C2BB6
 * deveui 3BBE1562BCD35D32
 *	key 195029CB37A463742D063AF660281139
 */
// #define USER_LORAWAN_DEVICE_EUI						\
// 	{												  \
// 		0x3B, 0xBE, 0x15, 0x62, 0xBC, 0xD3, 0x5D, 0x32 \
// 	}
// #define USER_LORAWAN_JOIN_EUI						  \
// 	{												  \
// 		0x97, 0x74, 0x27, 0x79, 0x21, 0x2C, 0x2B, 0xB6 \
// 	}
// #define USER_LORAWAN_GEN_APP_KEY																	   \
// 	{																								  \
// 		0x19, 0x50, 0x29, 0xCB, 0x37, 0xA4, 0x63, 0x74, 0x2D, 0x06, 0x3A, 0xF6, 0x60, 0x28, 0x11, 0x39 \
// 	}
// #define USER_LORAWAN_APP_KEY																		   \
// 	{																								  \
// 		0x19, 0x50, 0x29, 0xCB, 0x37, 0xA4, 0x63, 0x74, 0x2D, 0x06, 0x3A, 0xF6, 0x60, 0x28, 0x11, 0x39 \
// 	}


#define DEMO_TEST_002 // EmbeddedWorldTrackerDemo-001
// #define DEMO_TEST_002 // EmbeddedWorldTrackerDemo-002
// #define DEMO_TEST_003 // EmbeddedWorldTrackerDemo-003
// #define DEMO_TEST_004 // EmbeddedWorldTrackerDemo-004
// #define DEMO_TEST_005 // EmbeddedWorldTrackerDemo-005
// #define DEMO_TEST_006 // EmbeddedWorldTrackerDemo-006
// #define DEMO_TEST_007 // EmbeddedWorldTrackerDemo-007
// #define DEMO_TEST_008 // EmbeddedWorldTrackerDemo-008
// #define DEMO_TEST_009 // EmbeddedWorldTrackerDemo-009

#if defined( DEMO_TEST_001 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x17 \
    }
#elif defined( DEMO_TEST_002 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x02 \
    }
#elif defined( DEMO_TEST_003 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x03 \
    }
#elif defined( DEMO_TEST_004 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x04 \
    }
#elif defined( DEMO_TEST_005 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x05 \
    }
#elif defined( DEMO_TEST_006 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x06 \
    }
#elif defined( DEMO_TEST_007 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x07 \
    }
#elif defined( DEMO_TEST_008 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x08 \
    }
#elif defined( DEMO_TEST_009 )
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x05, 0x04, 0x09 \
    }
#else
#define USER_LORAWAN_DEVICE_EUI                        \
    {                                                  \
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
    }
#endif

#define USER_LORAWAN_JOIN_EUI                          \
    {                                                  \
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
    }

#define USER_LORAWAN_GEN_APP_KEY                                                                       \
    {                                                                                                  \
        0xEC, 0x6B, 0x10, 0x47, 0xB7, 0x6B, 0x2C, 0x3C, 0x92, 0xCF, 0x9A, 0x12, 0x8A, 0x5C, 0xCF, 0xEB \
    }

#define USER_LORAWAN_APP_KEY                                                                           \
    {                                                                                                  \
        0xEC, 0x6B, 0x10, 0x47, 0xB7, 0x6B, 0x2C, 0x3C, 0x92, 0xCF, 0x9A, 0x12, 0x8A, 0x5C, 0xCF, 0xEB \
    }

/**
 * @brief Modem Region define
 */
#ifndef MODEM_EXAMPLE_REGION
#if !defined( SX128X )
#define MODEM_EXAMPLE_REGION SMTC_MODEM_REGION_EU_868
#else
#define MODEM_EXAMPLE_REGION SMTC_MODEM_REGION_WW2G4
#endif
#endif  // MODEM_EXAMPLE_REGION
// clang-format on

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_OPTIONS_H

/* --- EOF ------------------------------------------------------------------ */