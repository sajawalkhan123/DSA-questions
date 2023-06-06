#include <iostream>

using namespace std;

int main()
{
  int decimal;
  cout<<"enter decimal number: "<<endl;
  cin>>decimal;
  int binary  = 0;
  int i = 1;

  while (decimal != 0)
  {
    binary = binary + (decimal % 2) * i;
    decimal = decimal / 2;
    i = i * 10; 
  }
  cout<<"binary of number is: "<<binary<<endl;
  
  return 0;
}