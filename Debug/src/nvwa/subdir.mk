################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/nvwa/bool_array.cpp \
../src/nvwa/debug_new.cpp \
../src/nvwa/mem_pool_base.cpp \
../src/nvwa/static_mem_pool.cpp 

OBJS += \
./src/nvwa/bool_array.o \
./src/nvwa/debug_new.o \
./src/nvwa/mem_pool_base.o \
./src/nvwa/static_mem_pool.o 

CPP_DEPS += \
./src/nvwa/bool_array.d \
./src/nvwa/debug_new.d \
./src/nvwa/mem_pool_base.d \
./src/nvwa/static_mem_pool.d 


# Each subdirectory must supply rules for building sources it contributes
src/nvwa/%.o: ../src/nvwa/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/argentino/workspace/cdt/ascii2binaryOffset/include" -I"/home/argentino/workspace/cdt/ascii2binaryOffset/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


