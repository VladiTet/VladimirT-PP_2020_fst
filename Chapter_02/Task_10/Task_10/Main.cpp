#include <iostream>
#include <vector>
using namespace std;

void main()
{
    vector<float> a;

    for (int i = 1; i <= 25; i++)
    {
          a.push_back(i * 2.14);
    }

    cout << "The original one: " << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ",  ";
    }

    cout << "\nAftermarket one: " << endl;

    for (int i = 0; i < a.size(); i++)
    {
        a[i] *= a[i];
        cout << a[i] << ",  ";
    }

    system("pause");
}
