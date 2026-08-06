#include<iostream>
using namespace std;
int main(){
    int arr[]={12,24,53,66,21,34,42,11};
    int largest = INT8_MIN;
    for(int i=0; i<8; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}