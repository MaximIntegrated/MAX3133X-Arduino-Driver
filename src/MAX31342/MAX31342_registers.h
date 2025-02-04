/*******************************************************************************
* Copyright(C) Analog Devices Inc., All Rights Reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files(the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY CLAIM, DAMAGES
* OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*
* Except as contained in this notice, the name of Analog Devices Inc.
* shall not be used except as stated in the Analog Devices Inc.
* Branding Policy.
*
* The mere transfer of this software does not imply any licenses
* of trade secrets, proprietary technology, copyrights, patents,
* trademarks, maskwork rights, or any other form of intellectual
* property whatsoever. Analog Devices Inc.retains all ownership rights.
********************************************************************************
*/

#ifndef _MAX31342_REGISTERS_H_
#define _MAX31342_REGISTERS_H_


#define MAX31342_I2C_ADDRESS                      0x69

// Registers
#define  MAX31342_R_CFG1                    	( 0x00 )
#define  MAX31342_R_CFG2                    	( 0x01 )
#define  MAX31342_R_TIMER_CFG                   ( 0x03 )
#define  MAX31342_R_INT_EN                      ( 0x04 )
#define  MAX31342_R_INT_STATUS                  ( 0x05 )
#define  MAX31342_R_SECONDS                     ( 0x06 )
#define  MAX31342_R_MINUTES                     ( 0x07 )
#define  MAX31342_R_HOURS                       ( 0x08 )
#define  MAX31342_R_DAY                         ( 0x09 )
#define  MAX31342_R_DATE                        ( 0x0A )
#define  MAX31342_R_MONTH                       ( 0x0B )
#define  MAX31342_R_YEAR                        ( 0x0C )
#define  MAX31342_R_ALM1_SEC                    ( 0x0D )
#define  MAX31342_R_ALM1_MIN                    ( 0x0E )
#define  MAX31342_R_ALM1_HRS                    ( 0x0F )
#define  MAX31342_R_ALM1DAY_DATE                ( 0x10 )
#define  MAX31342_R_ALM1_MON                    ( 0x11 )
#define  MAX31342_R_ALM1_YEAR                   ( 0x12 )
#define  MAX31342_R_ALM2_MIN                    ( 0x13 )
#define  MAX31342_R_ALM2_HRS                    ( 0x14 )
#define  MAX31342_R_ALM2DAY_DATE                ( 0x15 )
#define  MAX31342_R_TIMER_COUNT                 ( 0x16 )
#define  MAX31342_R_TIMER_INIT                  ( 0x17 )
#define  MAX31342_R_CLOCK_SYNC                  ( 0x58 )


// Config 1 register bits                       
#define MAX31342_F_CFG1_SWRSTN_POS       	    0
#define MAX31342_F_CFG1_SWRSTN         	        (1<<MAX31342_F_CFG1_SWRSTN_POS)
#define MAX31342_F_CFG1_RS_POS                  1
#define MAX31342_F_CFG1_RS                      (3<<MAX31342_F_CFG1_RS_POS)
#define MAX31342_F_CFG1_OSCONZ_POS       	    3
#define MAX31342_F_CFG1_OSCONZ          	    (1<<MAX31342_F_CFG1_OSCONZ_POS)
#define MAX31342_F_CFG1_CLKSEL_POS       	    4
#define MAX31342_F_CFG1_CLKSEL          	    (3<<MAX31342_F_CFG1_CLKSEL_POS)
#define MAX31342_F_CFG1_INTCN_POS       	    6
#define MAX31342_F_CFG1_INTCN          	        (1<<MAX31342_F_CFG1_INTCN_POS)
#define MAX31342_F_CFG1_ECLK_POS       	        7
#define MAX31342_F_CFG1_ECLK          	        (1<<MAX31342_F_CFG1_ECLK_POS)

