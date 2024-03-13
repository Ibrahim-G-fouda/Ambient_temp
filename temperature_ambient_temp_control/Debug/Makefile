################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../ADC_drives.c \
../Dio_drives.c \
../i_to_string1.c \
../kypad_drives.c \
../lcd_drives.c \
../putton_drives.c \
../relay.c \
../temperature_ampient_temp_control.c \
../timer_drives.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
ADC_drives.o \
Dio_drives.o \
i_to_string1.o \
kypad_drives.o \
lcd_drives.o \
putton_drives.o \
relay.o \
temperature_ampient_temp_control.o \
timer_drives.o


OBJS_AS_ARGS +=  \
ADC_drives.o \
Dio_drives.o \
i_to_string1.o \
kypad_drives.o \
lcd_drives.o \
putton_drives.o \
relay.o \
temperature_ampient_temp_control.o \
timer_drives.o


C_DEPS +=  \
ADC_drives.d \
Dio_drives.d \
i_to_string1.d \
kypad_drives.d \
lcd_drives.d \
putton_drives.d \
relay.d \
temperature_ampient_temp_control.d \
timer_drives.d


C_DEPS_AS_ARGS +=  \
ADC_drives.d \
Dio_drives.d \
i_to_string1.d \
kypad_drives.d \
lcd_drives.d \
putton_drives.d \
relay.d \
temperature_ampient_temp_control.d \
timer_drives.d


OUTPUT_FILE_PATH +=temperature_ampient_temp_control.elf

OUTPUT_FILE_PATH_AS_ARGS +=temperature_ampient_temp_control.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler



















./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega32   -o"$@" "$<" 
	@echo Finished building: $<



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="temperature_ampient_temp_control.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group  -mmcu=atmega32  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "temperature_ampient_temp_control.elf" "temperature_ampient_temp_control.hex"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "temperature_ampient_temp_control.elf" "temperature_ampient_temp_control.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objdump.exe" -h -S "temperature_ampient_temp_control.elf" > "temperature_ampient_temp_control.lss"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "temperature_ampient_temp_control.elf" "temperature_ampient_temp_control.srec"
	"C:\Program Files (x86)\Atmel\Atmel Studio 6.0\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-size.exe" "temperature_ampient_temp_control.elf"
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "temperature_ampient_temp_control.elf" "temperature_ampient_temp_control.a" "temperature_ampient_temp_control.hex" "temperature_ampient_temp_control.lss" "temperature_ampient_temp_control.eep" "temperature_ampient_temp_control.map" "temperature_ampient_temp_control.srec"
	