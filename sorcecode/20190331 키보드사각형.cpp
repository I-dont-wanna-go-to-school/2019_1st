//�簢���� ���� ���θ� �Է¹ް� ������ ����ϴ� ���α׷� 
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
	cout<<"�簢���� �ʺ� �Է��ϼ���: ";
    cin>>a;
    cout<<"�簢���� ���̸� �Է��ϼ���: ";
    cin>>b;
	CMath me(a,b);
	cout<<"�簢���� ���̴� "<<me.Area()<<" �Դϴ�.";
}



