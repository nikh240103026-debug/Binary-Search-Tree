#include<iostream>
using namespace std;
int main(){
    int arr[]={12,24,53,66,21,34,42,11};
    int samllest = INT8_MAX;
    for(int i=0; i<8; i++){
        if(arr[i]<samllest){
            samllest=arr[i];
        }
        // else{
        //     return;
        // }
    }
    cout<<samllest<<endl;
    return 0;
}