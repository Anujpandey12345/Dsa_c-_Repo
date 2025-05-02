#include <iostream>
#include <string>
#include <set>
using namespace std;

string removeDuplicates(string str) {
    set<char> seen;
    int result = 0;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            result++;       // Add if not already in set
            //seen.insert(ch);     // Mark as seen
        }
    }

    cout<<"This is "<<result<<" ";
}

int main() {
    string str = "baadccab";
    string unique = removeDuplicates(str);
    cout << "String without duplicates: " << unique << endl;
    return 0;
}

