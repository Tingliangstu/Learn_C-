#include <iostream>
#include <cstdlib>
using namespace std;

// Class Point
class Point
{
public:
	// X
	void setX(int x)
	{
		m_X = x;
	}
	int getX()
	{
		return m_X;
	}
	// Y
	void setY(int y)
	{
		m_Y = y;
	}
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;   //X
	int m_Y;   //Y

};

// Class Circle
class Circle
{
public:
	// radius
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	// center of circle
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter()
	{
		return m_Center;
	}

private:
	int m_R;                  //The radius of Circle
	Point m_Center; 
};

void isInCircle(Circle &c, Point &p)
{
	// To calculate the square the distance between two points
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
	               (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	// int rDistance
	int rDistance = c.getR() * c.getR();

	// Judge
	if (distance == rDistance)
	{
		cout << "Point on the circle" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "Point out of the circle" << endl;
	}
	else
	{
		cout << "Point in the circle" << endl;
	}

}

int main()
{
	// Create the circle
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	// Create point
	Point p;
	p.setX(10);
	p.setY(8);

	// Judge
	isInCircle(c, p);

	system("pause");
	return 0;
}