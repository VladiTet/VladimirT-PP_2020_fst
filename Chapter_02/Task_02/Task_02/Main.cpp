#include <iostream>
using namespace std;

int main()
{
	double radius;
	cout << "Enter the radius of the circle: "<<endl;
	cin >> radius;
	const double Pi = 3.14;
	if (radius >= 0)
	{
		double S = radius * radius * Pi;
		cout << "Area of the circle is: " << S;
		
	}
	else
	{
		cout << "Please enter positive number: " << endl;
		cin >> radius;
	}
	system("pause");
}