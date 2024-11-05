#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> arr ,int tar){ // i have to use cout in main function bcz in fuction i have to give any int return value 
    int start=0, end = arr.size()-1;
    
    
    while(start <= end){
       int mid=(start+end) /2;

        if(tar>arr[mid]){
            start=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return  mid;
        }
    }
    
    

}

int main(){
    vector<int> arr1={4,5,6,7,9,10,15};
     int tar1=10;
      
    vector<int> arr2={ 1,4,6,7,8,10,45,88};
     int tar2=4;
     cout<<binary(arr1,tar1);

    cout<<endl;
    cout<<binary(arr2,tar2);
    
    return 0;

}