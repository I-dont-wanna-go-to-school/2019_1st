#include<iostream>
using namespace std;
class CPnt{
  int x, y;
public:
  CPnt(int a, int b):x(a),y(b){}
  CPnt Add(CPnt me){return(CPnt(x + me.x, y + me.y));}//Add��� operator+ ����ص� ����.  
  void Pr(){cout << x <<"." << y << endl;}
};
int main(){
  CPnt p1(1,1), p2(2,2), p3(0,0);
  p3 = p1.Add(p2);
  p3.Pr(); 
} 
