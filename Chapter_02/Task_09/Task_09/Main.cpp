#include <iostream>
#include <vector>
using namespace std;

void main()
{
    vector<float> a;
    vector<float> b;
    vector<float> c;

    for (int i = 1; i <= 25; i++)
    {
        a.push_back(i * 2.14);
        b.push_back(i * 3.14);
        c.push_back(a[i - 1] + b[i - 1]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ",  ";
    }

    cout << endl;

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << ",  ";
    }

    cout << endl;

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ",  ";
    }

    cout << endl;
    system("pause");
}
