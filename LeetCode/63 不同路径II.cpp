#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int uniquePathsWithObstacles(int** grid, int m, int n) {
    int i,j,dp[m][n];
    if(grid[m-1][n-1]==1||grid[0][0]==1)
    	return 0;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(grid[i][j]==1)
    			dp[i][j]=-1;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(dp[i][j]!=-1)
			{
				if(i-1>=0&&dp[i-1][j]!=-1)
				{
					dp[i][j]+=dp[i-1][j];
				}
				if(j-1>=0&&dp[i][j-1]!=-1)
				{
					dp[i][j]+=dp[i][j-1];
				}
			}
		}
	}
	 return dp[m-1][n-1];
}
int main()
{
	int m,n;
	cin>>m>>n;
	int **nums;
	nums=(int**)malloc(sizeof(int*)*m);
	for(int i=0;i<m;i++)
		nums[i]=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>nums[i][j];	
		}	
	}
	int ans=uniquePathsWithObstacles(nums,m,n);
	cout<<ans;
	return 0;
}
