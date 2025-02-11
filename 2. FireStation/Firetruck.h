#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// 전방 선언 (Forward Declaration)
// 1. 헤더 순환 참조 방지
// 2. 컴파일 속도 개선
class FirefighterBase;
class Firetruck
{
public:
	Firetruck()
	{
		// 팩토리 패턴
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

		std::cout << position << " 위치로 소방차 이동 중\n";
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

