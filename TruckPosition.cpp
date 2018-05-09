#include "TruckPosition.h"

ostream & operator<<(ostream & os, const Position & dt)
{
	os << "(" << dt._long << "," << dt._lat << ")";
	return os;
}

Position::Position(int _long, int _lat)
{
	this->_long = _long;
	this->_lat = _lat;
}

Position::Position(const Position & origPos)
{
	if (this != &origPos)
	{
		this->_long = origPos._long;
		this->_lat =  origPos._lat;
	}
}

Position & Position::operator=(const Position & copyPosition)
{
	if (this != &copyPosition)
	{
		this->_long = copyPosition._long;
		this->_lat = copyPosition._lat;
	}
	return *this;
}
