#ifndef TRUCKHANDLER_H
#define TRUCKHANDLER_H
#include "Truck.h"
#include "TruckPosition.h"
#include <vector>

using namespace std;

class TruckHandler
{
private:
	vector<Truck> truckList;
	int nrOfTrucks;
public:
	TruckHandler();
	~TruckHandler();
	void addTruck(Truck & newTruck);
	void removeTruck(int & truckID);
};


#endif // !1
