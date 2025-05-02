#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10] = {12, 21, 123,128};
    cout<<"Adrress of First -block is ::"<<arr<<endl;
    cout<<"Value at first block ::"<<arr[0]<<endl;
    cout<<"Adrress of First -block is ::"<<&arr[1]<<endl;
    cout<<"4th ::"<<*arr<<endl;
    cout<<"5th ::"<<(*arr)++<<endl;
    cout<<"6th ::"<<*arr+5<<endl;
    cout<<"7th ::"<<*(arr+1)<<endl;
    int i = 3;
    cout<<"This is new one :: "<< i[arr]<<endl;


    int temp[10];
    cout<< sizeof(temp) <<endl;
    int *ptr = &temp[0];
    cout<< sizeof(ptr) <<endl;

    return 0;
}
