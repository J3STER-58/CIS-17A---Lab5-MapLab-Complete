#pragma once
#include <stack>
#include "Location.h"

class Map
{
private:
	

public:
	Map(std::string startLocationName);
	~Map();

	std::stack<Location *> Path;

	Location * CurrentLocation = nullptr;
};
