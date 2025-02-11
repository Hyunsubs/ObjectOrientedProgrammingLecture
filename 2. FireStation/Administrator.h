#pragma once

#include "INamedPerson.h"
#include <string>

class Administrator : public INamedPerson
{
public:
	Administrator(const std::string& title,
		const std::string& firstName,
		const std::string& lastName)
		: title(title), firstName(firstName), lastName(lastName)
	{

	}

	// Getter
	inline std::string GetTitle() const { return title; }
	inline std::string GetFirstName() const { return firstName; }
	inline std::string GetLastName() const { return lastName; }

	inline std::string GetName() const override
	{
		return title + " " + lastName + " " + firstName; 
	}

private:
	std::string title;
	std::string firstName;
	std::string lastName;

};

