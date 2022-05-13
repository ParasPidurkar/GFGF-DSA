#include <iostream>
using namespace std;


int bSearch(int arr[], int low, int high,int x)
{
    if(low>high)
    return -1;
int mid = (low+high)/2;
if (arr[mid]==x)
return mid;
else if(arr[mid]>x)
return bSearch( arr,low,mid-1,x);
else if(arr[mid]<x)
return bSearch( arr,mid+1,high,x);

}

int main() {
    
    int arr[] = {10, 20,30, 40, 50, 60}, n = 6;
	int x = 20;

	int low = 0, high = n - 1;
	
	cout<<"element is at index "<<bSearch(arr, low,high, x)<<"\n";
	return 0;
} 