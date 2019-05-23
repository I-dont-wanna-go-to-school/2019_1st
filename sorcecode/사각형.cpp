//»ç°¢Çü 
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
int main(){
	CMath me(3,6);
	cout<<me.Area();
}
