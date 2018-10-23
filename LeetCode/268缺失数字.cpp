#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int missingNumber(int* nums, int numsSize) {
	int *temp,i;
	temp=(int*)malloc(sizeof(int)*(numsSize+1));
	memset(temp,0,sizeof(int)*(numsSize+1));
	//for(i=0;i<=numsSize;i++)
	//	temp[i]=0;
	for(i=0;i<numsSize;i++)
	{
		temp[nums[i]]=1;
	}
	int ans=0;
	for(i=0;i<=numsSize;i++)
		if(temp[i]==0)
		{
			ans=i;
			break;
		}
    return ans;
}
int main()
{
	int size,i;
	scanf("%d",&size);
	int *num;
	num=(int*)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&num[i]);
	int ans=missingNumber(num,size);
	printf("%d",ans);
}
