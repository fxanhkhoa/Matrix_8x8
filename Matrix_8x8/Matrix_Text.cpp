/* 
* Matrix_Text.cpp
*
* Created: 7/28/2017 10:41:33 AM
* Author: Anh Khoa
*/


#include "Matrix_Text.h"


// default constructor
Matrix_Text::Matrix_Text()
{
	//Matrix8x8 matrix;
} //Matrix_Text

// default destructor
Matrix_Text::~Matrix_Text()
{
} //~Matrix_Text

Matrix_Text Matrix_Text::A()
{
	char text[8][8] = {0,0,0,1,1,0,0,0,
					   0,0,1,0,0,1,0,0,
					   0,1,0,0,0,0,1,0,
					   0,1,0,0,0,0,1,0,
					   0,1,1,1,1,1,1,0,
					   0,1,0,0,0,0,1,0,
					   0,1,0,0,0,0,1,0,
					   0,1,0,0,0,0,1,0};
	for (int i = 0; i <= 7;i++)
		for (int j =0; j <= 7; j++)
			{
				if (text[i][j] == 1) 
				{
					On(i+1,j+1);
					_delay_ms(1);
					Off(i+1,j+1);
				}
			}
	return this->A();
}

Matrix_Text Matrix_Text::B()
{
	char text[8][8] = {0,1,1,1,1,0,0,0,
					   0,1,0,0,0,1,0,0,
			   		   0,1,0,0,0,1,0,0,
					   0,1,1,1,1,0,0,0,
					   0,1,0,0,1,0,0,0,
					   0,1,0,0,0,1,0,0,
					   0,1,0,0,0,1,0,0,
					   0,1,1,1,1,0,0,0};
	for (int i = 0; i <= 7;i++)
		for (int j =0; j <= 7; j++)
		{
			if (text[i][j] == 1)
			{
				On(i+1,j+1);
				_delay_ms(1);
				Off(i+1,j+1);
			}
		}
	return this->B();
}

void Matrix_Text::Run()
{
	for (int i = 0; i <= 7;i++)
		for (int j =0; j <= 7; j++)
		{
			if (text[i][j] == 1)
			{
				On(i+1,j+1);
				_delay_ms(1);
				Off(i+1,j+1);
			}
		}
}
