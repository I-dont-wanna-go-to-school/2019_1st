#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int a, char* b[]){
    switch(b[2][0]){
        case '+':
            cout << atoi(b[1])+atoi(b[3]);
            break;
        case '*':
        cout << atoi(b[1])*atoi(b[3]);
        break;
    }
    cout << b[2][0] << endl;
}
