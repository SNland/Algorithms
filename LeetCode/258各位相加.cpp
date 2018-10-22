#include<iostream>
#include<cstdio>
using namespace std;
/*
10-19对应的结果为1-9
20-29对应的结果为1-9
找出规律为：num%9 
*/
int addDigits(int num) {
    if(num==0)
        return 0;
	int ans;
	ans=num%9;
    return ans==0?9:ans;
}

//暴力解法 (递归) 
int addDigits1(int num)
{
	int sum=0;
	if(num<10)
		return num;
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}
	return addDigits1(sum);
}
//暴力解法(循环)
int addDigits2(int num)
{
	int sum=0;
	do
	{
		sum=0;
		while(num>0)
		{
			sum=sum+num%10;
			num=num/10;
		}
		num=sum;
	}while(sum>=10);
	return sum;
} 
int main()
{
	int num;
	cin>>num;
	printf("%d\n",addDigits2(num));
	printf("%d\n",addDigits1(num));
	printf("%d\n",addDigits(num));
	return 0;
}
