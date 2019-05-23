#include<iostream>
using namespace std; 
class CPnt{
	int x,y;
public:
	CPnt():x(1),y(2){}
	CPnt(int a,int b):x(a),y(b){}
void Prn(){
	cout << x << "."<< y <<endl;
}
CPnt Add(CPnt m){
	CPnt t;
	t.x= x+m.x;
	t.y= y+m.y;
	return(t);
}
};
int main(){
	CPnt me1(1,1);
	CPnt me2(2,2);
	CPnt me3 = me2.Add(me1);
	me3.Prn();
}
