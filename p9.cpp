#include<iostream>
#include<vector>
using namespace std; // binary search by using recursion 
int binary(vector<int> arr,int tar,int start,int end){
    if(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>tar){
            end=mid-1;
           return  binary( arr, tar,start, end);

        }
        else if(arr[mid]<tar){
            start=mid+1;
            return  binary( arr,tar, start,end);


        }
        else{
            return mid;
        }

        
    }
   

}
int main(){
     vector<int>arr={};
     int tar=4; int start=0;  int end=arr.size()-1;
     cout<< binary(arr,tar,start,end);
     return 0;
}
