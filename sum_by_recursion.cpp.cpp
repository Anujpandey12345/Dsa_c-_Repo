//-->Anuj Pandey Code For Cpp -->\\
//Sum of Number's BY recursion
#include <bits/stdc++.h>
using namespace std;
//Write Function
int isSorted(int *arr, int size){
    if(size == 0){
        return 0;
    }
    return arr[0] + isSorted(arr+1, size-1);
}
int main() {

	int arr[10] = {14 , 81, 822 , 8 , 4 , 45 , 652 , 85 , 852,8};
	int size = 10;
	
	int ans = isSorted(arr, size);
	cout<<"Sum is ::"<<ans<<endl;
	
	
    return 0;
}
