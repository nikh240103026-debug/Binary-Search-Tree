#include<iostream>
using namespace std;
int main(){
    int arr[]={12,24,53,66,21,34,42,11};
    int largest = INT8_MIN;
    int smallest = INT8_MAX;
    for(int i=0; i<8; i++){
        smallest=min(arr[i], smallest);
        largest=max(arr[i], largest);
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    return 0;
}