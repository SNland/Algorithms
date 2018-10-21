#include<iostream>
using namespace std;
long long int f(int n)
{
	int i,start,next;
	long long int sum=1;
	start=next=1;
	for(i=2;i<=n;i++)
	{
		sum=start+next;
		start=next;
		next=sum;
	}
	return sum;
} 
int main()
{
	int n;
	cin>>n;
	long long int ans=f(n);
	cout<<ans<<endl;
}
