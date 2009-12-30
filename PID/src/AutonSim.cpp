#include <iostream>
#include "AutonSim.h"
#include <Math.h>

using namespace std;

double curve(void)
{
	cout << "Curve: \n";
	return 0;
}

double GetVector(void)
{
	int index = 0;
		//curve();
		//cout << "X: " << (sizeof(pointsX)/sizeof(p1[0])) << "\n";
		while(index < ((sizeof(pointsX)/sizeof(p1[0]))-1)){
			x = pointsX[index + 1] - pointsX[index];
			y = pointsY[index + 1] - pointsY[index];
			c = hypot(x, y);
			t = atan(y/x); //in radians
			//t = toDegrees(t); // now in degrees
			cout << t << "\n";
			cout << "Index: " << index << "\n";
			index++;
		}
		return c;
}//end of GetVector

double GetPos(void)
{
	double a = 10; //acceleration in ft/s
	double X = GetVector(); //distance in ft
	return 0;
}

int main()
{
	GetVector();
	return 0;
}

