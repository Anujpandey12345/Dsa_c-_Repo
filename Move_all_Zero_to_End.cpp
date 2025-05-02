#include <iostream>
#include <string>
using namespace std;

int main() {
    string one = "hello world is the good";
    int n = one.length();
    int start = 0;
    for (int end = 0; end <= n; end++) {
        if (end == n || one[end] == ' ') {
            int left = start;
            int right = end - 1;
            while (left < right) {
                char temp = one[left];
                one[left] = one[right];
                one[right] = temp;
                left++;
                right--;
            }
            start = end + 1;
        }
    }
    cout << one << endl;
    return 0;
}

