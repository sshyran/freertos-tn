/*
 * Copyright 2019-2020 NXP
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
product: Pins v8.0
processor: MIMX8ML8xxxLZ
package_id: MIMX8ML8DVNLZ
mcu_data: ksdk2_0
processor_version: 0.8.3
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
- options: {callFromInitBoot: 'false', coreID: m7}
- pin_list:
  - {pin_num: AJ5, peripheral: UART4, signal: uart_rx, pin_signal: UART4_RXD, PE: Enabled, PUE: Weak_Pull_Up, DSE: X1, SION: DISABLED}
  - {pin_num: AH5, peripheral: UART4, signal: uart_tx, pin_signal: UART4_TXD, PE: Enabled, PUE: Weak_Pull_Up, DSE: X1, SION: DISABLED}
  - {pin_num: AJ20, peripheral: SAI3, signal: sai_mclk, pin_signal: SAI3_MCLK, PE: Disabled, HYS: Schmitt, PUE: Weak_Pull_Up, FSEL: Fast, DSE: X6}
  - {pin_num: AH19, peripheral: SAI3, signal: sai_tx_bclk, pin_signal: SAI3_TXC, PE: Disabled, HYS: Schmitt, PUE: Weak_Pull_Up, FSEL: Fast, DSE: X6}
  - {pin_num: AH18, peripheral: SAI3, signal: 'sai_tx_data, 0', pin_signal: SAI3_TXD, PE: Disabled, HYS: Schmitt, PUE: Weak_Pull_Up, FSEL: Fast, DSE: X6}
  - {pin_num: AC16, peripheral: SAI3, signal: sai_tx_sync, pin_signal: SAI3_TXFS, PE: Disabled, HYS: Schmitt, PUE: Weak_Pull_Up, FSEL: Fast, DSE: X6}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M7F[m7] */
    IOMUXC_SetPinMux(IOMUXC_SAI3_MCLK_AUDIOMIX_SAI3_MCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI3_MCLK_AUDIOMIX_SAI3_MCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI3_TXC_AUDIOMIX_SAI3_TX_BCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI3_TXC_AUDIOMIX_SAI3_TX_BCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI3_TXD_AUDIOMIX_SAI3_TX_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI3_TXD_AUDIOMIX_SAI3_TX_DATA0, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_SAI3_TXFS_AUDIOMIX_SAI3_TX_SYNC, 0U);
    IOMUXC_SetPinConfig(IOMUXC_SAI3_TXFS_AUDIOMIX_SAI3_TX_SYNC, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(3U) |
                        IOMUXC_SW_PAD_CTL_PAD_FSEL_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART4_RXD_UART4_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_RXD_UART4_RX, 
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART4_TXD_UART4_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART4_TXD_UART4_TX, 
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {callFromInitBoot: 'false', coreID: m7}
- pin_list:
  - {pin_num: AJ7, peripheral: I2C3, signal: i2c_scl, pin_signal: I2C3_SCL, PE: Enabled, HYS: Schmitt, PUE: Weak_Pull_Up, DSE: X1, SION: ENABLED}
  - {pin_num: AJ6, peripheral: I2C3, signal: i2c_sda, pin_signal: I2C3_SDA, PE: Enabled, HYS: Schmitt, PUE: Weak_Pull_Up, DSE: X1, SION: ENABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_I2C_ConfigurePins(void) {                       /*!< Function assigned for the core: Cortex-M7F[m7] */
    IOMUXC_SetPinMux(IOMUXC_I2C3_SCL_I2C3_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C3_SCL_I2C3_SCL, 
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_I2C3_SDA_I2C3_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_I2C3_SDA_I2C3_SDA, 
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_HYS_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
