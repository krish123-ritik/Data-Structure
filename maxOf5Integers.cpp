#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

