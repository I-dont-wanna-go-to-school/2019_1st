//사각형의 가로 세로를 입력받고 면적을 계산하는 프로그램 
#include<iostream>
using namespace std;
class CMath{
	int w,h;
	public:
		CMath(int a,int b){w=a;h=b;}
		int Area(){
			return w*h;
		}
};
int main(int a,int b){
	cout<<"사각형의 너비를 입력하세요: ";
    cin>>a;
    cout<<"사각형의 높이를 입력하세요: ";
    cin>>b;
	CMath me(a,b);
	cout<<"사각형의 넓이는 "<<me.Area()<<" 입니다.";
}



