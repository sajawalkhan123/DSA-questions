#include <iostream>

using namespace std;

int findmissingelement(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] + 1 != arr[i+1])
        {
            return arr[i] + 1;
        }
    }
    return -1;
}

int main()
{
  int arr[] = {1,2,3,4,6,7,8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int missingelement = findmissingelement(arr, size);
  cout<<"missing element is: "<<missingelement<<endl;
  return 0;
}