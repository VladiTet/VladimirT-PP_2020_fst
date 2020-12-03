#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	ifstream f("text.txt");
	string word;
	string Myword = "file";

	while (f >> word) {}
		if (word == Myword)
		{
			cout << "The word is in the text: " << word << endl;
		}
		else
		{
			cout << "The word isn't in the text: " << word << endl;
		}
	system("pause");
}