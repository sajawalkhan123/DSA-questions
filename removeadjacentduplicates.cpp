#include <iostream>
#include<string>
using namespace std;

int main()
{
  string str = "aabbbccddeeffgg";
  string result;
  for(int i = 0; i < str.size(); i++)
  {
    if(str[i] != str[i+1])
    {
        result = result + str[i];
    }
    cout<<result<<endl;
  }
  return 0;
}

