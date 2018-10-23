#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
int titleToNumber(char *s) {
      int len=strlen(s);
    int temp,i,j=0;
    int sum=0;
    for(i=len-1,j=0;j<len&&i>=0;i--,j++)
    {
    	temp=s[j]-'A';
    	sum+=(temp+1)*pow(26,i); 
	}
    return sum;
}
int main()
{
	int size;char *ch;
	scanf("%d",&size);
	char s[size];
	scanf("%s",s);
	ch=s;
	int ans=titleToNumber(ch);
	printf("%d",ans);
	return 0;
}
