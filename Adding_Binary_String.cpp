#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "123";
    string s2 = "123";
    int num1 = std::stoi(s1);
    int num2= std::stoi(s2);
    int sum = num1 + num2;
    cout<<"Sum is ::" <<sum <<endl;

}



