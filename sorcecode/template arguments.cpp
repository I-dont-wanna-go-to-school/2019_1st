// template arguments
#include<iostream>
using namespace std;
int main(){
    char myntcs[] = "wellcome!!";
    string mystring = myntcs;
    cout << mystring <<endl;
    cout << mystring.c_str()<<endl;
    cout << mystring.data()<<endl;
}
