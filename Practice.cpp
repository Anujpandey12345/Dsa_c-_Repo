#include<iostream>
using namespace std;
int main(){
    string str = "My name is Anuj";
    int start = 0;
    int end = str.length();
    while(start <= end){
        char temp = str[start];
        str[end] = str[start];
        str[start] = temp;
}
    cout<<str;

    return 0;
}
