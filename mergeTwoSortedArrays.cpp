#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " sorted elements for the first array:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout<< "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " sorted elements for the second array:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int mergedArr[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged array:" << endl;
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
