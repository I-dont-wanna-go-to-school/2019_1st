#include<iostream>
using namespace std;
class CCnt{
    public:
        static int cnt;
};
int CCnt::cnt = 0;
int main(){
    CCnt me;
    cout << me.cnt;
}
