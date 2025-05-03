//-->Anuj Pandey Code For Cpp -->\\

#include <bits/stdc++.h>
using namespace std;
//Write Function
void sayDigit(int n, string arr[]){
    if(n == 0){
        return;
    }
    
    int digit = n % 10;
    n = n / 10;
    sayDigit(n, arr);
    cout<< arr[digit] <<" ";
}
int main() {
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Eight", "Nine", "Ten"};
    
    int n;
    cin >> n;
    cout<< endl << endl << endl;
    sayDigit(n, arr);
    cout<< endl << endl << endl;
}
