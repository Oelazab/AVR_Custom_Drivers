/*
 * DIO_register.h
 * Created: 9/13/2024 4:24:07 PM
 * Author : Omar El-Azab
 */ 

#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_

// PORTA Registers
#define PORTA  (*(volatile uint8_t*)0x3B)
#define DDRA   (*(volatile uint8_t*)0x3A)
#define PINA   (*(volatile uint8_t*)0x39)

// PORTB Registers
#define PORTB  (*(volatile uint8_t*)0x38)
#define DDRB   (*(volatile uint8_t*)0x37)
#define PINB   (*(volatile uint8_t*)0x36)

// PORTC Registers
#define PORTC  (*(volatile uint8_t*)0x35)
#define DDRC   (*(volatile uint8_t*)0x34)
#define PINC   (*(volatile uint8_t*)0x33)

// PORTD Registers
#define PORTD  (*(volatile uint8_t*)0x32)
#define DDRD   (*(volatile uint8_t*)0x31)
#define PIND   (*(volatile uint8_t*)0x30)

// General Data Direction Registers
#define SFIOR  (*(volatile uint8_t*)0x50)

// Interrupt Registers (For reference, not part of basic DIO)
#define MCUCR  (*(volatile uint8_t*)0x55)
#define GICR   (*(volatile uint8_t*)0x5B)
#define GIFR   (*(volatile uint8_t*)0x5A)

// Timer/Counter Control Registers (For reference, not part of basic DIO)
#define TCCR0  (*(volatile uint8_t*)0x53)
#define TCNT0  (*(volatile uint8_t*)0x52)

// Define common data types (if not using standard library)
typedef unsigned char uint8_t;

#endif /* DIO_REGISTER_H_ */