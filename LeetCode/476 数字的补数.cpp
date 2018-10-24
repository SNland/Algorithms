#include<iostream>
#include<cmath>
using namespace std;
int findComplement(int num) {
    int i=0;
    int A[32],sum;
    sum=0;
    while(num)
    {
    	A[i]=n%2;
    	n/=2;
    	i++;
	}
	int len=i;
	for(i=0;i<len;i++)
	{
		if(A[i]==0)
			sum+=pow(2,i);
	}
	return sum;
}
int main()
{
	int num;
	cin>>num;
	int ans=findComplement(num);
	cout<<ans<<endl;
	return 0;
 } 
