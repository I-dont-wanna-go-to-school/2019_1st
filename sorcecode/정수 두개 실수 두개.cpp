//�ΰ��� ����, �ΰ��� �Ǽ� ���ϱ�
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
