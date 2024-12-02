#include<iostream>
using namespace std;
int main()
{
    int isUnique = -1;
    int arr[] = {10,10,25,3,4,6,8,5,2,4};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++)
    {
        int flag = 1;
        for(int j=0; j<size; j++)
        {
            if(i != j  && arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<arr[i]<<" ";
        } 
    }
    return 0;
}