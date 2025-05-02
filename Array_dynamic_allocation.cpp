
#include<iostream>
using namespace std;
int getSum(int *arr){
    int sum = 0;
    for(int i = 0; i < n1; i++){
       sum += arr[i];
    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    int *arr = new int[5];
    int n1 = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n1; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout<<"Sum of All array is :: "<<ans<<endl;

}
