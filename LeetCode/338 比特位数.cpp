#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
//��̬�滮���ҹ���) 
/*
0	   0	0
1	   1	1
2	  10	1
3	  11	2
4	 100	1
5	 101	2
6	 110	2
7	 111	3
8	1000	1
9	1001	2
10	1010    2
......
���������Ƶ��ã�i�Ķ�������������1���õ�������λ��+i�����һλ��(i%2) 
*/ 
int* countBits(int num, int* returnSize) {
    *returnSize=num+1;
    int i,*temp;
    temp=(int*)malloc(sizeof(int)*(num+1));
    memset(temp,0,sizeof(temp));
    for(i=1;i<=num;i++)
    {
    	temp[i]=temp[i>>1]+i%2;
	}
	return temp;
}
int main()
{
	int num,size;
	cin>>num;
	size=0;
	int* ans=countBits(num,&size);
	for(int i=0;i<size;i++)
		cout<<ans[i];
	return 0; 
} 
