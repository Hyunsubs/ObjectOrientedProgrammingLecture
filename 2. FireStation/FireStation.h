#pragma once

#include <vector>
#include <iostream>
#include "INamedPerson.h"

class FireStation
{
public:
	void ClockIn(INamedPerson* staffMember)
	{
		// 이미 출근했는지 확인
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffMember)
			{
				contains = true;
				break;
			}
		}

		if (!contains)
		{
			clockedInStaff.emplace_back(staffMember);
		}

	}

	// 출석 확인 함수
	void RollCall()
	{
		for (INamedPerson* staff : clockedInStaff)
		{
			
			std::cout << staff->GetName() << "\n";
		}
	}

private:
	// 직원 관리 변수
	std::vector<INamedPerson*> clockedInStaff;
};
