#ifndef WAREHOUSEHANDLER_H
#define WAREHOUSEHANDLER_H
#include <vector>
#include "Warehouse.h"
#include "TruckPosition.h"

class WarehouseHandler
{
private:
	std::vector<Warehouse> WarehouseList = {};

public:
	WarehouseHandler();
	~WarehouseHandler();
	
};
#endif