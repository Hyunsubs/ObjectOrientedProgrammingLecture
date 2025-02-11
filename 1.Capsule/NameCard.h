#pragma once
#include <string>
#include <iostream>
using namespace std;

class NameCard
{
public:
	NameCard(const string& name, const string& number, const string& address, const string& job);
	~NameCard();

	void ShowData()
	{
		cout << "이   름: " << name << "\n";
		cout << "전화번호: " << number << "\n";
		cout << "주   소: " << address << "\n";
		cout << "직   급: " << job << "\n";
	}

private:
	string name;
	string number;
	string address;
	string job;


};

NameCard::NameCard(const string& name, const string& number, const string& address, const string& job)
	: name(name)
	, number(number)
	, address(address)
	, job(job)
{
}

NameCard::~NameCard()
{
}