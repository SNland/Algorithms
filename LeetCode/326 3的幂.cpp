#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfThree(int n) {
	if(n==0)
		return false;
    else if(n==1)
		return true;
	else if(n%3!=0)
		return false;
	else
		return isPowerOfThree(n/3);        
}
bool isPowerOfThree1(int n)
{
	double x=log10(n)/log10(3);
	return (x-(int)x==0)?true:false;
}
int main()
{
	int num;
	cin>>num;
	bool ans=isPowerOfThree1(num);
	printf(ans==true?"true":"false");
	return 0;
 } 
