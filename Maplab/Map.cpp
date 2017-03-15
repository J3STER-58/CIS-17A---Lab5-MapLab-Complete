#include "Map.h"

Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
	Path.push(CurrentLocation);
}


Map::~Map()
{
}