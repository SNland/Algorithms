#include<iostream>
using namespace std;
//常规思路O(m*n) 暴力DP 空间复杂度M*N 
int minPathSum(int** num, int gridRowSize, int gridColSize) {
	int i,j,N;
    i=j=0;
    for(i=0;i<gridRowSize;i++)
    {
    	for(j=0;j<gridColSize;j++)
    	{
    		N=-1;
    		if(i-1>=0)
    		{
    			N=num[i-1][j];
			}
			if(j-1>=0)
			{
				if(N==-1)
					N=num[i][j-1];
				if(N!=-1&&N>num[i][j-1])
					N=num[i][j-1];
			}
			if(N>0)
				num[i][j]+=N;
			cout<<num[i][j]<<"  ";
		}
		cout<<endl;
	}
	return num[gridRowSize-1][gridColSize-1];
}

//优化，初始化第一行和第一列的数值
int minPathSum1(int **nums,int m,int n)
{
	if(nums==NULL)
		return 0;
	int dp[m][n];
	dp[0][0]=nums[0][0];
	int i,j;
	for(i=1;i<m;i++)
		dp[i][0]=nums[i][0]+dp[i-1][0];
	for(j=1;j<n;j++)
		dp[0][j]=nums[0][j]+dp[0][j-1];
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			dp[i][j]=min(dp[i][j-1],dp[i-1][j])+nums[i][j];
		}
		
	}
	return dp[i-1][j-1];
}

int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int **nums;
	nums=(int**)malloc(sizeof(int*)*m);
	for(i=0;i<m;i++)
	{
		nums[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>nums[i][j];
		}
	}
	int ans=minPathSum1(nums,m,n);
	cout<<ans<<endl;
	return 0;
 } 
