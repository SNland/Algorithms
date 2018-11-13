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
	return V1;
}
//不使用额外空间 
vector<int> sortArrayByParity1(vector<int>& A)
{
	
	int start=0;
	int end=A.size()-1;
	int temp;
	while(start<=end)
	{
		if(A[start]%2==0)
			start++;
		if(A[end]%2==1)
			end--;
		if(A[start]%2==1&&A[end]%2==0)
		{
			temp=A[start];
			A[start]=A[end];
			A[end]=temp;
			start++;
			end--;
		 } 
	}
	return A;
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
	vector<int>ans=sortArrayByParity1(nums);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" "; 
	return 0;
}
