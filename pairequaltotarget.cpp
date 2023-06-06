#include <iostream>

using namespace std;

int getpair(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<"pair of target is: "<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            }
        }
    }
    return 0;
}

int main()
{
  int arr[] = {3, 5, 2, 8, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target;
  cout<<"enter target: "<<endl;
  cin>>target;
  int result = getpair(arr, size, target);
  cout<<result<<endl;
  return 0;
}