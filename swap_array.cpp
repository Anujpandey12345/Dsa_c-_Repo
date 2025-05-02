#include<iostream>
using namespace std;

int main(){

  int arr[] = {1, 2, 3, 4, 5};
    int st = 0;
    int ed = 4;
    while(st <= ed){
        int temp = arr[st];
        arr[ed] = arr[st];
        arr[st] = temp;
        st++;
        ed--;
        cout<<temp<<" ";
    }
    return 0;
}
