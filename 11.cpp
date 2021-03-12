//https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int moves;

int main() {
    for(int  r = 1;r <= 5;++r){
        for(int c = 1;c <= 5; ++c){
            int input;
            cin >> input;
            if(input == 1){
                moves = abs(3 - r) + abs(3 - c);
            }
        }
    }
    cout << moves;
    return 0;
}