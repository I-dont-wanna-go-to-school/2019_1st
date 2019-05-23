//두개의 정수, 두개의 실수 더하기
#include<iostream>
using namespace std;
int sum (int a, int b)
{
	return a + b;
 } 
double sum (double a, double b)
{
	return a+b;
}
int main()
{
	cout << sum(10,20) << endl;
	cout << sum(1.3,2.5) << endl;
}
