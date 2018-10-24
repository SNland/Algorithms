#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArrayByParityII(vector<int>& A) {
	vector<int>a;
	vector<int>b;
	vector<int>nums;
	for(vector<int>::iterator it=A.begin();it!=A.end();it++)
	{
		if(*it%2==0)
			a.push_back(*it);
		else
			b.push_back(*it);
	}
	vector<int>::iterator it1=a.begin();
	vector<int>::iterator it2=b.begin();
     for(int i=0;i<A.size();i+=2)
	 {
	 	nums.push_back(*it1);
		nums.push_back(*it2);
		it1++;it2++; 
	 }  
	 return nums; 
}
int main()
{
	vector<int>nums;
	int size,N;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>N;
		nums.push_back(N);
	}
	nums=sortArrayByParityII(nums);
	for(int i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";
	return 0;	
}
 
