#include <iostream>

using namespace std;

void reversearray(int arr[] ,int n)
{
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
  int arr[6] = {1,2,3,4,5,6};
  int size = 6;
  cout<<endl;
  cout<<"before reverse: "<<endl;
  for(int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  cout<<endl;
  reversearray(arr,size);
  cout<<"after reverse array is: "<<endl;
  for(int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  return 0;
}