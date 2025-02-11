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


	// �Ҳ��� (ExtinguishFire)
	// ���� �����Լ�
	virtual void ExtinguishFire() = 0;

	// ���� (Drive)
	void Drive(class Firetruck* truckToDrive, const class Point& position)
	{
		// ������ Ȯ��
		if (truckToDrive->GetDriver() != this)
		{
			return;
		}

		// �̵�
		truckToDrive->Drive(position);
	}

	// Getter / Setter
	inline string GetName() const override { return name; }
	inline void SetName(const string& name) { this->name = name; }


protected:
	string name = {};

};
