/*
 * Copyright 2017-2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * 
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.0
processor: MIMX8MQ6xxxJZ
package_id: MIMX8MQ6DVAJZ
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {coreID: m4}
- pin_list:
  - {pin_num: B6, peripheral: UART2, signal: uart_rx, pin_signal: UART2_RXD, PUE: Enabled, SRE: MEDIUM, DSE: OHM_45}
  - {pin_num: D6, peripheral: UART2, signal: uart_tx, pin_signal: UART2_TXD, PUE: Enabled, SRE: MEDIUM, DSE: OHM_45}
  - {pin_num: G19, peripheral: QSPI, signal: qspi_a_sclk, pin_signal: NAND_ALE, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
  - {pin_num: H19, peripheral: QSPI, signal: qspi_a_ss0_b, pin_signal: NAND_CE0_B, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
  - {pin_num: G20, peripheral: QSPI, signal: 'qspi_a_data, 0', pin_signal: NAND_DATA00, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
  - {pin_num: J20, peripheral: QSPI, signal: 'qspi_a_data, 1', pin_signal: NAND_DATA01, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
  - {pin_num: H22, peripheral: QSPI, signal: 'qspi_a_data, 2', pin_signal: NAND_DATA02, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
  - {pin_num: J21, peripheral: QSPI, signal: 'qspi_a_data, 3', pin_signal: NAND_DATA03, HYS: Enabled, SRE: SLOW, DSE: OHM_105}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M4[m4] */
    IOMUXC_SetPinMux(IOMUXC_NAND_ALE_QSPI_A_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_ALE_QSPI_A_SCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_NAND_CE0_B_QSPI_A_SS0_B, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_CE0_B_QSPI_A_SS0_B, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_NAND_DATA00_QSPI_A_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_DATA00_QSPI_A_DATA0, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_NAND_DATA01_QSPI_A_DATA1, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_DATA01_QSPI_A_DATA1, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_NAND_DATA02_QSPI_A_DATA2, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_DATA02_QSPI_A_DATA2, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_NAND_DATA03_QSPI_A_DATA3, 0U);
    IOMUXC_SetPinConfig(IOMUXC_NAND_DATA03_QSPI_A_DATA3, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_VSEL(3U));
    IOMUXC_SetPinMux(IOMUXC_UART3_RXD_UART3_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART3_RXD_UART3_RX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART3_TXD_UART3_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART3_TXD_UART3_TX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
