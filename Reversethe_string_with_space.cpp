#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "My name is Anuj";
    string result = "";
    string word = "";
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
