#include <iostream>

using namespace std;

void checkpalindrome(char ch[], int n)
{
    int start = 0;
    int end = n-1;
    while(start > end)
    {
        if(ch[start] != ch[end])
        {
            cout<<"string is not palindrome "<<endl;
        }
        else
        {
            start++;
            end--;
        }
    }
    cout<<"the given string is palindrome "<<endl;
}


int main()
{
  char name[9] = "abababa";
  int size = 9;
  checkpalindrome(name,size);
  return 0;
}