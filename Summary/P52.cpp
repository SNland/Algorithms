/**
*@author Dengcm
*问题描述：
*求:1/1!-1/3!+1/5!-1/7!+...+(-1)^(n+1)/(2*n-1)! 
*结果：n<=33 
*/ 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double ans=1.0;
	int i,n,flag;
	flag=1;
	long long int sum=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
			flag=-flag;
		sum=sum*2*(i-1)*(2*i-1);
		ans=ans+flag*1.0/sum;
	}
	printf("%.6lf",ans);
	return 0;
} 
