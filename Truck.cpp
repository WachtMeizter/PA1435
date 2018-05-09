#include "Truck.h"

Truck::Truck(int id, Position startingPos)
{
	this->_currentPos = startingPos;
	this->destination = Position();
	this->truckID = id;
}

Truck::~Truck()
{
}

Position Truck::getCurrentPosition() const
{
	return this->_currentPos;
}

Position Truck::getDestination() const
{
	return this->destination;
}

int Truck::getTruckID() const
{
	return this->truckID;
}

void Truck::setPosition(int _lat, int _long)
{
	_currentPos.updatePosition(_lat, _long);
}

void Truck::setDestination(int _lat, int _long)
{
	this->destination.updatePosition(_lat, _long);
	
}

void Truck::setTruckID(int newID)
{
	this->truckID = newID;
}
