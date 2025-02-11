#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// ���� ���� (Forward Declaration)
// 1. ��� ��ȯ ���� ����
// 2. ������ �ӵ� ����
class FirefighterBase;
class Firetruck
{
public:
	Firetruck()
	{
		// ���丮 ����
		ladder = new Ladder(10.f);
	}

	~Firetruck()
	{
		delete ladder;
		ladder = nullptr;
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << position << " ��ġ�� �ҹ��� �̵� ��\n";
	}

	inline const Ladder* GetLadder() const { return ladder; }

	inline const Hose* GetHose() const { return hose; }
	inline void SetHose(Hose* hose) { this->hose = hose; }

	inline FirefighterBase* GetDriver() const { return driver; }
	inline void SetDriver(FirefighterBase* driver) { this->driver = driver; }


private:
	FirefighterBase* driver = nullptr;
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};

