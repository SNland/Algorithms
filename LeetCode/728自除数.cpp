#include<iostream>
#include<cstdlib> 
#include<cstring>
using namespace std;
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
	*returnSize=0;
    int nums[10005];
    memset(nums,0,sizeof(nums));
    int count=0;
    int i,N,temp,flag;
    for(i=1;i<=10000;i++)
    {
        N=i;
        flag=1;
        while(N)
        {
            temp=N%10;
            if(temp==0||i%temp!=0)
            {
                flag=0;
                break;
            }
             N=N/10;   
        }
        if(flag==1)
		   {
		   		if(i>=left&&i<=right)
		   			(*returnSize)++;
		   		nums[i]=1;
		   		count++;
			} 
    }
    int *A,j;
    A=(int*)malloc(sizeof(int)*(*returnSize));
  	for(i=left,j=0;j<*returnSize&&i<=right;i++)
  	{
  		if(nums[i])
  			A[j++]=i;
	}
    return A;
}
int main()
{
	int left,right,size,i;
	cin>>left>>right;
	size=0;
	int *ans=selfDividingNumbers(left,right,&size);
	cout<<size<<endl;
	for(i=0;i<size;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
 } 
