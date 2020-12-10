#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void main()
{
    vector<string> v;
    ifstream fileIn("text.txt");
    string line;

    while (getline(fileIn, line))
    {
        v.push_back(line);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << i << ": " << v[i];
        cin.get();
    }
}
