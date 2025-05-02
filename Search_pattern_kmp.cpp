#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string txt = "abcab";
    string pat = "ab";
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i < 5){
        if(txt[i] == pat[j]){
            txt = txt.substr(0 , 2);
            i++;
            j++;
        }
        j = 0;
    }
    cout<<"Ans is :: "<<txt<<endl;


}
