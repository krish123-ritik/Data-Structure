#include<iostream>
using namespace std;
void palindrome(int arr[], int size)
{
    int flag = 0;
    for(int i=0; i<= size/2; i++)
    {
        if(arr[i] != arr[size - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"Not Palindrome";
    }
    else 
    {
        cout<<"Palindrome";
    }
}
int main()
{
    int arr[] = {5,1,2,3,2,1,5};
    int size = 7;
    palindrome(arr,size);
    return 0;
}
