#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s)
{
	sort(g.begin(),g.end());
	sort(s.begin(),s.end());
	int count,start;
	count=start=0;
	for(int i=0;i<g.size();i++)
	{
		for(int j=start;j<s.size();j++)
		{
			if(g[i]<=s[j])
			{
				count++;
				start=j+1;
				break;
			}
		} 
	}
	return count;
}
int main()
{
	int sizeg,sizes,nums;
	cin>>sizeg>>sizes;
	vector<int>g;
	vector<int>s;
	for(int i=0;i<sizeg;i++)
	{
		cin>>nums;
		g.push_back(nums);
	}
	for(int j=0;j<sizes;j++)
	{
		cin>>nums;
		s.push_back(nums);
	}
	int ans=findContentChildren(g,s);
	cout<<ans;
	return 0;
}
