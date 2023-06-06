#include <iostream>
#include<string>
using namespace std;

int main()
{
  string str = "sa_ja_wal_ahm_ad_kh_an";
  string result;
  string underscore;
  for(int i =0; i < str.size(); i++)
  {
    if(str[i] == '_')
    {
        underscore += '_';
    }
    else
    {
        result = result + str[i];
    }
  }
  result = result + underscore;
  cout<<result;
  return 0;
}