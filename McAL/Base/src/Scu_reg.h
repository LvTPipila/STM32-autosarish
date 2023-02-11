/********************************* [includes] *********************************/
/*
 * File:    Scu_reg.h
 * brief:   This file contains the memory addresses for the registers.
 */

#ifndef SCU_REG_H
#define SCU_REG_H
/********************************* [includes] *********************************/
#include "Scu_regdef.h"
/******************************* [global macros] ******************************/

/* brief: Scu PWR register base address */
#define STM32_SCU_PWR_BASE_ADDRESS          (*(volatile *) 0x40007000)

/* brief: Scu PWR_CR register memory address */
#define STM32_SCU_PWR_CR            (*(volatile SCU_PWR_CR *) 0x40007000)

/* brief: Scu PWR_CSR register memory address */
#define STM32_SCU_PWR_CSR           (*(volatile SCU_PWR_CSR *) 0x40007004)


/* brief: Scu RCC register memory address */
#define STM32_SCU_RCC_BASE_ADDRESS          (*(volatile *) 0x40021000)

/* brief: Scu RCC_CR register memory address */
#define STM32_SCU_RCC_CR            (*(volatile SCU_RCC_CR *) 0x40021000)

/* brief: Scu RCC_CFGR register mem address */
#define STM32_SCU_RCC_CFGR          (*(volatile SCU_RCC_CFGR *) 0x40021004)

/* brief: Scu RCC_CIR register mem address */
#define STM32_SCU_RCC_CIR           (*(volatile SCU_RCC_CIR *) 0x40021008)

/* brief: Scu RCC_APB2RSTR register mem address */
#define STM32_SCU_RCC_APB2RSTR      (*(volatile SCU_RCC_APB2RSRT *) 0x4002100C)

/* brief: Scu RCC_APB1RSRT register mem address */
#define STM32_SCU_RCC_APB1RSTR      (*(volatile SCU_RCC_APB1RSTR *) 0x40021010)

/* brief: Scu RCC_AHBENR register mem address */
#define STM32_SCU_RCC_AHBENR        (*(volatile SCU_RCC_AHBENR *) 0x40021014)

/* brief: Scu RCC_APB2ENR register mem address */
#define STM32_SCU_RCC_APB2ENR       (*(volatile SCU_RCC_APB2ENR *) 0x40021018)

/* brief: Scu RCC_APB1ENR register mem address */
#define STM32_SCU_RCC_APB1ENR       (*(volatile SCU_RCC_APB1ENR *) 0x4002101C)

/* brief: Scu RCC_BDCR register mem address */
#define STM32_SCU_RCC_BDCR          (*(volatile SCU_RCC_BDCR *) 0x40021020)

/* brief: Scu RCC_CSR register mem address */
#define STM32_SCU_RCC_CSR           (*(volatile SCU_RCC_CSR *) 0x40021024)

/* brief: Scu RCC_AHBRSTR register mem address */
#define STM32_SCU_RCC_AHBRSTR       (*(volatile SCU_RCC_AHBRSTR *) 0x40021028)

/* brief: Scu RCC_CFGR2 register mem address */
#define STM32_SACU_RCC_CFGR2        (*(volatile SCU_RCC_CFGR2 *) 0x4002102C)

/* brief: Scu RCC_CFGR3 register mem address */
#define STM32_SACU_RCC_CFGR3        (*(volatile SCU_RCC_CFGR3 *) 0x40021030)


/****************************** [global typedefs] *****************************/

/************************** [variable declaration] ****************************/

/********************** [external function declarations] **********************/

#endif /* if !define(SCU_REG_H) */
/****************************** [end of file] *********************************/
