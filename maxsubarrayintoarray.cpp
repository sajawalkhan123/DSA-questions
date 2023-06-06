#include <iostream>
#include<climits>
using namespace std;

int findmaxsubarray(int arr[], int n)
{
    int maxsum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if(arr[i] > sum)
        {
            sum = arr[i];
        }
        if(sum > maxsum)
        {
            maxsum = sum;
        }
    }
    return maxsum;
}

int main()
{
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int maxsubarray = findmaxsubarray(arr, size);
  cout<<"max subarray is: "<<maxsubarray<<endl;

  return 0;
}