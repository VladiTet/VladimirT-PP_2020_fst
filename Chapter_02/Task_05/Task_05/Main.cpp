#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    vector<string> v;
    ifstream file("Fillvector.txt");
    string line;
    while (getline(file, line))
    v.push_back(line);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << i << ": " << v[i] << endl;
    }
    system("pause");
}
