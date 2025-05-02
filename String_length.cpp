#include<iostream>
using namespace std;
char ToLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }


}
bool checkPalin(char a[], int n){
    int st = 0;
    int ed = n-1;
    while(st <= ed){
        if(ToLower(a[st]) != ToLower(a[ed])){
            return False;
        }else{
            st++;
            ed--;
        }
        return True;
    }
}


void reverse(char name[], int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        char temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
}
int GetLength(char name[]){
    int cnt = 0;
    for(int i = 0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;

}
int main(){
    char name[20];
    cout<<"Enter the Name :: ";
    cin.getline(name, 20);
    int len = GetLength(name);
    cout<<"Length of "<<name<<" is ::"<<len<<endl;
    reverse(name, len);
    cout<<"Revese string is :: "<<name<<endl;
    cout<<"Palindrom Or not :: "<<checkPalin(name, len)<<" " <<endl;
    cout<<"TOLower Character is :: "<< ToLower('a')<<endl;
    cout<<"TOLower Character is :: "<< ToLower('C')<<endl;

}
