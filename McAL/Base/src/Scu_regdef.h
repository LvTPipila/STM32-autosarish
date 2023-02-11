/********************************* [includes] *********************************/
/*
 * File:    Scu_regdef.h
 * brief:   This file contains the typedef for bite acces for the register that
 *          handles clocks, power management, and reset options.
 */

#ifndef SCU_REGDEF_H
#define SCU_REGDEF_H
/********************************* [includes] *********************************/

/******************************* [global macros] ******************************/

/****************************** [global typedefs] *****************************/
/* brief:   Power control register */
typedef struct _SCU_PWR_CR_Bits
{
  unsigned int LPDS:1;          /* [0] Low-power deepsleep */
  unsigned int PDDS:1;          /* [1] Power down deepsleep */
  unsigned int CWUF:1;          /* [2] Clear wakeup flag */
  unsigned int CSBF:1;          /* [3] Clear standby flag */
  unsigned int PVDE:1;          /* [4] Power voltage detector enable */
  unsigned int PLS:3;           /* [7:5] PVD level selection */
  unsigned int DBP:1;           /* [8] Disable RTC domain write protection */
  unsigned int reserved:23;     /* [31:9] */
}SCU_PWR_CR_Bits;

/* brief:   Power control/status register */
typedef struct _SCU_PWR_CSR_Bits
{
  unsigned int WUF:1;           /* [0] Wakeup flag */
  unsigned int SBF:1;           /* [1] Standby flag */
  unsigned int PVDO:1;          /* [2] PVD output */
  unsigned int reserved1:5;     /* [7:3] */
  unsigned int EWUP1:1;         /* [8] Enable WKUP1 pin */
  unsigned int EWUP2:1;         /* [9] Enable WKUP2 pin */
  unsigned int EWUP3:1;         /* [10] Enable WKUP3 pin */
  unsigned int reserved2:21;    /* [31:11] */
}SCU_PWR_CSR_Bits;

/* brief:   Clock control register */
typedef struct _SCU_RCC_CR_Bits
{
  unsigned int HSION:1;         /* [0] HSI clock enable */
  unsigned int HSIRDY:1;        /* [1] HSI clock ready flag */
  unsigned int reserved1:1;     /* [2] */
  unsigned int HSITRIM:5;       /* [7:3] HSI clock trimming */
  unsigned int HSICAL:8;        /* [15:8] HSI clock calibration */
  unsigned int HSEON:1;         /* [16] HSE clock enable */
  unsigned int HSERDY:1;        /* [17] HSE clock ready flag */
  unsigned int HSEBYP:1;        /* [18] HSE crystal oscillator bypass */
  unsigned int CSSON:1;         /* [19] Clock security system enable */
  unsigned int reserved2:4;     /* [23:20] */
  unsigned int PLLON:1;         /* [24] PLL enable */
  unsigned int PLLRDY:1;        /* [25] PLL clock ready flag */
  unsigned int reserved3:6;     /* [31:26] */
}SCU_RCC_CR_Bits;  

/* brief:   Clock configuration register */
typedef struct _SCU_RCC_CFGR_Bits
{
  unsigned int SW:2;            /* [1:0] System clock switch */
  unsigned int SWS:2;           /* [3:2] System clock switch status */
  unsigned int HPRE:4;          /* [7:4] HLCK prescaler */
  unsigned int PPRE1:3;         /* [10:8] APB low speed prescaler (APB1) */
  unsigned int PPRE2:3;         /* [13:11] APB high speed prescaler (APB2) */
  unsigned int reserved1:2;     /* [15:14] */
  unsigned int PLLSRC:1;        /* [16] PLL entry clock source */
  unsigned int PLLXTPRE:1;      /* [17] HSE divider for PLL input clock */
  unsigned int PLLMUL:4;        /* [21:18] PLL multiplication factor */
  unsigned int USBPRE:1;        /* [22] USB prescaler */
  unsigned int I2SSRC:1;        /* [23] I2S external clock source selector*/
  unsigned int MCO:3;           /* [26:24] Microcontroller clock output */
  unsigned int reserved4:1;     /* [27] */
  unsigned int MCOPRE:3;        /* [30:28] Microcontroller clk output prescal */
  unsigned int PLLNODIV:1;      /* [31] Do not divide PLL to MCO */
}SCU_RCC_CFGR_Bits;

