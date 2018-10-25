#include<iostream>
using namespace std;
//思路：先手拿，无论是拿1,2,3块，都会输，因为当n%4==0时，你的朋友就会相应的拿3,2,1块石头。 
bool canWinNim(int n) {
    if(n%4==0)
        return false;
    else
        return true;
}
int main()
{
	int num;
	cin>>num;
	bool ans=canWinNim(num);
	cout<<ans;
	return 0;
 } 
