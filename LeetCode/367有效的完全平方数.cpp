#include<iostream>
#include<cstdlib>
#include<set>
using namespace std;
bool isPerfectSquare(int num) {
   int i;
   for(i=1;num>0;i+=2)
   {
   		num-=i;
   }
   	if(num==0)
   		return true;
	else return false;
}
int main()
{
	int num;
	cin>>num;
	bool ans=isPerfectSquare(num);
	printf(ans==true?"true":"false"); 
	return 0; 
 } 
