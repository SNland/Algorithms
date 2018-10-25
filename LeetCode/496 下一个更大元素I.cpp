#include<iostream>
#include<vector> 
using namespace std;
 vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    int i,j,flag;
    vector<int> ans;
	for(i=0;i<findNums.size();i++)
	{
		flag=0;
		for(j=0;j<nums.size();j++)
		{
			if(nums[j]==findNums[i])
			{
				flag=1;
			}
			if(flag&&nums[j]>findNums[i])
			{
				ans.push_back(nums[j]);
				break;
			}
			if(j==nums.size()-1)
				{
					flag=0;
				}
		}
		if(flag==0)
			ans.push_back(-1);	
	}
	return ans;    
}
int main()
{
	vector<int>A;
	vector<int>B;
	int a,b,N;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>N;
			A.push_back(N);	
	}
	for(int i=0;i<b;i++)
	{
		cin>>N;
			B.push_back(N);	
	}
	vector<int>ans=nextGreaterElement(A,B);
	for(vector<int>::iterator it=ans.begin();it!=ans.end();it++)
	{
		cout<<*it<<" ";
	 } 
	return 0;
}
