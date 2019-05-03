#include"CarbonFootprint.h"
#include"MainFunctionsH.h"
#include<iostream>
#include<vector>
#include<algorithm>
#include<chrono>

using namespace std;

int main()
{
	//start recording elapsed time
	auto start = std::chrono::steady_clock::now();
	int loopControl = 4;
	vector <CarbonFootprint*> objects;
	CarbonFootprint* cF_ptr;
	Bicycle* Bike_ptr = new Bicycle("Mongoose", 1.5, 10.5);
	Car* Car_ptr = new Car("Gasoline.", 46545, 16, 411);
	double fuelEff = Car_ptr->getFuelEfficiency(46545, 16);
	Building* Building_ptr = new Building("Factory", 500, 3.2);

	objects.push_back(Bike_ptr);
	objects.push_back(Car_ptr);
	objects.push_back(Building_ptr);

	vector<CarbonFootprint*>::const_iterator vectorIterator;
	for (vectorIterator = objects.begin(); vectorIterator != objects.end(); vectorIterator++)
	{
		if (loopControl = 0)
		{
			cF_ptr = Bike_ptr;
			Bike_ptr->output();
			cout << "\nCarbon footprint: " << cF_ptr->getCarbonFootprint(1.5, 10.5) << endl;
		}
		else if (loopControl = 1)
		{
			cF_ptr = Car_ptr;
			Car_ptr->output();
			cout << "\nCarbon footprint: " << cF_ptr->getCarbonFootprint(fuelEff, 411.0) << endl;
		}
		else if (loopControl = 2)
		{
			cF_ptr = Building_ptr;
			Building_ptr->output();
			cout << "\nCarbon footprint: " << cF_ptr->getCarbonFootprint(500.0, 3.2) << endl;
		}
		loopControl++;

	}

	cF_ptr = Bike_ptr;
	cout << "\nCarbon Footprint:" << cF_ptr->getCarbonFootprint(1.5, 10.5) << endl;
	Bike_ptr->output();


	cout << "===================================" << endl;
	cF_ptr = Building_ptr;
	cout << "\n Carbon Footprint:" << cF_ptr->getCarbonFootprint(500.0, 3.2) << endl;
	Building_ptr->output();


	cout << "===================================" << endl;
	cF_ptr = Car_ptr;
	cout << "\n Carbon Footprint: " << cF_ptr->getCarbonFootprint(fuelEff, 411.0) << endl;
	Car_ptr->output();


	delete Bike_ptr; // preventing memory leaks.
	delete Car_ptr;
	delete Building_ptr;
	auto end = std::chrono::steady_clock::now();

	double timeClicked = double(std::chrono::duration_cast<std::chrono::nanoseconds> (end - start).count());
	cout << "Time elapsed in seconds: " << timeClicked / 1e9 << endl;
	system("Pause");
	return 0;
}