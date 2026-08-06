#include <iostream>
using namespace std;

int main(){
    int arr[] = {23,24,22,16,20};
    int size = 5;
    cout<<sizeof(arr)/sizeof(int)<<endl;
    cout<<sizeof(arr)<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0; 
}
