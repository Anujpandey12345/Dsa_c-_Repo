//-->Anuj Pandey Code For Cpp -->\\

#include <bits/stdc++.h>
using namespace std;
//Write Function
void Reachhome(int src, int des){
    cout<<"source :: "<< src <<" "<<"Destination :: "<< des <<endl;
    //Base Condittion
    if(src == des){
        cout<<"Ram Ram Sarayane Pahuch gya hu ghar !!"<<endl;
        return ;
    }
    //processing
    src++;
    //Recursive call
    Reachhome(src, des);
}
int main() {
    int des = 10;
    int src = 1;
    
    Reachhome(src, des);
    
    return 0;
}
