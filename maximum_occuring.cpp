#include <iostream>
#include<string>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String For Finding The Occuring :: ";
    cin>>str;
    map<char, int>mpp;
    for(int i = 0; i < str.length(); i++){
    mpp[str[i]]++;
    }
    string result = " ";
    int maxFer = 0;
    for(auto it : str){
        if(mpp[it] > maxFer){
            maxFer = mpp[it];
            result = it;
        }
    }
    cout<<"The MAximum Occuring Character is : "<<result<<" ";




}
