//�� ���� ���ϴ� Ŭ����(������) 
#include<iostream>
using namespace std;
class CMath{
	int x,y; // Ŭ������ �������  
public:
	CMath(int a, int b):x(a),y(b){
	}
	Add(){return(x+y); //CMath �� ������, Add�� ����Լ�  
	}
};
int main(){
	CMath *p;
	p = new CMath(2,3);
	cout << p->Add();
	delete p;
} 
