#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

//递归+打表 
int a[101][101]={0}; 
int uniquePaths1(int m, int n) {
	if(m==1||n==1)
		return 1;
	else if(a[m][n]!=0)
		return a[m][n];
	else
		return a[m][n]=uniquePaths1(m-1,n)+uniquePaths1(m,n-1);
	return a[m][n];
}
//动态规划
int uniquePaths(int m,int n)
{
	int dp[m][n],i,j;
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	for(i=1;i<m;i++)
		dp[i][0]+=dp[i-1][0];
	for(j=1;j<n;j++)
		dp[0][j]+=dp[0][j-1];
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	return dp[i-1][j-1];
}
int main()
{
	int m,n;
	cin>>m>>n;
	int ans=uniquePaths1(m,n);
	cout<<ans;
	return 0;
}
