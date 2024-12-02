#include<iostream>
using namespace std;
int duplicate(int arr[], int size)
{
    int count =0;
    for(int i=0; i < size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if((i != j) && (arr[i]==arr[j]))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[] = {1,2,3,3,4,4,5,5};
    int size = sizeof(arr)/sizeof(int);
    int dup = duplicate(arr,size);
    cout<<"So total duplicates are: "<<dup<<endl;
    return 0;
}