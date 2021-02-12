#include <iostream>
#include <string>
using namespace std;

void firstFunc(string* newString) {
    *newString = "First function";
}

void secondFunc(string &newString) {
    newString = "Second function";
}

int main() {
    string newString = "Something";

    cout << newString << endl;
    firstFunc(&newString);

    cout << newString << endl;

    secondFunc(newString);
    cout << newString << endl;

    system("pause");
}