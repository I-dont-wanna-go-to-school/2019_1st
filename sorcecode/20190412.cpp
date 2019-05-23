#include<iostream>
#include<fstream>
using namespace std;
int main(){
 ofstream f("my.txt");
 f<< "Welcome";
 f.close();
}
