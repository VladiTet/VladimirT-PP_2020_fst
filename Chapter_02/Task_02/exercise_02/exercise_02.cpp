#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int radius;
	cin >> radius;
	if (radius>0)
	{
		double S = radius * radius * 3.14;
		cout << "Area of the circle is: " << S;
	}
	else
	{
		cout << "Please enter positive number"<<endl;
	}
}