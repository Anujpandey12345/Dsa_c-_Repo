#include<iostream>
using namespace std;

int main(){

  int arr[] = {1, 2, 3, 4, 5};
    int st = 0;
    int ed = arr.size()-1;
    while(st <= ed){
        int ans = swap(arr[st], arr[ed]);
        st++;
        ed--;
    }
    cout<<n<<" ";
    return 0;
}
