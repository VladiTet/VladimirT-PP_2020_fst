#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int choice = 0;
    bool quit = false;

    while (true) {

        cout << "You escaped from prison and stole a car. You can choose: escape with the car,fight, quit" << endl;
        cin >> input;

        if (input == "escape with the car")
        {
            choice = 1;
        }
        else if (input == "fight")
        {
            choice = 2;
        }
        else if (input == "quit")
        {
            choice = 3;
        }


        switch (choice)
        {
        case 1:
            cout << "You have good driving skills. You manage to escape." << endl;
            break;
        case 2:
            cout << "You decide to stop the car and fight but the police that are chasing you are much more and they catch you." << endl;
            break;
        case 3:
            cout << "You are probably making the right choice because in two years you will released" << endl;
            quit = true;

        default:
            cout << "Wrong input" << endl;

        }
        if (quit)
        {
            break;
        }
       
    }
}