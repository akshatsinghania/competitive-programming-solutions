//https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
    string input;
    cin >> input;
    input[0] = toupper(input[0]);
    cout << input;
    return 0;
}