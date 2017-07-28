/* 
* Matrix8x8.h
*
* Created: 7/27/2017 9:51:19 PM
* Author: Anh Khoa
*/


#ifndef __MATRIX8X8_H__
#define __MATRIX8X8_H__

#define Col1 6
#define Col2 7
#define Col3 2
#define Col4 3
#define Col5 4
#define Col6 5
#define Col7 6
#define Col8 7

#define Row1 7
#define Row2 6
#define Row3 5
#define Row4 4
#define Row5 3
#define Row6 2
#define Row7 1
#define Row8 0


class Matrix8x8
{
//variables
public:
protected:
private:

//functions
public:
	Matrix8x8();
	void On(int , int y);
	void Off(int , int y);
	void OnAll();
	void OffAll();
	~Matrix8x8();
protected:
private:
	Matrix8x8( const Matrix8x8 &c );
	Matrix8x8& operator=( const Matrix8x8 &c );

}; //Matrix8x8

#endif //__MATRIX8X8_H__
