// �Լ������ε��� �̿��Ͽ� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include<iostream>
using namespace std;
int Add(int a, int b){
	return a+b;
} 
double Add(double a, double b){
	return a+b;
}
int main(){
	cout << Add(4,5) << endl;
	cout << Add(4.1, 5.1) << endl;
}
