#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	// X
	void setX(int x);

	int getX();

	// Y
	void setY(int y);

	int getY();

private:
	int m_X;   //X
	int m_Y;   //Y

};