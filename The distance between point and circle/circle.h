#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	// radius
	void setR(int r);

	int getR();

	// center of circle
	void setCenter(Point center);

	Point getCenter();


private:
	int m_R;                  //The radius of Circle
	Point m_Center;
};