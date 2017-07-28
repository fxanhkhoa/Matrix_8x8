/* 
* Matrix_Text.h
*
* Created: 7/28/2017 10:41:33 AM
* Author: Anh Khoa
*/


#ifndef __MATRIX_TEXT_H__
#define __MATRIX_TEXT_H__

#define F_CPU 8000000UL

#include "Matrix8x8.h"
#include <avr/io.h>
#include <util/delay.h>

class Matrix_Text : public Matrix8x8
{
//variables
public:
	char text[8][8];
protected:
private:

//functions
public:
	Matrix_Text();
	Matrix_Text A();
	Matrix_Text B();
	void Run();
	~Matrix_Text();
protected:
private:
	Matrix_Text( const Matrix_Text &c );
	Matrix_Text& operator=( const Matrix_Text &c );

}; //Matrix_Text

#endif //__MATRIX_TEXT_H__
