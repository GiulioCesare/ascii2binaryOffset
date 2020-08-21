################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ascii2binaryOffset.cpp 

OBJS += \
./src/ascii2binaryOffset.o 

CPP_DEPS += \
./src/ascii2binaryOffset.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/argentino/workspace/cdt/ascii2binaryOffset/include" -I"/home/argentino/workspace/cdt/ascii2binaryOffset/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


