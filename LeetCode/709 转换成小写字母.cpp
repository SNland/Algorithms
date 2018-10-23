#include<iostream>
#include<cstring>
using namespace std;
string toLowerCase(string str) {
	int len=str.length();
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	return str;    
}
int main()
{
	string ch;
	cin>>ch;
	ch=toLowerCase(ch);
	cout<<ch<<endl;
	return 0;
 } 
