#include <bits/stdc++.h>
using namespace std;
int Power(int n){
    //Base case -> Base Case is very important in recursion.
    if(n == 0){
        return 1;
    }
    int SmallValue = Power(n-1);
    int BigValue = 2  * SmallValue;
    // return n * factorial(n-1);
    return BigValue;
}


int main() {
	int n;
	cin >> n ;
	int ans = Power(n);
	cout<<"Power of "<< n <<" is -> "<< ans << endl;

}
