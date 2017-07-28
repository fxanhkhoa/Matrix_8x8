/* 
* Matrix8x8.cpp
*
* Created: 7/27/2017 9:51:18 PM
* Author: Anh Khoa
*/


#include "Matrix8x8.h"
#include <avr/io.h>

// default constructor
Matrix8x8::Matrix8x8()
{
	DDRD |= 0b11000000;
	DDRC |= 0b11111100;
	DDRB |= 0xFF;
	
	PORTB = 0xff;
	PORTD &= ~(0b11000000);
	PORTC &= ~(0b11111100);
} //Matrix8x8

// default destructor
Matrix8x8::~Matrix8x8()
{
	
} //~Matrix8x8

void Matrix8x8::On(int x, int y)
{
	switch (x)
	{
		case 1:
		PORTB &= ~(1 << Row1);
		break;
		case 2:
		PORTB &= ~(1 << Row2);
		break;
		case 3:
		PORTB &= ~(1 << Row3);
		break;
		case 4:
		PORTB &= ~(1 << Row4);
		break;
		case 5:
		PORTB &= ~(1 << Row5);
		break;
		case 6:
		PORTB &= ~(1 << Row6);
		break;
		case 7:
		PORTB &= ~(1 << Row7);
		break;
		case 8:
		PORTB &= ~(1 << Row8);
		break;
		default:
		break;
	}
	switch (y)
	{
		case 1:
		PORTD |= (1 << Col1);
		break;
		case 2:
		PORTD |= (1 << Col2);
		break;
		case 3:
		PORTC |= (1 << Col3);
		break;
		case 4:
		PORTC |= (1 << Col4);
		break;
		case 5:
		PORTC |= (1 << Col5);
		break;
		case 6:
		PORTC |= (1 << Col6);
		break;
		case 7:
		PORTC |= (1 << Col7);
		break;
		case 8:
		PORTC |= (1 << Col8);
		break;
		default:
		break;
	}
}

void Matrix8x8::Off(int x, int y)
{
	switch (x)
	{
		case 1:
		PORTB |= (1 << Row1);
		break;
		case 2:
		PORTB |= (1 << Row2);
		break;
		case 3:
		PORTB |= (1 << Row3);
		break;
		case 4:
		PORTB |= (1 << Row4);
		break;
		case 5:
		PORTB |= (1 << Row5);
		break;
		case 6:
		PORTB |= (1 << Row6);
		break;
		case 7:
		PORTB |= (1 << Row7);
		break;
		case 8:
		PORTB |= (1 << Row8);
		break;
		default:
		break;
	}
	switch (y)
	{
		case 1:
		PORTD &= ~(1 << Col1);
		break;
		case 2:
		PORTD &= ~(1 << Col2);
		break;
		case 3:
		PORTC &= ~(1 << Col3);
		break;
		case 4:
		PORTC &= ~(1 << Col4);
		break;
		case 5:
		PORTC &= ~(1 << Col5);
		break;
		case 6:
		PORTC &= ~(1 << Col6);
		break;
		case 7:
		PORTC &= ~(1 << Col7);
		break;
		case 8:
		PORTC &= ~(1 << Col8);
		break;
		default:
		break;
	}
}

void Matrix8x8::OffAll()
{
	PORTB = 0xff;
	PORTA = 0x00;
}

void Matrix8x8::OnAll()
{
	PORTB = 0x00;
	PORTD = 0b11000000;
	PORTC = 0b11111100;
}