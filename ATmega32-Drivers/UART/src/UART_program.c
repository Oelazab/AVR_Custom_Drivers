/*
* UART_program.c
* Created: 9/14/2024 10:49:21 PM
* Author: Omar El-Azab
*/

#include "UART\inc\UART_interface.h"

// UART initialization function
void UART_Init(void) {
    uint16_t ubrr_value = (F_CPU / (16UL * BAUD_RATE)) - 1;
    
    // Set baud rate
    UBRRH = (uint8_t)(ubrr_value >> 8);  // Load upper 8-bits of UBRR value
    UBRRL = (uint8_t)ubrr_value;         // Load lower 8-bits of UBRR value

    // Enable transmitter and receiver
    UCSRB = (1 << RXEN) | (1 << TXEN);

    // Set frame format: 8 data bits, 1 stop bit (UCSZ0 and UCSZ1)
    UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
}

// Function to transmit a single byte over UART
void UART_Transmit(uint8_t data) {
    // Wait for the transmit buffer to be empty
    while (!(UCSRA & (1 << UDRE)));

    // Put data into the buffer, sends the data
    UDR = data;
}

// Function to receive a single byte from UART
uint8_t UART_Receive(void) {
    // Wait for data to be received
    while (!(UCSRA & (1 << RXC)));
    
    // Get and return received data from buffer
    return UDR;
}

// Function to transmit a string over UART
void UART_SendString(const char* str) {
    while (*str) {
        UART_Transmit(*str++);
    }
}