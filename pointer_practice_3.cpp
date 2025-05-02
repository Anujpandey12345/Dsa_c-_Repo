#include<iostream>
#include<algorithm>
using namespace std;
void update(int **ptr1){
    //ptr1 = ptr1 + 1; -> Not working
    //*ptr1 = *ptr1 + 1-> Working
    **ptr1 = **ptr1 + 1;

}


int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;
    //cout<<endl<<endl<<"Sab theek  chal rha hai"<<endl<<endl;
    //cout<<i<<endl;
    //cout<<*ptr<<endl;
    //cout<<ptr<<endl;
    //cout<<**ptr1<<endl;
    //c//out<<ptr1<<endl;
    //cout<<&i<<endl;
    //cout<<&ptr<<endl;
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;

    cout<<endl<<endl<<endl;

    update(ptr1);

    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;

}
