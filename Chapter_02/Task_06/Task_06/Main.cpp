#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    ifstream file("text.txt");
    string line;

    while (getline(file, line))
    {
        v.push_back(line);
    }

    string output;

    for (int i = 0; i < v.size(); i++)
    {
        output += v[i];
    }

    cout << output << endl;
    system("pause");
}