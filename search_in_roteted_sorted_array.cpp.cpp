#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[9] = {5, 6, 7, 8, 9, 10, 1, 2, 50};
	int target = 3;
	int start = 0;
	int end = 8;
	while(start <= end){
	    int mid = (start + end)/2;
	    if(arr[mid] == target){
	        cout<<"This is ans :: "<< mid << endl;
	        return 0;
	    }
	    if(arr[start] <= arr[mid]){
	        if(arr[start] <= target && target <= arr[mid]){
	            end = mid - 1;
	        }else{
	            start = mid + 1;
	        }
	    }else{
	        if(arr[mid] <= target && target <= arr[end]){
	            start = mid + 1;
	        }else{
	            end = mid - 1;
	        }
	    }
	}
	cout<<"Not Found"<<endl;
	return 0;

}
