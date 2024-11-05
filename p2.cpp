#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *b = &a;
    cout<<a<<endl<<b<<endl<<&a<<endl<<&b<<endl<<*b;
    return 0;
}