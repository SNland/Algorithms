#include<iostream>
using namespace std;
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int i,j,t;
    int sum=0;
    for(i=0;i<gridRowSize;i++)
    {
    	for(j=0;j<gridColSize;j++)
    	{
    		t=4;
    		if(grid[i][j])
    		{
    			if(i-1>=0&&grid[i-1][j])
	    		{
	    			t--;
				}
				if(j-1>=0&&grid[i][j-1])
				{
					t--;
				}
				if(j+1<gridColSize&&grid[i][j+1])
				{
					t--;
				}
				if(i+1<gridRowSize&&grid[i+1][j])
				{
					t--;
				}
				sum+=t;
			}
		}
	}
	return sum;
}
int main()
{
	return 0;
}
