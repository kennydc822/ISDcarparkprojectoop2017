//this is the comment
#pragma once
#include <string>
using namespace std;
class Driver
{
private:
	string _driverID;
	string _username;
	string _driverName;
	string _vehicleType;
	string _plateNumber;
	double _accountBalance;
	bool _timeSlot[24];
	int _carParkSlot;


public:
	string getDriverID();
	void setDriverID(string driverID);

	string getUserName();
	void setUsername(string username);

	string getDriverName();
	void setDriverName(string driverName);

	string getVehicleType();
	void setVehicleType(string vehicleType);

	string getPlateNumber();
	void setPlateNumber(string plateNumber);

	double getAccountBalance();
	void setAccountBalance(double accountBalance);

	int getCarParkSLot();
	void setCarParkSlot(int carParkSlot);

	bool getTimeSlot(int index);
	void setTimeSlot(bool timeSlot, int index);

	Driver();
	Driver(string driverID, string username, string driverName, string vehicleType, string plateNumber, double accountBalance, bool timeSlot, int carParkSlot, int index);
	~Driver();
};

