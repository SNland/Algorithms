#include<iostream>
using namespace std;
//˼·�������ã���������1,2,3�飬�����䣬��Ϊ��n%4==0ʱ��������Ѿͻ���Ӧ����3,2,1��ʯͷ�� 
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
