#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void main()
{
    vector<string> v;
    ifstream fileIn("text.txt");
    string row;

    while (getline(fileIn, row))
    {
        v.push_back(row);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << i << ": " << v[i];
        cin.get();
    }
}
