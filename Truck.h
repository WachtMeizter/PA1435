#ifndef TRUCK_H
#define TRUCK_H
#include "TruckPosition.h"
#include <string>
class Truck
{
private:
	Position _currentPos;
	Position destination;
	int truckID;
	//Itemhandler ihandler;
public:
	Truck(int id = 0, Position startingPos = { 0, 0 });
	~Truck();
	Position getCurrentPosition()const;
	Position getDestination()const;
	int getTruckID()const;
	void setPosition(int _lat, int _long);
	void setDestination(int _lat, int _long);
	void setTruckID(int newID);

};
#endif // !1
