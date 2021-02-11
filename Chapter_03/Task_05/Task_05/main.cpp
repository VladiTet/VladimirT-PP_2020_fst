#include <iostream>
using namespace std;

int main() 
{
    int x = 6;
    int y = 10;
    int z = 5;
    int sum = 0;

    sum = x + y - 2 / 2 + z;
    cout << sum << endl;

    sum = x + (y - 2) / (2 + z);
    cout << sum << endl;
    system("pause");
}