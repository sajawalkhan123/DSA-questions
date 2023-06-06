#include <iostream>
#include<string>
using namespace std;

int main()
{
  char str[100]="abracadabra";
  int freq[256] = {0};
  for(int i = 0; str[i] != '\0'; i++)
  {
    freq[str[i]]++;
  }
  cout<<"the non repeating characters are: "<<endl;
  for (int i = 0; i < 256; i++)
  {
    if(freq[i] == 1)
    {
        cout<<char(i)<<" ";
    }
  }
  
  return 0;
}
