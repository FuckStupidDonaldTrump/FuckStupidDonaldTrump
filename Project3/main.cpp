#include "main.h"

#include <string>
#include <vector>

class Beepo
{

	int age;
	bool is_male;
	std::string id;

};

class ClassRoom
{
	std::vector<Beepo> allstudent;
};

class School
{
	std::vector<ClassRoom> allrooms;
};
