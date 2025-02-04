#pragma once
#include <iostream>
using namespace std;

class Time
{
public:
	Time(int hour, int minute = 0, int second = 0);
	~Time();

	void ShowTime()
	{
		cout << "[" << hour << "�� " << minute << "�� " << second << "��]\n";
	}

	void ShowTimeInSeconds() 
	{
		cout << hour * 3600 + minute * 60 + second << "��\n";
	}

private:
	int hour = 0;
	int minute = 0;
	int second = 0;

};

Time::Time(int hour, int minute, int second)
	: hour(hour)
	, minute(minute)
	, second(second)
{
}

Time::~Time()
{
}