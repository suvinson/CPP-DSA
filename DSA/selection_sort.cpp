#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{

}
int main()
{
    int n;
    cout<<"Enter the number of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array one by one:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    return 0;
}
