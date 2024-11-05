#include<iostream>
using namespace std;
int main(){
    int r=INT8_MIN;
    int ans;
    int t=0;
    int m;
    
    int p=INT8_MIN;
    int height[9]={1,8,6,2,5,4,8,3,7};
    for(int i=0;i<9;i++){
     r =max(r,height[i]);
     
      p =min(r,height[i+1]);
      t=(i+1)-t;
     ans =p*t;
     m =max(m,ans);
     
    
    
    }
    cout<<"final answer is = "<<m ;
    return 0;
}