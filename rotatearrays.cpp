#include <iostream>

using namespace std;

void reversearray(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotatearray(int arr[], int n, int k)
{
    k = (k % n + n ) % n;
    reversearray(arr,0,n-1);
    reversearray(arr, 0, k-1);
    reversearray(arr, k, n-1);
}

int main()
{
  
  int arr[6] = {1,2,3,4,5,6};
  int size  = 6;
  int k = 2;
  cout<<"array before rotation is: "<<endl;
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  cout<<endl;
    rotatearray(arr,size,k);
  cout<<"array after rotation is: "<<endl;
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  
  return 0;
}