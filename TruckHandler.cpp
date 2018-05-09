#include "TruckHandler.h"

TruckHandler::TruckHandler()
{
	this->nrOfTrucks = 0;
}

TruckHandler::~TruckHandler()
{
}

void TruckHandler::addTruck(Truck & newTruck)
{
	this->truckList.push_back(newTruck);
	this->nrOfTrucks++;
}

void TruckHandler::removeTruck(int & truckID)
{
	for (int i = 0; i < truckList.size(); i++)
	{
		if (truckList[i].getTruckID() == truckID)
		{
			truckList.erase(truckList.begin() + i);
			this->nrOfTrucks--;
		}
	}


/*bool removed = false;
	for (vector<Truck>::iterator i = this->truckList.begin(); i != truckList.end() && (removed = false); i++) 
	{
		if (i->getTruckID() == truckID)
		{
			this->truckList.pop_back();
		}
	}*/
}
