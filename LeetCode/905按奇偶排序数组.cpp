#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
vector<int> sortArrayByParity(vector<int>& A) {
     vector<int>V1;
	 vector<int>V2;
	 for(vector<int>::iterator it=A.begin();it!=A.end();it++)
	 {
	 	if((*it)%2==0)
	 		V1.push_back(*it);
	 	else
	 		V2.push_back(*it);
	} 
	for(vector<int>::iterator it=V2.begin();it!=V2.end();it++)
	{
		V1.push_back(*it);
	}
	cout<<endl;
	for(int i=0;i<V1.size();i++)
		cout<<V1[i]<<" "; 
	return V1;
}
int main()
{
	int numsSize;
	cin>>numsSize;
	vector<int>nums;
	int num,i;
	for(i=0;i<numsSize;i++)
	{
		cin>>num;
		nums.push_back(num);
	}
	vector<int>ans=sortArrayByParity(nums);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" "; 
	return 0;
}
