#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b){
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}