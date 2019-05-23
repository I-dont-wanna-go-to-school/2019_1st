//사각형의 면적을 계산하시오
#include<iostream>
using namespace std;
class CRect{
	int w,h;
	public:
		CRect(){}
		CRect(int a, int b){w=a; h=b;}
		int Area(){return w*h;}
		
}; 
int main(){
	CRect a[3];
	a[0]=CRect(2,3);
    a[1]=CRect(3,4);
    a[2]=CRect(4,5);
	cout << a[0].Area();
}
