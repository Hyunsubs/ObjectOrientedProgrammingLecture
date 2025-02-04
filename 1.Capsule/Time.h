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
		cout << "[" << hour << "시 " << minute << "분 " << second << "초]\n";
	}

	void ShowTimeInSeconds() 
	{
		cout << hour * 3600 + minute * 60 + second << "초\n";
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