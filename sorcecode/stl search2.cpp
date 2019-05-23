#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50,60};
    vector<int>::iterator iter;
    iter = find(v.begin(),v.end(),20);
    cout<< *iter <<endl;
    const int val = 100;
    iter = find(v.begin(),v.end(), val);
    if (iter == v.end())
    cout << val << "ÀÌ ¾øÀ½" << endl;
    return 0;
}
