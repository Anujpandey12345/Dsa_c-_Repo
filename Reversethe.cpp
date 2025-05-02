#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "my name is anuj";
    string result = "";
    string word  = "";
    for(char ch : str){
        if(ch == ' '){
            reverse(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }else{
            word += ch;
        }
    }
    reverse(word.begin(), word.end());
    result += word;
    cout<<result<<" ";
}
