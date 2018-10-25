#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;
 vector<string> fizzBuzz(int n) {
     int i;
	 vector<string> ans;
	 for(i=1;i<=n;i++) 
	 {
	 	if(i%15==0)
	 		ans.push_back("FizzBuzz");
	 	else if(i%3==0)
	 		ans.push_back("Fizz");
	 	else if(i%5==0)
	 		ans.push_back("Buzz");
	 	else
	 	{
	 		
	 		ans.push_back(to_string(i));
		 }
	   }  
	   
	   return ans;
    }
int main()
{
	int num,size;
	size=0;
	cin>>num;
	vector<string> ans=fizzBuzz(num);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i];
	}
	return 0;
 } 
