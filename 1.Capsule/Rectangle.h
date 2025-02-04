#pragma once

class Rectangle
{
public:
	float GetArea() { return x * y; }
	float GetSize() { return x * 2.f + y * 2.f; }

	Rectangle(float _x, float _y)
		: x(_x)
		, y(_y)
	{

	}

private:
	float x = 0.f, y = 0.f;
	
};
