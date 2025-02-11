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
		cout << "��   ��: " << name << "\n";
		cout << "��ȭ��ȣ: " << number << "\n";
		cout << "��   ��: " << address << "\n";
		cout << "��   ��: " << job << "\n";
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