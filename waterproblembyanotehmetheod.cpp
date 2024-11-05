#include<iostream>
using namespace std;
int main(){ // by brute force approach
int height[9] ={1,8,6,2,5,4,8,3,7};
int t,p,ans,n=INT8_MIN;
for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
        p=j-i;

        t=min(height[i],height[j]);
        ans=p*t;
        n=max(n,ans);

    }
}
cout<<"final answer is "<<n;
    
}

