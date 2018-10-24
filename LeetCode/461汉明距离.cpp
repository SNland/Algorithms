#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int hammingDistance(int x, int y) {
    int a[32],b[32],i;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    i=0;
    while(x)
    {
    	a[i]=x%2;
		x/=2;
		i++; 
	}
	i=0;
	while(y)
	{
		b[i]=y%2;
		y/=2;
		i++;
	}
	int count=0;
	for(i=0;i<32;i++)
	{
		if(a[i]!=b[i])
			count++;
	}
	return count;
}

//°´Î»ÔËËã&
int hammingDistance1(int x,int y)
{
	int i=0;
	while(x!=0||y!=0)
	{
		if((x&1)!=(y&1)) i++;
		x=x>>1;
		y=y>>1;
	}
	return i;
 } 
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	int ans=hammingDistance1(num1,num2);
	cout<<ans;
	return 0;
}
