/*
 * UART_interface.h
 * Created: 9/14/2024 10:48:29 PM
 * Author: Omar El-Azab 
 */ 

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

#include "UART\inc\UART_register.h" // For direct register access

// UART Baud Rate
#define F_CPU 16000000UL  // Define CPU frequency if not defined elsewhere
#define BAUD_RATE 9600

// Function Prototypes
void UART_Init(void);
void UART_Transmit(uint8_t data);
uint8_t UART_Receive(void);
void UART_SendString(const char* str);

#endif /* UART_INTERFACE_H_ */