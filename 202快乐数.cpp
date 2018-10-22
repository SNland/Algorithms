#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int squareNum(int n)
{
	int sum,temp;
	temp=sum=0;
	while(n)
	{
		temp=n%10;
		sum+=temp*temp;
		n/=10;
	}
	return sum;
}

bool isHappy(int n) {
    int sum=squareNum(n);
    set<int> num;
    while(sum!=1)
    {
    	if(num.count(sum)==0)
	    {
	    	num.insert(sum);
	    	cout<<sum<<endl;
		}
		else
		{
			return false;
		}	
		sum=squareNum(sum);
	}
    return true;
}

int main()
{
	int num;
	cin>>num;
	bool ans=isHappy(num);
	printf(ans==true?"true":"false");
	return 0;
}
