#include<iostream>

using namespace std;

void swapalternates(int arr[], int size)
{
	
	for(int i = 0 ; i < size ; i+=2)
	{
		if(i+1 < size)
		{
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
}

void printarray(int arr[] , int size)
{
	cout<<"after swaping elements are: "<<endl;
	
	for(int i = 0 ; i < size ; i++)
	{
		cout<<arr[i]<<endl;
	}
}


int main()
{
	int n;
	cout<<"enter size of array: "<<endl;
	cin>>n;	
	int arr[n];
    
	cout<<"enter values in array: "<<endl;
	
	for(int i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"your array before swaping is: "<<endl;
	for(int i = 0 ; i < n ; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	swapalternates(arr , n);
	printarray(arr , n);
}