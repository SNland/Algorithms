#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int minCostClimbingStairs(int* cost, int costSize) {
   int dp[1024],i;
   if(costSize==2)
   		return min(cost[0],cost[1]);
   for(i=2;i<costSize;i++)
   {
   		dp[i]=cost[i]+min(cost[i-2],cost[i-1]);
   }
   return min(dp[i-1],dp[i-2]);
}
int minCostClimbingStairs1(int* cost,int costSize)
{
	if(costSize==2)
   		return min(cost[0],cost[1]);
	int temp,i,min1,min2;
	min1=cost[0];min2=cost[1];
	for(i=2;i<numsSize;i++)
	{
		temp=cost[i]+min(min1,min2);
		min1=min2;
		min2=temp;
	} 
	return min(min1,min2);
}
int main()
{
	int size;
	cin>>size;
	int nums[size],i;
	for(i=0;i<size;i++)
	{
		cin>>nums[i];
	}
	int ans=minCostClimbingStairs1(nums,size);
	cout<<ans;
	return 0;
}
