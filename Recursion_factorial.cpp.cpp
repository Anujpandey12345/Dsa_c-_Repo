#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    
    //Base case
    if(n == 0){
        return 1;
    }
        
    int SmallValue = factorial(n-1);
    int BigValue = n  * SmallValue;
    return BigValue;
}


int main() {
	int n;
	cin >> n ;
	int ans = factorial(n);
	cout<<"Factorial is ->"<< ans << endl;

}
