#include <iostream>
#include "Driver.h"
using namespace std;

string Driver::getDriverID()
{
	return _driverID;
}

void Driver::setDriverID(string driverID)
{
	_driverID = driverID;
}

string Driver::getUserName()
{
	return _username;
}

void Driver::setUsername(string username)
{
	_username = username;
}

string Driver::getDriverName()
{
	return _driverName;
}

void Driver::setDriverName(string driverName)
{
	_driverName = driverName;
}

string Driver::getVehicleType()
{
	return _vehicleType;
}

void Driver::setVehicleType(string vehicleType)
{
	_vehicleType = vehicleType;
}

string Driver::getPlateNumber()
{
	return _plateNumber;
}

void Driver::setPlateNumber(string plateNumber)
{
	_plateNumber = plateNumber;
}

double Driver::getAccountBalance()
{
	return _accountBalance;
}

void Driver::setAccountBalance(double accountBalance)
{
	_accountBalance = accountBalance;
}

int Driver::getCarParkSLot()
{
	return _carParkSlot;
}

void Driver::setCarParkSlot(int carParkSlot)
{
	_carParkSlot = carParkSlot;
}

bool Driver::getTimeSlot(int index)
{
	return _timeSlot[index];
}

void Driver::setTimeSlot(bool timeSlot, int index)
{
	_timeSlot[index] = timeSlot;
}

Driver::Driver()
{
	setDriverID("");
	setUsername("");
	setDriverName("");
	setVehicleType("");
	setPlateNumber("");
	setAccountBalance(0);
	setCarParkSlot(0);
	for (int i = 0; i < 24; i++)
	{
		setTimeSlot(false, i);
	}
}

Driver::Driver(string driverID, string username, string driverName, string vehicleType, string plateNumber, double accountBalance, bool timeSlot, int carParkSlot, int index)
{
	_driverID = driverID;
	_username = username;
	_driverName = driverName;
	_vehicleType = vehicleType;
	_plateNumber = plateNumber;
	_accountBalance = accountBalance;
	_timeSlot[index] = timeSlot;
	_carParkSlot = carParkSlot;
}

Driver::~Driver()
{
}
