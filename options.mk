# ################################################################ # The idea of this file is to have the options for the  specific
# board or microcotroller to be used on the project.
#
# ################################################################

# ################################################################
# tool paths
# ################################################################
TOOLS_PATH:= /opt/gcc-arm-none-eabi-9-2019-q4-major/bin
PREFIX:= arm-none-eabi-

# ################################################################
# binaries
# ################################################################
# Platform depending options to compile
ifeq ($(PLATFORM),HOST)
CC:= gcc
LD:= $(CC)
SZ:= $(GCC)
DEFS = HOST
CFLAGS = -Wall -Werror -g -std=c99 -O0
else
ifdef TOOLS_PATH
CC:= $(TOOLS_PATH)/$(PREFIX)gcc
AS:= $(TOOLS_PATH)/$(PREFIX)gcc -x assembler-with-cpp
LD:= $(TOOLS_PATH)/$(PREFIX)ld
SZ:= $(TOOLS_PATH)/$(PREFIX)size
OD:= $(TOOLS_PATH)/$(PREFIX)objdump
CP:= $(TOOLS_PATH)/$(PREFIX)objcopy
else
CC:= $(PREFIX)gcc
AS:= $(PREFIX)gcc -x assembler-with-cpp
LD:= $(PREFIX)ld
SZ:= $(PREFIX)size
OD:= $(PREFIX)objdump
CP:= $(PREFIX)objcopy
endif
endif
HEX:= $(CP) -O ihex
BIN:= $(CP) -O binary -S

# ################################################################
# Flags and compilation options
# ################################################################
# Micro options
CPU:= -mcpu=cortex-m4
# fpu and float-abi
FPU:= -mfpu=fpv4-sp-d16
FLOAT-ABI:= -mfloat-abi=hard
# architecture
ARCH:= -mthumb
SPECS:= --specs=nosys.specs
# optimization
OPT:= -Og
# Compiler flags and defines
MCU = $(CPU) $(ARCH) $(FPU) $(FLOAT-ABI)

C_DEFS = -DSTM32F302x8
CPPFLAGS = -MMD -MP -MF"$(@:%.o=%.dep)"
ASFLAGS = $(MCU) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

CFLAGS = $(MCU) $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

ifeq ($(DEBUG), 1)
CFLAGS += -g -gdwarf-2
endif
CFLAGS += $(CPPFLAGS)

#######################################
# LDFLAGS
#######################################
# libraries
LIBS = -lc -lm -lnosys 
LDFLAGS = $(MCU) $(SPECS) -T$(LDSCRIPT) $(LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections

# *** EOF ***
