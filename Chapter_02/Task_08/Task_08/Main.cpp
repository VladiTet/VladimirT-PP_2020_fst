#include <iostream>
#include <vector>
using namespace std;

void main()
{
    vector<float> v;

    for (int i = 1; i <= 25; i++)
    {
        v.push_back(i * 2.5);
    }

    for (int i = 0; i < v.size; i++)
    {
        cout << v[i] << ",  ";
    }

    cout << endl;
  
}
