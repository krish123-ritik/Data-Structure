#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements of the array (values between 0 to 100):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int frequency[101] = {0};

    
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    
    cout << "Frequency of each number in the array:" << endl;
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > 0) {
            cout << i << ": " << frequency[i] << endl;
        }
    }

    return 0;
}


