#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int** generateMatrix(int n) {
    int **nums,i,j,tot;
    nums=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
	{
		nums[i]=(int*)malloc(sizeof(int)*n);
		memset(nums[i],0,sizeof(int)*n);
	}	
    nums[0][0]=tot=1;
    i=j=0;
    while(tot<n*n)
    {
    	while(i+1<n&&!nums[i+1][j])
    		nums[++i][j]=++tot;
    	while(j+1<n&&!nums[i][j+1])
    		nums[i][++j]=++tot;
    	while(j-1>=0&&!nums[i][j-1])
    		nums[i][--j]=++tot;
    	while(i-1>=0&&!nums[i-1][j])
    		nums[--i][j]=++tot;
	}
	return nums;
}
int main()
{
	int num;
	cin>>num;
	int **ans=generateMatrix(num);
	//´òÓ¡...
	return 0;	
 } 
