#include<iostream>
using namespace std;
int peakIndexInMountainArray(int* A, int ASize) {
    int i;
    for(i=0;i<ASize-1;i++)
    {
    	if(A[i]<A[i+1])
    		continue;
    	if(A[i]>A[i+1])
    		break;
	}
	return i;
}
int main()
{
	int size;
	cin>>size;
	int nums[size];
	for(i=0;i<size;i++)
		cin>>nums[i];
	int ans=peakIndexInMountainArray(nums,size);
	cout<<ans;
	return 0;
}