/* brief: Clock interrupt register */
typedef struct _SCU_RCC_CIR_Bits
{
  unsigned int LSIRDYF:1;       /* [0] LSI ready interrupt flag */
  unsigned int LSERDYF:1;       /* [1] LSE ready interrupt flag */
  unsigned int HSIRDYF:1;       /* [2] HSI ready interrupt flag */
  unsigned int HSERDYF:1;       /* [3] HSE ready interrupt flag */
  unsigned int PLLRDYF:1;       /* [4] PLL ready interrupt flag */
  unsigned int reserved1:2;     /* [6:5] */
  unsigned int CSSF:1;          /* [7] Clock security system int flag */
  unsigned int LSIRDYIE:1;      /* [8] LSI ready int enable */
  unsigned int LSERDYIE:1;      /* [9] LSE ready int enable */
  unsigned int HSIRDYIE:1;      /* [10] HSI ready int enable */
  unsigned int HSERDYIE:1;      /* [11] HSE ready int enable */
  unsigned int PLLRDYIE:1;      /* [12] PLL ready int enable */
  unsigned int reserved2:3;     /* [15:13] */
  unsigned int LSIRDYC:1;       /* [16] LSI ready int enable */
  unsigned int LSERDYC:1;       /* [17] LSE ready int enable */
  unsigned int HSIRDYC:1;       /* [18] HSI ready int enable */
  unsigned int HSERDYC:1;       /* [19] HSE ready int enable */
  unsigned int PLLRDYC:1;       /* [20] PLL ready int enable */
  unsigned int reserved3:2;     /* [22:21] */
  unsigned int CSSC:1;          /* [23] Clock security system int clear */
  unsigned int reserved4:8;     /* [31:24] */
}SCU_RCC_CIR_Bits;

/* brief: APB2 peripheral reset register */
typedef struct _SCU_RCC_APB2RSTR_Bits
{

}SCU_RCC_APB2RSTR_Bits;

/* brief: APB1 peripheral reset register */
typedef struct _SCU_RCC_APB1RSTR_Bits
{

}SCU_RCC_APB1RSTR_Bits;

/* brief: AHB1 peripheral clock enable register */
typedef struct _SCU_RCC_AHBENR_Bits
{

}SCU_RCC_AHBENR_Bits;

/* brief: APB2ENR peripheral clock enable register */
typedef struct _SCU_RCC_APB2ENR_Bits
{

}SCU_RCC_APB2ENR_Bits;

/* brief: APB1 peripheral clock enable register */
typedef struct _SCU_RCC_APB1ENR_Bits
{
  
}SCU_RCC_APB1ENR_Bits;

/* brief: RTC domain control register */
typedef struct _SCU_RCC_BDCR_Bits
{
  unsigned int LSEON:1;         /* [0] LSE oscillator enable */
  unsigned int LSERDY:1;        /* [1] LSE osc ready */
  unsigned int LSEBYP:1;        /* [2] LSE osc bypass */
  unsigned int LSEDRV:2;        /* [4:3] LSE osc drive capability */
  unsigned int reserved1:3;     /* [7:5] */
  unsigned int RTCSEL:2;        /* [9:8] RTC clock source selection */
  unsigned int reserved2:5;     /* [14:10] */
  unsigned int RTCEN:1;         /* [15] RTC clock enable */
  unsigned int BDRST:1;         /* [16] RTC domain software reset */
}SCU_RCC_BDCR_Bits;

/* brief: CSR Control/status register */
typedef struct _SCU_RCC_CSR_Bits
{
  unsigned int LSION:1;         /* [0] LSI oscillator enable */
  unsigned int LSIRDY:1;        /* [1] LSI osc ready */
  unsigned int reserved1:22;    /* [23:2] */
  unsigned int RMVF:1;          /* [24] Remove reset flag */
  unsigned int OBLRSTF:1;       /* [25] Option byte loader reset flag */
  unsigned int PINRSTF:1;       /* [26] PIN reset falg */
  unsigned int PORRSTF:1;       /* [27] POR/PRD flag */
  unsigned int SFTRSTF:1;       /* [28] Software reset flag */
  unsigned int IWDGRSTF:1;      /* [29] Independent window WD reset flag */
  unsigned int WWDGRSTF:1;      /* [30] Window watchdog reset flag */
  unsigned int LPWRSTF:1;       /* [31] Low-power reset flag */
}SCU_RCC_CSR_Bits;

/* brief: AHBRSTR AHB peripheral reset register */
typedef struct _SCU_RCC_AHBRSTR_Bits
{
  unsigned int reserved1:16;    /* [4:0] */
  unsigned int IOPHRST:1;       /* [16] I/O port H reset */
  unsigned int IOPARST:1;       /* [17] I/O port A reset */
  unsigned int IOPBRST:1;       /* [18] I/O port B reset */
  unsigned int IOPCRST:1;       /* [19] I/O port C reset */
  unsigned int IOPDRST:1;       /* [20] I/O port D reset */
  unsigned int IOPERST:1;       /* [21] I/O port E reset */
  unsigned int IOPFRST:1;       /* [22] I/O port F reset */
  unsigned int IOPGRST:1;       /* [23] I/O port G reset */
  unsigned int TSCRST:1;        /* [24] Touch sensing controller reset */
  unsigned int reserved2:3;     /* [27:25] */
  unsigned int ADC12RST:1;      /* [28] ADC1/ADC2 reset */
  unsigned int reserved3:3;     /* [31:29] */
}SCU_RCC_AHBRSTR_Bits;

/* brief: CFGR2 clock configuration register 2 */
typedef struct _SCU_RCC_CFGR2_Bits
{
  unsigned int PREDIV:4;        /* [3:0] PREDIV division factor */
  unsigned int ADC12PRES:5;     /* [8:4] ADC12 prescaler */
  unsigned int reserved1:23;    /* [31:9] */
}SCU_RCC_CFGR2_Bits;

