#include <iostream>
using namespace std;

int main() {
    int coverage = 300;
    bool check;

    for (int i = 2; i <= coverage; i++)
    {
        check = true;
        for (int j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << i << ", ";
        }
    }
    system("pause");
}