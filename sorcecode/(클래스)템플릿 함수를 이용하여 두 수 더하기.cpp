// (Ŭ����) ���ø� �Լ��� �̿��Ͽ� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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
