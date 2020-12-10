#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    ifstream f("text.txt");
    string word;
    const string MYWORD = "file";

    while (f >> word) {}
        if (word == MYWORD)
        {
            cout << "The word isn't in the text: " << MYWORD << endl;
        }
        else
        {
            cout << "The word is in the text: " << MYWORD << endl;
        }
    system("pause");
}