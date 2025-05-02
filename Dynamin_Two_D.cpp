#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int row;
    row = 2;
    int **arr = new int*[row];
    int size[] = {1, 1, 0};
    for(int i = 0; i < row; i++){
        arr[i] = new int[size[i]];
    }
    //Cretion Done

    //Taking input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < size[i]; j++){
            cin>>arr[i][j];
        }
    }
    //Taking Output
    cout<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < size[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Releasing Memory
    //for(int i = 0; i < row; i++){
      //  delete [] arr[i];
    //}
    //delete [] arr;
    cout << 20 + 1;
    return 0;
}
