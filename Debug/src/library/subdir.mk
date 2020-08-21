################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/library/CBufferedData.cpp \
../src/library/CBufferedDataIterator.cpp \
../src/library/CFile.cpp \
../src/library/CFileInMemory.cpp \
../src/library/CKeyValueVector.cpp \
../src/library/CMisc.cpp \
../src/library/CString.cpp \
../src/library/CTokenizer.cpp \
../src/library/Cini.cpp \
../src/library/GenericError.cpp \
../src/library/SignalError.cpp \
../src/library/SignalFatalError.cpp \
../src/library/SignalWarning.cpp 

OBJS += \
./src/library/CBufferedData.o \
./src/library/CBufferedDataIterator.o \
./src/library/CFile.o \
./src/library/CFileInMemory.o \
./src/library/CKeyValueVector.o \
./src/library/CMisc.o \
./src/library/CString.o \
./src/library/CTokenizer.o \
./src/library/Cini.o \
./src/library/GenericError.o \
./src/library/SignalError.o \
./src/library/SignalFatalError.o \
./src/library/SignalWarning.o 

CPP_DEPS += \
./src/library/CBufferedData.d \
./src/library/CBufferedDataIterator.d \
./src/library/CFile.d \
./src/library/CFileInMemory.d \
./src/library/CKeyValueVector.d \
./src/library/CMisc.d \
./src/library/CString.d \
./src/library/CTokenizer.d \
./src/library/Cini.d \
./src/library/GenericError.d \
./src/library/SignalError.d \
./src/library/SignalFatalError.d \
./src/library/SignalWarning.d 


# Each subdirectory must supply rules for building sources it contributes
src/library/%.o: ../src/library/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/argentino/workspace/cdt/ascii2binaryOffset/include" -I"/home/argentino/workspace/cdt/ascii2binaryOffset/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


