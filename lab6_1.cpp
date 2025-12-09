#include <iostream>
using namespace std;

int main() {
    int num;
    int eCount = 0;
    int oCount = 0;

    while (true) {
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            eCount++;
        } else {
            oCount++;
        }
    }
    cout << "#Even numbers = " << eCount;
    cout << "\n#Odd numbers = " << oCount;
    return 0;
}