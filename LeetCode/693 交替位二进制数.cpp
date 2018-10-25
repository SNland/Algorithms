#include<iostream>
using namespace std;
bool hasAlternatingBits(int n) {
	if(n==0)
		return false;
    int num[32];
    int len=0;
    while(n)
    {
    	num[len]=n%2;
    	n/=2;
    	len++;
	}
	int i;
	for(i=0;i+1<len;i++)
	{
		if(num[i]==num[i+1])
			return false;
	}
	return true;
}
int main()
{
	int num;
	cin>>num;
	bool ans=hasAlternatingBits(num);
	printf(ans==1?"true":"false");
	return 0;
}
