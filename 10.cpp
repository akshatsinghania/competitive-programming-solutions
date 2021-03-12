//https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <string>
using namespace std;

int n,X = 0;

int main() {
    cin >> n;
    for(int i = 1;i <= n;++i){
        string input;
        cin >> input;
        if(input.find("+") != string::npos){
            X++;
        }
        else if(input.find("-") != string::npos){
            X--;
        }

    }
    cout << X;
    return 0;
}