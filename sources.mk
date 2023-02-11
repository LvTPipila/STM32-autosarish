#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

# Add your Source files to this variable
C_SOURCES = main.c \
		    ./McAL/IoD/Dio/src/dotProduct.c \
			./McAL/McD/Mcu/src/Mcu.c \
			./Sys/Os/src/stm32f3xx_it.c \
			./Sys/Os/src/system_stm32f3xx.c

ASM_SOURCES = startup_stm32f302x8.s
# link script
LDSCRIPT = STM32F302R8Tx_FLASH.ld

#ifeq ($(PLATFORM),MSP432)
#	SOURCES+= src/interrupts_msp432p401r_gcc.c \
			  src/startup_msp432p401r_gcc.c \
			  src/system_msp432p401r.c
#endif

# Add your include paths to this variable
C_INCLUDES = -IMcAL/IoD/Dio/src \
			 -IMcAL/Base/src \
			 -IMcAL/McD/Mcu/cfg \
			 -IMcAL/McD/Mcu/src \
			 -ISys/Os/src

