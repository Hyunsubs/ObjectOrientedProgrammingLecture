#pragma once
#include <iostream>
#include <string>
#include "Firetruck.h"
#include "INamedPerson.h"

using namespace std;

class FirefighterBase : public INamedPerson
{
public:
	FirefighterBase(const string& name)
		: name(name)
	{
	}


	// 불끄기 (ExtinguishFire)
	// 순수 가상함수
	virtual void ExtinguishFire() = 0;

	// 운전 (Drive)
	void Drive(class Firetruck* truckToDrive, const class Point& position)
	{
		// 운전자 확인
		if (truckToDrive->GetDriver() != this)
		{
			return;
		}

		// 이동
		truckToDrive->Drive(position);
	}

	// Getter / Setter
	inline string GetName() const override { return name; }
	inline void SetName(const string& name) { this->name = name; }


protected:
	string name = {};

};
