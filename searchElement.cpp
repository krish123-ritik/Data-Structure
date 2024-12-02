#include<iostream>
using namespace std;
int main()
{
    int arr[] = {44,45,4,45,44};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter a number wants you search: ";
    cin>>target;
    int flag = 0;
    for(int i=0; i<size; i++)
    {
        if(target == arr[i])
        {
            cout<<"Number found at index ="<<i;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"-1";
    }

}