/*
打印如图所示的图形： 
1
5  2 
8  6 3
10 9 7 4
*/
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int num[n][n];
	memset(num,0,sizeof(num)); 
	int tot=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			num[i+j][j]=tot;
			tot++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[i][j]!=0)
				printf("%3d",num[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