// Config 2 register bits                       
#define MAX31342_F_CFG2_SET_RTC_POS       	    1
#define MAX31342_F_CFG2_SET_RTC          	    (1<<MAX31342_F_CFG2_SET_RTC_POS)
#define MAX31342_F_CFG2_RD_RTC_POS              2
#define MAX31342_F_CFG2_RD_RTC                  (1<<MAX31342_F_CFG2_RD_RTC_POS)
#define MAX31342_F_CFG2_I2C_TIMEOUT_POS       	3
#define MAX31342_F_CFG2_I2C_TIMEOUT          	(1<<MAX31342_F_CFG2_I2C_TIMEOUT_POS)
#define MAX31342_F_CFG2_DATA_RETEN_POS       	6
#define MAX31342_F_CFG2_DATA_RETEN          	(1<<MAX31342_F_CFG2_DATA_RETEN_POS)

// Timer config register bits
#define MAX31342_F_TIMER_CFG_TFS_POS       	    0
#define MAX31342_F_TIMER_CFG_TFS          	    (3<<MAX31342_F_TIMER_CFG_TFS_POS)
#define MAX31342_F_TIMER_CFG_TRPT_POS           2
#define MAX31342_F_TIMER_CFG_TRPT               (1<<MAX31342_F_TIMER_CFG_TRPT_POS)
#define MAX31342_F_TIMER_CFG_TE_POS       	    4
#define MAX31342_F_TIMER_CFG_TE          	    (1<<MAX31342_F_TIMER_CFG_TE_POS)
#define MAX31342_F_TIMER_CFG_TPAUSE_POS         5
#define MAX31342_F_TIMER_CFG_TPAUSE             (1<<MAX31342_F_TIMER_CFG_TPAUSE_POS)

//Interrupt enable register bits
#define MAX31342_F_INT_EN_A1IE_POS       	    0
#define MAX31342_F_INT_EN_A1IE           	    (1<<MAX31342_F_INT_EN_A1IE_POS)
#define MAX31342_F_INT_EN_A2IE_POS       	    1
#define MAX31342_F_INT_EN_A2IE           	    (1<<MAX31342_F_INT_EN_A2IE_POS)
#define MAX31342_F_INT_EN_TIE_POS       	    2
#define MAX31342_F_INT_EN_TIE           	    (1<<MAX31342_F_INT_EN_TIE_POS)
#define MAX31342_F_INT_EN_DOSF_POS       	    6
#define MAX31342_F_INT_EN_DOSF           	    (1<<MAX31342_F_INT_EN_DOSF_POS)

//Interrupt status register bits
#define MAX31342_F_INT_STATUS_A1IF_POS       	0
#define MAX31342_F_INT_STATUS_A1IF           	(1<<MAX31342_F_INT_STATUS_A1IF_POS)
#define MAX31342_F_INT_STATUS_A2IF_POS       	1
#define MAX31342_F_INT_STATUS_A2IF           	(1<<MAX31342_F_INT_STATUS_A2IF_POS)
#define MAX31342_F_INT_STATUS_TIF_POS       	2
#define MAX31342_F_INT_STATUS_TIF           	(1<<MAX31342_F_INT_STATUS_TIF_POS)
#define MAX31342_F_INT_STATUS_OSF_POS       	6
#define MAX31342_F_INT_STATUS_OSF           	(1<<MAX31342_F_INT_STATUS_OSF_POS)
#define MAX31342_F_INT_STATUS_LOS_POS       	7
#define MAX31342_F_INT_STATUS_LOS           	(1<<MAX31342_F_INT_STATUS_LOS_POS)

// Clock sync register bits                      
#define MAX31342_F_CLOCK_SYNC_SYNC_DELAY_POS	0
#define MAX31342_F_CLOCK_SYNC_SYNC_DELAY		(3<<MAX31342_F_CLOCK_SYNC_SYNC_DELAY_POS)
 


#endif /* _MAX31342_REGISTERS_H_ */
