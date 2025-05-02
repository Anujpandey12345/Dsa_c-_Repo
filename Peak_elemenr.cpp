#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 2, 3, 2, 3, 5, 6, };
    int ans = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){

        ans = ans ^ arr[i];
    }
    cout<<"Unique Number ans<<" ";

    return 0;
}
