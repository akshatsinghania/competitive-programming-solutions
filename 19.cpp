//https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    string input;
    bool YES = false;
    cin >> input;
    int counter = 1;
    for(int i = 1;i <= input.length();++i){

        if(input[i] == input[i - 1]){
            counter++;
        }
        else{
            if(counter >= 7){
                cout << "YES";
                return 0;
            }
            counter = 1;
        }

    }

    cout << "NO";

    return 0;
}
