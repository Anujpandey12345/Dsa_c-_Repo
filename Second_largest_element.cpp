#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {12, 23, 44, 56, 67, 12, 43423};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int sLargest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }

    }
    cout<<"The Second Largest Element is :: "<<sLargest<<endl;
}

