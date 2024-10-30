/*
 * UART_register.h
 * Created: 9/14/2024 10:48:54 PM
 * Author: Omar El-Azab
 */ 

#ifndef UART_REGISTER_H_
#define UART_REGISTER_H_

// Define common data types (if not using standard library)
typedef unsigned char uint8_t;
typedef unsigned int uint16_t;

// UART Registers
#define UDR    (*(volatile uint8_t*)0x2C)   // UART Data Register
#define UCSRA  (*(volatile uint8_t*)0x2B)   // UART Control and Status Register A
#define UCSRB  (*(volatile uint8_t*)0x2A)   // UART Control and Status Register B
#define UCSRC  (*(volatile uint8_t*)0x40)   // UART Control and Status Register C
#define UBRRL  (*(volatile uint8_t*)0x29)   // UART Baud Rate Register Low
#define UBRRH  (*(volatile uint8_t*)0x40)   // UART Baud Rate Register High

// Bit positions in UCSRA
#define RXC   7  // USART Receive Complete
#define TXC   6  // USART Transmit Complete
#define UDRE  5  // USART Data Register Empty
#define FE    4  // Frame Error
#define DOR   3  // Data OverRun
#define PE    2  // Parity Error
#define U2X   1  // Double the USART Transmission Speed
#define MPCM  0  // Multi-processor Communication Mode

// Bit positions in UCSRB
#define RXCIE  7  // RX Complete Interrupt Enable
#define TXCIE  6  // TX Complete Interrupt Enable
#define UDRIE  5  // USART Data Register Empty Interrupt Enable
#define RXEN   4  // Receiver Enable
#define TXEN   3  // Transmitter Enable
#define UCSZ2  2  // Character Size Bit 2
#define RXB8   1  // Receive Data Bit 8
#define TXB8   0  // Transmit Data Bit 8

// Bit positions in UCSRC
#define URSEL  7  // Register Select
#define UMSEL  6  // USART Mode Select
#define UPM1   5  // Parity Mode Bit 1
#define UPM0   4  // Parity Mode Bit 0
#define USBS   3  // Stop Bit Select
#define UCSZ1  2  // Character Size Bit 1
#define UCSZ0  1  // Character Size Bit 0
#define UCPOL  0  // Clock Polarity

#endif /* UART_REGISTER_H_ */