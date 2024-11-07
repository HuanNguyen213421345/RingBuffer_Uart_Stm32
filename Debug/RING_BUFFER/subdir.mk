################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RING_BUFFER/Ring_Buffer.c 

OBJS += \
./RING_BUFFER/Ring_Buffer.o 

C_DEPS += \
./RING_BUFFER/Ring_Buffer.d 


# Each subdirectory must supply rules for building sources it contributes
RING_BUFFER/%.o RING_BUFFER/%.su RING_BUFFER/%.cyclo: ../RING_BUFFER/%.c RING_BUFFER/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/ASUS/STM32CubeIDE/workspace_1.16.1/RingBuffer_Uart/RING_BUFFER" -I../Core/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-RING_BUFFER

clean-RING_BUFFER:
	-$(RM) ./RING_BUFFER/Ring_Buffer.cyclo ./RING_BUFFER/Ring_Buffer.d ./RING_BUFFER/Ring_Buffer.o ./RING_BUFFER/Ring_Buffer.su

.PHONY: clean-RING_BUFFER

