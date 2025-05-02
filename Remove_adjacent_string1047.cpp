#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string str = "aaabchdihiwdjidw";
    int j = 0, cnt = 0;
    for(int i = 0; i < str.length(); i++){
            str[j] = str[i];
            if(j > 0 && str[j] == str[j-1]){
                j -= 1;
                j++;
            }
            else{
                cnt++;
                j++;
            }
    }
    cout<<cnt<<" ";
}
