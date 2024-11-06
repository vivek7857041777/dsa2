#include<iostream>
using namespace std;
int main(){
    double arr[]={1,5,6,3,6,7,8};
    double *p=arr;
    p++;
    cout<<arr<<endl<<p;
    for(int i=0;i<6;i++){
        cout<<*(arr +i);
        cout<<endl;
    }
    cout<<endl<<(arr+4) %(arr +2);
    return 0;
}
