// (클래스) 탬플릿 함수를 이용하여 두 수를 더하는 프로그램을 작성하시오. 
#include<iostream>
using namespace std;
template <class T> 
class CMath{
public:
	CMath(){}
T Add(T a, T b){
	return a+b;
} 
};
int main(){
	CMath<int> me;
	CMath<double> he;
	cout << me.Add(4,5) << endl;
	cout << he.Add(4.1, 5.1) << endl;
}
