// �� ���� ���ϴ� ���α׷��� Class������� �ۼ��Ͻÿ�.
#include<iostream>
using namespace std;
class CMath{
    int a,b;
    public:
    CMath(){a=b=1;
	}
    CMath(int x,int y){
    	a = x; b = y;
	}
    int Add(){
    	return a+b;
	}
};
int main(){
    CMath me, you(3,6);
    cout<<me.Add();
}
