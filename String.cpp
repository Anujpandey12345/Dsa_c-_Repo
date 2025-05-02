#include<iostream>
using namespace std;
char GetMaxiOccu(string str){
    int arr[26] = {0};
    for(int i = 0; i < str.length();i++){
        char ch = str[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26;i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;


}
int main(){
    string str;
    cout<<"Enter the String : :";
    cin>>str;
    cout<<"MAximum Occurence is ::" <<GetMaxiOccu(str)<<" ";

    return 0;
}
