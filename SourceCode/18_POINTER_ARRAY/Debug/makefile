################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf tinyara.bin tinyara_head.bin "18_POINTER_ARRAY.map"

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
tinyara.bin \

SECONDARY_HEADBIN += \
tinyara_head.bin \


# All Target
all: 18_POINTER_ARRAY secondary-outputs

# Tool invocations
18_POINTER_ARRAY: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARTIK GCC C Linker'
	arm-none-eabi-ld  -T"C:/ARTIK/SDK/A053/v1.7/common/scripts/flash.ld" -nostartfiles -nodefaultlibs -L"C:/ARTIK/SDK/A053/v1.7/libsdk/extra/libs" -L"C:/ARTIK/toolchains/gcc-arm-none-eabi/v4.9-2015q3/lib/gcc/arm-none-eabi/4.9.3" -Map="18_POINTER_ARRAY.map" --gc-sections --entry=__start "C:/ARTIK/SDK/A053/v1.7/libsdk/extra/libs/arm_vectortab.o" -o "18_POINTER_ARRAY" --start-group $(OBJS) $(USER_OBJS) $(LIBS) --end-group
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

tinyara.bin: 18_POINTER_ARRAY
	@echo 'Invoking: ARTIK GCC Create Flash Image'
	arm-none-eabi-objcopy -O binary "18_POINTER_ARRAY"  "tinyara.bin"
	@echo 'Finished building: $@'
	@echo ' '

tinyara_head.bin: tinyara.bin
	@echo 'Invoking: ARTIK GCC Create Head Bin'
	C:/ARTIK/SDK/A053/v1.7/common/tools/s5jchksum.py "tinyara.bin"  "tinyara_head.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(ASM_DEPS)$(S_UPPER_DEPS)$(SECONDARY_HEADBIN)$(C_DEPS) 18_POINTER_ARRAY
	-@echo ' '

post-build:
	-echo "Next step is to generate .bin file"
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_HEADBIN)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
