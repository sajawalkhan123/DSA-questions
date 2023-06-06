#include <iostream>

using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 2, 1, 2, 3, 4, 5, 4, 4};
  int n =  sizeof(arr) / sizeof(arr[0]);
  int count[6] = {0};
  for(int i = 0; i < n; i++)
  {
    count[arr[i]]++;
  }
  for(int i = 0; i<=5; i++)
  {
    cout<<"Number "<<i<<" repeated "<<count[i]<<" times "<<endl;
  }
  return 0;
}