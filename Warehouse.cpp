#include "Warehouse.h"

Warehouse::Warehouse()
{
}

Warehouse::~Warehouse()
{
}

Position Warehouse::getCurrentPosition() const
{
	return this->_currentPos;
}
void Warehouse::setPosition(int _lat, int _long)
{
	this->_currentPos.updatePosition(_lat, _long);
}

void Warehouse::setWarehouseID(int newID)
{
	this->warehouseID = newID;
}
