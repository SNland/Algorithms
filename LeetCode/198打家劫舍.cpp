#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a<b)
		return b;
	else
		return a;
}
int rob(int* nums, int numsSize) {
	if(numsSize==0)
		return 0;
	if(numsSize==1)
		return nums[0];
	if(numsSize==2)
	{
		return max(nums[0],nums[1]);
	}
	int dp[numsSize],i;
	dp[0]=nums[0];
	dp[1]=nums[1];
	for(i=2;i<numsSize;i++)
	{
		if(i-3>=0)
		{
			dp[i]=nums[i]+max(dp[i-3],dp[i-2]);
		}
		else
		{
			dp[i]=nums[i]+dp[i-2];
		}
	}
	return max(dp[numsSize-1],dp[numsSize-2]);
}
int main()
{
	int size;
	cin>>size;
	int nums[size];
	for(int i=0;i<size;i++)
		cin>>nums[i];
	int ans=rob(nums,size);
	cout<<ans;
	return 0;
 } 
