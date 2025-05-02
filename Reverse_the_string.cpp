#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "my name is anuj";
    int start = 0;
    int edd = str.length()-1;
    while(start <= edd){
        swap(str[start], str[edd]);
        start++;
        edd--;
    }
    cout<<str<<" ";

}