/* brief: CFGR3 clock configuration register 3 */
typedef struct _SCU_RCC_CFGR3_Bits
{
  unsigned int USART1SW:2;      /* [1:0] USART1 clock source selection */
  unsigned int reserved1:2;     /* [3:2] */
  unsigned int I2C1SW:1;        /* [4] I2C1 clock source selection */
  unsigned int I2C2SW:1;        /* [5] I2C2 clock source selection */
  unsigned int I2C3SW:1;        /* [6] I2C3 clock source selection */
  unsigned int reserved2:1;     /* [7] */
  unsigned int TIM1SW:1;        /* [8] Timer1 clock source selection */
  unsigned int reserved3:1;     /* [9] */
  unsigned int TIM15SW:1;       /* [10] Timer15 clock source selection */
  unsigned int TIM16SW:1;       /* [11] Timer16 clock source selection */
  unsigned int reserved4:1;     /* [12] */
  unsigned int TIM17SW:1;       /* [13] Timer17 clock source selection */
  unsigned int reserved5:10;    /* [23:14] */
  unsigned int TIM2SW:1;        /* [24] Timer2 clock source selection */
  unsigned int TIM34SW:1;       /* [25] Timer34 clock source selection */
  unsigned int reserved6:6;     /* [31:26] */
}SCU_RCC_CFGR3_Bits;



/* brief: Structures for accessing the registers */
/* brief: */
typedef union _SCU_PWR_CR
{
  unsigned int U;       /* unsigned access */
  SCU_PWR_CR_Bits B;    /* bitfield access */
}SCU_PRW_CR;

/* brief: */
typedef union _SCU_PWR_CSR
{
  unsigned int U;       /* unsigned access */
  SCU_PWR_CSR_Bits B;    /* bitfield access */
}SCU_PRW_CSR;


typedef union _SCU_RCC_CR
{
  unsigned int U;       /* unsigned access */
  SCU_RCC_CR_Bits B;    /* Bitfield access */
}SCU_RCC_CR;

/* brief: */
typedef struct _SCU_RCC_CFGR
{
  unsigned int U;       /* unsigned access */
  SCU_RCC_CFGR_Bits B;  /* bitfield access */
}SCU_RCC_CFGR;

/* brief: */
typedef struct _SCU_RCC_CIR
{
  unsigned int U;       /* unsigned access */
  SCU_RCC_CIR_Bits B;  /* bitfield access */
}SCU_RCC_CIR;

/* brief: */
typedef struct _SCU_RCC_APB2RSTR
{
  unsigned int U;           /* unsigned access */
  SCU_RCC_APB2RSTR_Bits B;  /* bitfield access */
}SCU_RCC_APB2RSTR;

/* brief: */
typedef struct _SCU_RCC_APB1RSTR
{
  unsigned int U;           /* unsigned access */
  SCU_RCC_APB1RSTR_Bits B;  /* bitfield access */
}SCU_RCC_APB1RSTR;

/* brief: */
typedef struct _SCU_RCC_AHBENR
{
  unsigned int U;         /* unsigned access */
  SCU_RCC_AHBENR_Bits B;  /* bitfield access */
}SCU_RCC_AHBENR;

/* brief: */
typedef struct _SCU_RCC_APB2ENR
{
  unsigned int U;          /* unsigned access */
  SCU_RCC_APB2ENR_Bits B;  /* bitfield access */
}SCU_RCC_APB2ENR;

/* brief: */
typedef struct _SCU_RCC_APB1ENR
{
  unsigned int U;           /* unsigned access */
  SCU_RCC_APB1ENR_Bits B;   /* bitfield access */
}SCU_RCC_APB1ENR;

/* brief: */
typedef struct _SCU_RCC_BDCR
{
  unsigned int U;       /* unsigned access */
  SCU_RCC_BDCR_Bits B;  /* bitfield access */
}SCU_RCC_BDCR;

/* brief: */
typedef struct _SCU_RCC_CSR
{
  unsigned int U;       /* unsigned access */
  SCU_RCC_CSR_Bits B;   /* bitfield access */
}SCU_RCC_CSR;

/* brief: */
typedef struct _SCU_RCC_AHBRSTR
{
  unsigned int U;          /* unsigned access */
  SCU_RCC_AHBRSTR_Bits B;  /* bitfield access */
}SCU_RCC_AHBRSTR;

/* brief: */
typedef struct _SCU_RCC_CFGR2
{
  unsigned int U;           /* unsigned access */
  SCU_RCC_CFGR2_Bits B;     /* bitfield access */
}SCU_RCC_CFGR2;

/* brief: */
typedef struct _SCU_RCC_CFGR3
{
  unsigned int U;           /* unsigned access */
  SCU_RCC_CFGR3_Bits B;     /* bitfield access */
}SCU_RCC_CFGR3;

/************************** [variable declaration] ****************************/

/********************** [external function declarations] **********************/
/**
 * @brief Add a brief description of this function/interface.
 *
 * param  Add description of parameter value.
 *
 * retval Add name description of return value.
 */
//void template_fcn(void);
#endif /* if !define(SCU_REGDEF_H) */
/****************************** [end of file] *********************************/
