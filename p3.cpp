#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *b=&a;
    int **c=&b;
    cout<<*c<<endl<<&b;
    return 0;
}