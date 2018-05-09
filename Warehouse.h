#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "TruckPosition.h"
class Warehouse
{
private:
	Position warehousePos;
	int warehouseID;
	//Itemhandler ihandler;
public:
	Warehouse();
	~Warehouse();
	Position getCurrentPosition()const;
	void setPosition(int _lat, int _long);
	void setWarehouseID(int newID);
};
#endif // !1
