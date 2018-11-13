#include<iostream>
#include<cstdlib> 
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
     sort(nums.begin(),nums.end()); 
     int size=nums.size();
     int count=1;
     int S=nums[0];
     for(int i=1;i<size;i++)
     {
     	if(nums[i]==nums[i-1])
     	{
     		count++;
     		S=nums[i];
		 }
		 else
		 {
		 	if(count>size/2)
		 	{
		 		break;
			 }
			 else
			 {
			 	count=1;
				S=nums[0];	
			 }
		 }
	 }
	 return S;
}
int main()
{
	vector<int>nums;
	int size,num;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>num;
		nums.push_back(num);
	}
	int ans=majorityElement(nums);	
	cout<<ans;
}
