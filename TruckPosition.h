#ifndef POSITION_H
#define POSITION_H
#include <iostream>

using namespace std;

class Position
{
private:
	int _long;
	int _lat;
public:
	Position(int _long = 0, int _lat = 0);
	~Position() {};
	Position(const Position &origPos);
	Position & operator=(const Position &copyPosition);
	friend ostream& operator<<(ostream&os, const Position &dt);
	Position getPos()const { return *this; };
	int getLong()const { return _long; };
	int getLat()const { return _lat; };
	void updatePosition(int _newlong = -1, int _newlat = -1) { if (_long >= 0)_long = _newlong; if (_lat >= 0)_lat = _newlat; };
};
#endif
//#ifndef TRUCKPOSITION_H
//#define TRUCKPOSITION_H
//
//class TruckPosition
//{
//private:
//	class Position
//	{
//	public:
//		int _long;
//		int _lat;
//		Position(int _long = 0, int _lat = 0) { this->_long = _long; this->_lat = _lat; };
//		~Position() {};
//		Position getPos()const { return *this; };
//		int getLong()const { return _long; };
//		int getLat()const { return _lat; };
//	};
//	Position truck_pos;
//	int latest_WH_ID;
//public:
//	TruckPosition() { truck_pos = Position(); latest_WH_ID = -1; };
//	~TruckPosition() {};
//	Position getTruckPos()const { return this->truck_pos; };
//	int getWHID()const { return this->latest_WH_ID; };
//	void updatePosition(int _long = -1, int _lat = -1) { if (_long >= 0)truck_pos._long = _long; if (_lat >= 0)truck_pos._lat = _lat; };
//	void updateWHID(int newID) { this->latest_WH_ID = newID; };
//};
//#endif