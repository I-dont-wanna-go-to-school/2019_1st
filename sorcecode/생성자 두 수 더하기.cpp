//�� ���� ���ϴ� �� ������ �Ἥ �����
#include<iostream>
using namespace std;
class CMath{
	int x, y;
public:
		CMath(int _x, int _y); // ������Ÿ��. �Լ����� 		
		int Add();
}; 
CMath::CMath(int _x, int _y):x(_x),y(_y){ // ::�� ���������۷�����  
		//x = _x, y=_y;
}
int CMath::Add(){
	return x+y;
}
int main(){
	CMath me(5,4);
	cout << me.Add(); 
}
