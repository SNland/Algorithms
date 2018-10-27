#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int findLengthOfLCIS(int* nums, int numsSize) {
    if(numsSize==0)	return 0;
	int dp[numsSize],i,max;
	memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=1;i<numsSize;i++)
    {
    	if(nums[i-1]<nums[i])
    		dp[i]=dp[i-1]+1;
	}
	max=dp[0];
	for(i=0;i<numsSize;i++)
	{
		if(dp[i]>max)
			max=dp[i];
	}
	return max;
}
int main()
{
	int size;
	cin>>size;
	int *nums;
	nums=(int*)malloc(sizeof(int));
	int ans=findLengthOfLCIS(nums,size);
	cout<<ans;
	return 0;
 } 
