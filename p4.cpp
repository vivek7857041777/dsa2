#include<iostream>
using namespace std;
void change(int *a){ // pass by refrences
   *a = 50;
}
int main(){
 int b=60;
 change(&b);
 cout<< b;
 return 0;
}
