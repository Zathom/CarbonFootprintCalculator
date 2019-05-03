#include"CarbonFootprint.h"
using namespace std;

void outputCarbonFootprint(vector<CarbonFootprint*> &vec, double x, double y)
{
	for (int index = 0; index < vec.size(); index++)
	{
		cout << vec.at(index)->getCarbonFootprint(x, y); 
	}
}