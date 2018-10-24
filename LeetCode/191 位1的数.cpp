#include<iostream>

using namespace std;
int hammingWeight(int n) {
    int i=0;
    while(n!=0)
    {
    	if((n&1)==1)
    		i++;
    	n=n>>1;
	}
	return i;
}
int main()
{
	int num;
	cin>>num;
	int ans=hammingWeight(num);
	cout<<ans;
	return 0;
}
