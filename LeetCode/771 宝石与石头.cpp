#include<iostream>
#include<cstring>
using namespace std;
int numJewelsInStones(string J, string S) {
	int i,j;
	int count=0;
	int lenJ=J.length();
	int lenS=S.length();
	for(i=0;i<lenJ;i++)
	{
		for(j=0;j<lenS;j++)
		{
			if(J[i]==S[j])
				count++;
		}
	}
    return count;
}
int main()
{
	string A,B;
	cin>>A>>B;
	cout<<numJewelsInStones(A,B)<<endl;
	return 0;
}
