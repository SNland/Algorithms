#include<iostream>
#include<set>
#include<vector>
using namespace std;
int distributeCandies(vector<int>& candies) {
    set<int> A;
    int i,sum;
    sum=0;
    for(i=0;i<candies.size();i++)
    {
    	if(A.count(candies[i])==0)
    	{
    		A.insert(candies[i]);
    		sum++;
		}
		if(sum==candies.size()/2)
			break;
	}
	return sum;
}
int main()
{
	int size,n;
	cin>>size;
	vector<int>nums;
	for(int i=0;i<size;i++)
	{
		cin>>n;
		nums.push_back(n);	
	}
	int ans=distributeCandies(nums);
	cout<<ans;	
	return 0;
}
