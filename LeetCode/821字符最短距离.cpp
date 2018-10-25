#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int* shortestToChar(char* S, char C, int* returnSize) {
	int len=strlen(S);
		*returnSize=len;
   int nums[strlen(S)];
   memset(nums,0,sizeof(nums));
   int lc[1000]; 
   memset(lc,-1,sizeof(lc));
   int p,i=0;
   p=0;
   while(S[i]!='\0')
   {
   	   if(S[i]==C)
   	   {
   	   		lc[p++]=i;
		}
		i++;
   }
   i=0;
   int min,j,d=0;
   while(S[i]!='\0')
   {
   		j=d=0;
   		min=abs(lc[0]-i);
   		for(j=0;j<p;j++)
   		{
   			if(abs(lc[j]-i)<min)
   				min=abs(lc[j]-i);
		}
		nums[i]=min;
		i++;
   }
   return nums;
}
int main()
{
	char ch[1000],c;
	cin>>ch>>c;
	int size=0;
	int *ans=shortestToChar(ch,c,&size);
	for(int i=0;i<strlen(ch);i++)
		cout<<ans[i]<<" ";
		cout<<endl<<size;
	return 0;
}
