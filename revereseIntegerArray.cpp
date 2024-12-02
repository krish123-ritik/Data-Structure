#include<iostream>
using namespace std;
void reverseIntegerArray(int arr[], int size)
{
    int reversedArray[size];
    for(int i=0; i<size; i++)
    {
        reversedArray[i] = arr[size - i - 1];
    }
    cout<<"Reversed Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<reversedArray[i]<<"  ";
    } 
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    reverseIntegerArray(arr,size);
    return 0;
}