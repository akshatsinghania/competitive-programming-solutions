//https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int moves;

int main() {
    for(int  r = 0;r < 5;++r){
        for(int c = 0;c < 5; ++c){
            int input;
            cin >> input;
            if(input == 1){
                moves = abs(r - 3) + abs(c - 3);
            }
        }
    }
    cout << moves;
    return 0;
}