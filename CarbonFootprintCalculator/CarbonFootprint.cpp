#include"CarbonFootprint.h"
#include<iostream>

using namespace std;

//-----------CARBON FOOTPRINT FUNCTIONS----------

//-----------BUILDING FUNCTIONS----------
Building::Building() // DEFAULT CONSTRUCTOR.
{
	cout << "Default building constructor executed...." << endl;
}
Building::Building(string bldType, double fuelQuan, double fuelInten)//OVERLOADED CONSTRUCTOR
{
	cout << "Creating building object." << endl;
	buildingType = bldType;
	emissionsIntense = fuelInten;
	therms = fuelQuan;
}

string Building::getBuildingType()
{
	return buildingType;
}
string Building::setBuildingType()
{
	cout << "Enter building type: ";
	getline(cin, buildingType);
	return buildingType;
}

void Building::output()
{
	cout << "Building type: " << getBuildingType() << endl;
	cout << "\tTons of fuel used: " << getTherms() << endl;
	cout << "\t Emissions intensity: " << "*** " << getEmisisonsIntensity() << " ***" << endl;
}

//BUILDING CLASS FUNCTIONS----------

double Building::getCarbonFootprint(double fuelQuantity, double emissionsIntensity)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Building: Method: overloaded getCarbonFootprint: datatype: double. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	double carbonFootprint = fuelQuantity * emissionsIntensity;

	return carbonFootprint;
}

int Building::getCarbonFootprint(int fuelQuantity, int emissionsIntensity)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Building: Method: overloaded getCarbonFootprint: datatype: Int. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	int carbonFootprint = fuelQuantity * emissionsIntensity;

	return carbonFootprint;
}

double Building::getTherms()
{
	return therms;
}
double Building::setTherms()
{
	cout << "Enter amount of fuel building consumes: ";
	cin >> therms;
	return therms;
}

double Building::getEmisisonsIntensity()
{
	return emissionsIntense;
}
double Building::setEmissionsIntensity()
{
	cout << "Enter building emissions intensity: ";
	cin >> emissionsIntense;
	return emissionsIntense;
}
//=======================================================================

//-----------BICYCLE----------

double Bicycle::getCarbonFootprint(double breathRate, double emissionsIntensity)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Bicycle: Method: overloaded getCarbonFootprint: datatype: double. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	double carbonFootprint = breathRate * emissionsIntensity;

	return carbonFootprint;
}

int Bicycle::getCarbonFootprint(int breathRate, int emissionsIntensity)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Bicycle: Method: overloaded getCarbonFootprint: datatype: Int. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	int carbonFootprint = breathRate * emissionsIntensity;

	return carbonFootprint;
}


void Bicycle::output()
{
	cout << "Bicycle type: " << getBikeMake() << endl;
	cout << "\tUser breath rate: " << getBreathRate() << "/sec.5" << endl;
	cout << "\t Emissions on use: " << "*** " << getInitialEmissions() << " ***" << endl;
}

Bicycle::Bicycle()//DEFAULT CONSTRUCTOR.
{
	cout << "Default bicycle constructor executed....." << endl;
}
Bicycle::Bicycle(string bikeType, double bRate, double iEmm)//OVERLOADED CONSTRUCTOR
{
	cout << "Creating bicycle object." << endl;
	bicycleType = bikeType;
	breathRate = bRate;
	initialEmission = iEmm;
}

string Bicycle::getBikeMake()
{
	return bicycleType;
}
double Bicycle::getBreathRate()
{
	return breathRate;
}
double Bicycle::getInitialEmissions()
{
	return initialEmission;
}

string Bicycle::setBikeMake()
{

	cout << "Enter bike manufacturor/make: ";
	getline(cin, bicycleType);
	return bicycleType;
}
double Bicycle::setBreathRate()
{
	cout << "Enter the breathrate of the rider as they pedal: ";
	cin >> breathRate;
	return breathRate;
}
double Bicycle::setInitialEmissions()
{
	cout << "Enter emissions of use: ";
	cin >> initialEmission;
	return initialEmission;
}

//-----------CAR-----------

void Car::output()
{
	cout << "Fuel type: " << getFuelType() << endl;
	cout << "\t Mileage: " << getMilesDriven() << " miles." << endl;
	cout << "\t fuel tank/charge volume: " << getTankVolume() << " gallons/watts" << endl;
	cout << "\t Co2 emitted per mile: " << getFuelEmittedPerMile() << "/mile." << endl;
}

Car::Car()//DEFAULT CONSTRUCTOR
{
	cout << "Car default constructor executed." << endl;
}
Car::Car(string fT, double mD, double tV, double fPm)//OVERLOADED CONSTRUCTOR
{
	cout << "Creating car object." << endl;
	fuel = fT;
	milesDriven = mD;
	tankVolume = tV;
	fuelEmittedPerMile = fPm;
}

double Car::getCarbonFootprint(double fuelEfficiency, double fuelPerMile)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Car: Method: overloaded getCarbonFootprint: datatype: double. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	double carbonFootprint = fuelEfficiency - fuelPerMile;
	//Fuel efficiency (MilesTraveled/TankVolume) - Carbon expelled per mile.
	return carbonFootprint;
}

int Car::getCarbonFootprint(int fuelEfficiency, int fuelPerMile)
{
	cout << "*************************************************************************************" << endl;
	cout << "Class Car: Method: overloaded getCarbonFootprint: datatype: Int. Executed..." << endl;
	cout << "*************************************************************************************" << endl;
	int carbonFootprint = fuelEfficiency - fuelPerMile;

	return carbonFootprint;
}

string Car::getFuelType()
{
	return fuel;
}
double Car::getMilesDriven()
{
	return milesDriven;
}
double Car::getTankVolume()
{
	return tankVolume;
}
double Car::getFuelEfficiency(double mT, double fT)
{
	fuelEfficiency = mT / fT;
	return fuelEfficiency;
}
double Car::getFuelEmittedPerMile()
{
	return fuelEmittedPerMile;
}

string Car::setFuelType()
{
	cout << "Enter fuel type: ";
	cin >> fuel;
	return fuel;
}
double Car::setMilesDriven()
{
	cout << "Enter total vehicle mileage: ";
	cin >> milesDriven;
	return milesDriven;
}
double Car::setTankVolume()
{
	cout << "Enter total fuel tank volume: ";
	cin >> tankVolume;
	return tankVolume;
}
double Car::setFuelEfficiency()
{
	cout << "Enter fuel efficiency: ";
	cin >> fuelEfficiency;
	return fuelEfficiency;
}
double Car::setFuelEmittedPerMile()
{
	cout << "Enter fuel emitted per mile: ";
	cin >> fuelEmittedPerMile;
	return fuelEmittedPerMile;
}