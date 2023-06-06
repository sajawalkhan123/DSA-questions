#include <iostream>

using namespace std;

void getlengthofstring(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    cout<<"length of character string is: "<<count<<endl;
}

int main()
{
  char name[20];
  cout<<"enter the string to find its length: "<<endl;
  cin>>name;
  getlengthofstring(name);
  return 0;
}