/**
对于一个 正整数，如果它和除了它自身以外的所有正因子之和相等，我们称它为“完美数”。
给定一个 正整数 n， 如果他是完美数，返回 True，否则返回 False

示例：

输入: 28
输出: True
解释: 28 = 1 + 2 + 4 + 7 + 14
 

注意:

输入的数字 n 不会超过 100,000,000. (1e8)
*/

#include<iostream>
#include<cmath>
using namespace std;


//注意完全数不包含0,1，小于100000000的完全数有6、28、496、8128、33550336
bool checkPerfectNumber(int num) {
	if(num==0||num==1)
		return false;
	int i,sum;
	sum=1;
	int m=sqrt(num+0.5);
	for(i=2;i<=m;i++)
	{
		if(num%i==0)
		{
			sum+=i;
			sum+=num/i;	
		}
		if(sum==num)
			return true;
		return false;
	}
    
}
int main()
{
	int num;
	cin>>num;
	bool ans=checkPerfectNumber(num);
	if(ans)
		cout<<"true";
	else
		cout<<"false";
}
