//두 수를 더하는 거 생성자 써서 만들기
#include<iostream>
using namespace std;
class CMath{
	int x, y;
public:
		CMath(int _x, int _y); // 프로토타입. 함수원형 		
		int Add();
}; 
CMath::CMath(int _x, int _y):x(_x),y(_y){ // ::은 스코프오퍼레이터  
		//x = _x, y=_y;
}
int CMath::Add(){
	return x+y;
}
int main(){
	CMath me(5,4);
	cout << me.Add(); 
}
