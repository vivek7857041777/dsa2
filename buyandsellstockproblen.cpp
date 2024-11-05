#include<iostream>
using namespace std;
int main(){
    int num[6]={7,6,4,3,1};
    
    
    int p ;
    int ans = INT8_MIN;
    for(int i=0;i<5;i++){
       int t = INT8_MIN;
        for(int j=i+1;j<5;j++){
             
            t = max(t,num[j]);


        }
        p =t -num[i];
       
        
            
        ans =max(ans,p);
       
        

    }
    
    if(ans > 0){  cout<< "final answer is "<< ans;}
    else{ cout<< 0;}
    
    return 0;
    
}