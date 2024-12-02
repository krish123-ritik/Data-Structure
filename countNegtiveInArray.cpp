#include<iostream>
using namespace std;
int countNegative(int arr[], int size)
{
    int countNeg = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            countNeg++;
        }
    }
    return countNeg;
}
int main()
{
    int arr[] = {2,-5,6,7,-9,2,8,4,-7};
    int size = 9;
    int Negi = countNegative(arr,size);
    cout<<"Total Negative Numbers are: "<<Negi<<endl;
    return 0;
}
