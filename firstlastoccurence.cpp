#include<iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int ans  = 0;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastoccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int ans  = 0;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
	int arr[5]={1,2,3,3,5};
//	int size = 5;
//	int key = 3;
//	int first = firstoccurence(arr,size,key);
//	int last = lastoccurence(arr,size,key);
	cout<<"first occurrence is at index: "<<firstoccurence(arr,5,3)<<endl;
	cout<<"last occurrence is at index: "<<lastoccurence(arr,5,3)<<endl;
	return 0;
}