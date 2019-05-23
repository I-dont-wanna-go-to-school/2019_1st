// 삼각형, 사각형, 원의 면적 
#include<iostream>
using namespace std;
class CPoly{
protected:
		double w,h;
public:
	virtual void Area()=0;
};
class CRect: public CPoly{
	public:
		CRect(int a, int b){w=a; h=b;}
		void Area(){cout << w*h << endl;}
}; 
class CTri: public CPoly{
	public:
		CTri(int a, int b){w=a; h=b;}
		void Area(){cout << w*h/2 << endl;}
};
class CCir: public CPoly{
	public:
		CCir(int a){w=a; h=a;}
		void Area(){cout << w*h*3.14 << endl;}
};
int main(){
	CPoly* p;
	p= new CRect(2,3);
	p->Area();
	CTri* me = new CTri(2,3);
	p = me;
	p->Area();
	CCir* r;
	r= new CCir(1);
	r->Area();
	delete p;
	delete r;
}
