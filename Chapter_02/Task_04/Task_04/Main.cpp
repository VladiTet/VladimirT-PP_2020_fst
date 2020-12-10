#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    ifstream file("text.txt");
    string word;
    string MyTempWord;
    int count = 0;

    cout << "Enter a word: ";
        cin >> word;

        while (file >> MyTempWord) {

            if (MyTempWord == word)
            {
                count++;
            }
        }
    cout << count << endl;
    system("pause");
}