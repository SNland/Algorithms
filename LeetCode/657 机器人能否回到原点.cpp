#include<iostream>
using namespace std;
bool judgeCircle(char* moves) {
    int x,y,i;
    i=x=y=0;
    while(moves[i]!='\0')
    {
    	if(moves[i]=='U')
    		y++;
    	else if(moves[i]=='D')
    		y--;
    	else if(moves[i]=='L')
    		x--;
    	else if(moves[i]=='R')
    		x++;
    	i++; 
	}
	if(x==0&&y==0)
		return true;
	else
		return false;
}
int main()
{
	
	return 0;
}
