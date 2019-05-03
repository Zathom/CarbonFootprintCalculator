#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CarbonFootprint
{
private:

public:
	virtual double getCarbonFootprint(double, double) = 0; // PVF
	virtual int getCarbonFootprint(int, int) = 0; // PVF
	void pollute();
};

class Building : public CarbonFootprint
{
public:
	Building();
	Building(string, double, double);
	void output();
	virtual double getCarbonFootprint(double, double);
	virtual int getCarbonFootprint(int, int);
	double getTherms();
	double setTherms();

	double getEmisisonsIntensity();
	double setEmissionsIntensity();

	string getBuildingType();
	string setBuildingType();
private:
	string buildingType = "Trump Tower";
	double emissionsIntense = 0.00;
	double therms = 0.00;
};

class Bicycle : public CarbonFootprint
{
public:
	void output();
	virtual double getCarbonFootprint(double, double);
	virtual int getCarbonFootprint(int, int);

	Bicycle();
	Bicycle(string, double, double); //double breathRate, InitialEmissions(5830lbs of carbon to manfacture), int miles pedeled.
	string getBikeMake();
	double getBreathRate();
	double getInitialEmissions();

	string setBikeMake();
	double setBreathRate();
	double setInitialEmissions();
private:
	string bicycleType = "No";
	double breathRate = 0.00;
	double initialEmission = 0.00;

};

class Car : public CarbonFootprint
{
public:
	Car();
	Car(string, double, double, double);//OVERLOADED CONSTRUCTOR FUELType, MILESDRIVEN, TANKVOL, fuelEmittedPerMile, 
	void output();
	virtual double getCarbonFootprint(double, double);
	virtual int getCarbonFootprint(int, int);

	string getFuelType();
	double getMilesDriven();
	double getTankVolume();
	double getFuelEfficiency(double, double);
	double getFuelEmittedPerMile();

	string setFuelType();
	double setMilesDriven();
	double setTankVolume();
	double setFuelEfficiency();
	double setFuelEmittedPerMile();

private:
	string fuel = "Nuclear Fusion.";
	double milesDriven = 0.00;
	double tankVolume = 0.00;
	double fuelEfficiency = 0.00; // MilesDriven/tankVolume
	double fuelEmittedPerMile = 0.00;

};

#endif // !CARBONFOOTPRINT_H
