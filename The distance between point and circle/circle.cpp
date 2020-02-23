#include "circle.h"

// radius
void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}

// center of circle
void Circle::setCenter(Point center)
{
	m_Center = center;
}
Point Circle::getCenter()
{
	return m_Center;
}
