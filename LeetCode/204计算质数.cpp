#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

//常规思路 
int isPrime(int n)
{
	int state=1;
	int i,m;
	m=sqrt(n+0.5);
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			state=0;
			break;
		}
	}
	return state==1?1:0;
}
int countPrimes(int n) {
	int i,count;
	count=0;
	for(i=2;i<n;i++)
	{
		if(isPrime(i))
			count++;
	}
	return count;
}

//动态规划
int countPrimes1(int n)
{
	if(n==0)
		return 0;
	int num[n],i,j,count;
	memset(num,0,sizeof(num));
	for(i=2;i<n;i++)
	{
		j=i+i;
		while(j<n)
		{
			num[j]=1;
			j+=i;
		}
	}
	count=0;
	for(i=2;i<n;i++)
		if(num[i]==0)
		{
			count++;
		}
	return count;
 } 
int main()
{
	int num;
	cin>>num;
	cout<<countPrimes1(num);
	return 0;
}
