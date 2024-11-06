#include<iostream>
using namespace std;
void change( int &b){   // pass by alias of variable
    b=40;

}
int main(){
    int a=20;
    change(a);
    cout<<a;
    return 0;
    
}