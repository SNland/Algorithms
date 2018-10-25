#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int** generate(int numRows, int** columnSizes){
	if(numRows==0)
		return 0;
	int **returnArray=(int**)malloc(sizeof(int*)*numRows);
	*columnSizes=(int*)malloc(sizeof(int)*sizeof(numRows));
	int i,j=0;
	for(i=0;i<numRows;i++)
	{
		*columnSizes[i]=i+1;
		returnArray[i]=(int*)malloc(sizeof(int)*(i+1));
	}
	for(j=0; j<i+1; j++)
        {
            if( (0 == j)  || (i == j) )
                returnArray[i][j] = 1;
            else
                returnArray[i][j] = returnArray[i-1][j-1] + returnArray[i-1][j];
        }
	return returnArray;
}
int main()
{
	int numRows;
	cin>>numRows;
	int nums[numRows][numRows],c,i,j;
	c=1;
		for(i=0;i<numRows;i++)
		{
			for(j=0;j<i+1;j++)
				nums[i][j]=0;
		}
	for(i=0;i<numRows;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(j==0||j==i)
				nums[i][j]=1;
			else
				nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
		}
	}
		for(i=0;i<numRows;i++)
		{
			for(j=0;j<i+1;j++)
			{
				cout<<nums[i][j]<<"  ";
			}
			cout<<endl;
			c++;
		}
	return 0;
}
