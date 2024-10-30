/*
 * DIO_interface.h
 * Created: 9/13/2024 4:23:31 PM
 * Author : Omar El-Azab
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "DIO\inc\DIO_register.h"

// Pin Direction
#define DIO_INPUT  0
#define DIO_OUTPUT 1

// Pin State
#define DIO_LOW  0
#define DIO_HIGH 1

// Ports
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

// Function Prototypes
void DIO_SetPinDirection(uint8_t port, uint8_t pin, uint8_t direction);
void DIO_SetPinValue(uint8_t port, uint8_t pin, uint8_t value);
uint8_t DIO_GetPinValue(uint8_t port, uint8_t pin);

#endif /* DIO_INTERFACE_H_ */