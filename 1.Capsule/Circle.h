#pragma once

#define PI 3.141592f

class Circle
{
public:
	float GetArea() { return radius * radius * PI; }
	float GetSize() { return 2 * radius * PI; }

	Circle(float _radius) 
		: radius(_radius)
	{
	}

private:
	float radius;
};

