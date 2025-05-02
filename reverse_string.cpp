#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string str = "Test";
    map<char, int>mpp;
    for(int i = 0; i < str.length(); i++){
        mpp[str[i]]++;
    }
    char result = " ";
    int maxFer = 0;
    for(auto it : str){
        if(mpp[it] > maxFer){
            maxFer = mpp[it];
            result = it;
        }
    }
    cout<<result<<" ";




}

