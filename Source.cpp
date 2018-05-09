#include <stdlib.h>
#include <iostream>
#include <list>
#include <vector>
#include "Truck.h"
#include "TruckPosition.h"
#include "TruckHandler.h"
#include "WarehouseHandler.h"
#include "Warehouse.h"

using namespace std;
int main()
{
	Position newPos = { 1, 1 };
	vector<Position> pv = {newPos};
	vector<Position>::iterator itpv = pv.begin();
	Position *posptr = nullptr;
	posptr = pv.data();
	cout << *posptr << endl;

	pv.push_back(newPos);
	
	//cout << newPos << endl;
	cout << itpv->getPos() << endl;

	system("pause");

	return EXIT_SUCCESS;
}

