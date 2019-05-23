// 두 수를 더하는 프로그램을 Class기반으로 작성하시오.
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
