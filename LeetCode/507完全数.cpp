/**
����һ�� ��������������ͳ������������������������֮����ȣ����ǳ���Ϊ������������
����һ�� ������ n�� ������������������� True�����򷵻� False

ʾ����

����: 28
���: True
����: 28 = 1 + 2 + 4 + 7 + 14
 

ע��:

��������� n ���ᳬ�� 100,000,000. (1e8)
*/

#include<iostream>
#include<cmath>
using namespace std;


//ע����ȫ��������0,1��С��100000000����ȫ����6��28��496��8128��33550336
bool checkPerfectNumber(int num) {
	if(num==0||num==1)
		return false;
	int i,sum;
	sum=1;
	int m=sqrt(num+0.5);
	for(i=2;i<=m;i++)
	{
		if(num%i==0)
		{
			sum+=i;
			sum+=num/i;	
		}
		if(sum==num)
			return true;
		return false;
	}
    
}
int main()
{
	int num;
	cin>>num;
	bool ans=checkPerfectNumber(num);
	if(ans)
		cout<<"true";
	else
		cout<<"false";
}
