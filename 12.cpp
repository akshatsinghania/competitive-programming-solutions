//https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string FirstString,SecondString;

int main() {
    cin >> FirstString >> SecondString;
    transform(FirstString.begin(),FirstString.end(),FirstString.begin(),::tolower);
    transform(SecondString.begin(),SecondString.end(),SecondString.begin(),::tolower);
    if(FirstString != SecondString){
        if(FirstString > SecondString){
            cout << 1;
        }
        else{
            cout << -1;
        }
    }
    else{
        cout << 0;
    }
    return 0;
}