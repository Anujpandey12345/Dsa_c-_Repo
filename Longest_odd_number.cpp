#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str = "32238792181";
    int coun = 0;
    string result = "";
    for(char ch : str){
        if(ch%2 != 0){
            coun++;
            result += ch;

        }
    }
    cout<<"Count is :: "<<coun<<endl;
    cout<<"Longest Odd Number is ::"<<result<< " ";
}
