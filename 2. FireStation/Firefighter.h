#pragma once
#include "FirefighterBase.h"

using namespace std;

class Firefighter : public FirefighterBase
{
public:
	Firefighter(const string& name)
		: FirefighterBase(name)
	{
	}

	virtual ~Firefighter() = default;

	// �Ҳ��� (ExtinguishFire)
	virtual void ExtinguishFire()
	{
		cout << name << " �ҹ���� ���� ���� ����!\n";
		TrainHoseOnFire();
		TurnOnHose();
	}

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
	inline string GetName() const { return name; }
	inline void SetName(const string& name) { this->name = name; }



	// ��� �Լ�(�޼ҵ�)
protected:
	// ȣ�� �ѱ� (��)
	virtual void TurnOnHose()
	{
		std::cout << "���� ������ �ֽ��ϴ�.\n";
	}

	// ȣ�� ����
	virtual void TrainHoseOnFire()
	{
		std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";
	}




private:
	string name = {};

};
