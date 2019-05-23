// 함수오버로딩을 이용하여 두 수를 더하는 프로그램을 작성하시오. 
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
