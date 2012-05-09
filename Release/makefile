################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
hello_world_ATmega16.lss \

FLASH_IMAGE += \
hello_world_ATmega16.hex \

EEPROM_IMAGE += \
hello_world_ATmega16.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: hello_world_ATmega16.elf secondary-outputs

# Tool invocations
hello_world_ATmega16.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,hello_world_ATmega16.map -mmcu=atmega16 -o "hello_world_ATmega16.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

hello_world_ATmega16.lss: hello_world_ATmega16.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S hello_world_ATmega16.elf  >"hello_world_ATmega16.lss"
	@echo 'Finished building: $@'
	@echo ' '

hello_world_ATmega16.hex: hello_world_ATmega16.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex hello_world_ATmega16.elf  "hello_world_ATmega16.hex"
	@echo 'Finished building: $@'
	@echo ' '

hello_world_ATmega16.eep: hello_world_ATmega16.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex hello_world_ATmega16.elf  "hello_world_ATmega16.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: hello_world_ATmega16.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 hello_world_ATmega16.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(EEPROM_IMAGE)$(FLASH_IMAGE)$(ELFS)$(LSS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) hello_world_ATmega16.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
