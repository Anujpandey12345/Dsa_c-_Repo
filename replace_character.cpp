#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){



    string str = "My name is anuj";
    string temp = "";
    for(int i = 0; i < str.length(); ++i){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp<<" ";

    return 0;
}
