#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
void reverse(char *s,int start,int e)
{
	int i,j;
	char temp;
	for(i=start,j=e;i<=j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
char* reverseWords(char* s) {
    int len=strlen(s);
    int i=0;
    int start,end;start=0;end=-1;
    while(s[i]!='\0')
    {
    	if(s[i]==' '||s[i+1]=='\0')
    	{
    		if(s[i+1]=='\0')
    			end=i;
    		else
    			end=i-1;
    		reverse(s,start,end);
    		end=-1;
    		start=i+1;
		}
		i++;
	}
	return s;
}
int main()
{
	char s[1000];
	gets(s);
	char *ch=reverseWords(s);
	cout<<ch;
	return 0;
}
