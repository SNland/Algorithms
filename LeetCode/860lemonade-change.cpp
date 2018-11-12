/*
  author:sn
  create_time:2018/11/12
*/
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

//±©Á¦½â·¨ 
bool lemonadeChange(vector<int>& bills)
{
    int nums5,nums10,pay,cost,flag;
    pay=nums5=nums10=0;
    cost=5;
    for(int i=0;i<bills.size();i++)
    {
    	flag=1;
    	if(bills[i]==5)
    	{
    		nums5++;
		}
		if(bills[i]==10)
		{
			nums10++;
		}
		if(bills[i]-cost>0)
		{
			pay=bills[i]-cost;
			if(pay==5)
				nums5--;
			else if(pay==10)
			{
				if(nums10>=1)
					nums10--;
				else if(nums5>=2)
					nums5-=2;
				else
				{
					flag=0;
					break;
				}
			}
			else if(pay==15)
			{
				if(nums10>=1&&nums5>=1)
				{
					nums10--;
					nums5--;
				}
				else if(nums5>=3)
				{
					nums5-=3;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
		if(nums5<0||nums10<0)
			return false;
	}
	if(!flag)
		return false;
	else 
		return true;
}

int main()
{
	vector<int>bills;
	int size,nums;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>nums;
		bills.push_back(nums);
	}
	bool ans=lemonadeChange(bills);
	printf(ans==true?"true":"false");
	return 0;
 } 
