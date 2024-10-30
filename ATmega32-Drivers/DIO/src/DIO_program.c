/*
* DIO_program.c
* Created: 9/13/2024 4:24:25 PM
* Author : Omar El-Azab
*/

#include "DIO\inc\DIO_interface.h"

// Function to Set Pin Direction (Input/Output)
void DIO_SetPinDirection(uint8_t port, uint8_t pin, uint8_t direction) {
    switch (port) {
        case DIO_PORTA:
            if (direction == DIO_OUTPUT) {
                DDRA |= (1 << pin);  // Set pin as output
            } else {
                DDRA &= ~(1 << pin);  // Set pin as input
            }
            break;
        case DIO_PORTB:
            if (direction == DIO_OUTPUT) {
                DDRB |= (1 << pin);
            } else {
                DDRB &= ~(1 << pin);
            }
            break;
        case DIO_PORTC:
            if (direction == DIO_OUTPUT) {
                DDRC |= (1 << pin);
            } else {
                DDRC &= ~(1 << pin);
            }
            break;
        case DIO_PORTD:
            if (direction == DIO_OUTPUT) {
                DDRD |= (1 << pin);
            } else {
                DDRD &= ~(1 << pin);
            }
            break;
    }
}

// Function to Set Pin Value (High/Low)
void DIO_SetPinValue(uint8_t port, uint8_t pin, uint8_t value) {
    switch (port) {
        case DIO_PORTA:
            if (value == DIO_HIGH) {
                PORTA |= (1 << pin);  // Set pin high
            } else {
                PORTA &= ~(1 << pin);  // Set pin low
            }
            break;
        case DIO_PORTB:
            if (value == DIO_HIGH) {
                PORTB |= (1 << pin);
            } else {
                PORTB &= ~(1 << pin);
            }
            break;
        case DIO_PORTC:
            if (value == DIO_HIGH) {
                PORTC |= (1 << pin);
            } else {
                PORTC &= ~(1 << pin);
            }
            break;
        case DIO_PORTD:
            if (value == DIO_HIGH) {
                PORTD |= (1 << pin);
            } else {
                PORTD &= ~(1 << pin);
            }
            break;
    }
}

// Function to Get Pin Value
uint8_t DIO_GetPinValue(uint8_t port, uint8_t pin) {
    uint8_t value = 0;
    switch (port) {
        case DIO_PORTA:
            value = (PINA & (1 << pin)) ? DIO_HIGH : DIO_LOW;  // Read pin value
            break;
        case DIO_PORTB:
            value = (PINB & (1 << pin)) ? DIO_HIGH : DIO_LOW;
            break;
        case DIO_PORTC:
            value = (PINC & (1 << pin)) ? DIO_HIGH : DIO_LOW;
            break;
        case DIO_PORTD:
            value = (PIND & (1 << pin)) ? DIO_HIGH : DIO_LOW;
            break;
    }
    return value;
}
