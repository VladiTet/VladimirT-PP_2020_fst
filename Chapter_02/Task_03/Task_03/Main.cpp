#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

		ifstream f("../text.txt");
		int nwords = 0;
		string word;

		while (f >> word)
			++nwords;

		cout << "Number of words = " << nwords << endl;
		system("pause");
	}