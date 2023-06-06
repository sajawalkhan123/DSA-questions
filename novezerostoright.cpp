#include<iostream>

using namespace std;

void movezerostoright(int arr[], int n)
{
  int i = 0;
    for (int j = 0; j < n; j++)
    {
      if(arr[j] != 0)
      {
        swap(arr[i], arr[j]);
        i++;
      }
    }
    
}

int main()
{
  int arr[8] = {1,2,3,0,0,5,0,6};
  int size = 8;
  cout<<"before moving zeros to right: "<<endl;
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  cout<<endl;
  movezerostoright(arr,size);
  cout<<"after moving zeros to right: "<<endl;
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i];
  }
  
  return 0;
}
