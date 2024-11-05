#include<iostream>
using namespace std;
int main(){
    int x,p =1 ;
    cout<<"enter the value of x";
    cin>> x;
    for(int i =0;i<5;i++){
        p *=x;
    }
    cout<<"final answer is"<< p;
    return 0;
}