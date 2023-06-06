#include <iostream>

using namespace std;

string removespaces(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '@';
        }
    }
    return str;
}

int main()
{
    string str = "hello my name is sajawal khan";
    cout<<endl;
    cout<<"before replace the string is: "<<str<<endl;
    string result = removespaces(str);
    cout<<"after replace the string is: "<<result<<endl;
    
}