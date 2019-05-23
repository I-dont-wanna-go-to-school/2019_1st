//두 수를 더하는 클래스(포인터) 
#include<iostream>
using namespace std;
class CMath{
	int x,y; // 클래스의 멤버변수  
public:
	CMath(int a, int b):x(a),y(b){
	}
	Add(){return(x+y); //CMath 는 생성자, Add는 멤버함수  
	}
};
int main(){
	CMath *p;
	p = new CMath(2,3);
	cout << p->Add();
	delete p;
} 
