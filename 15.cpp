//https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>

using namespace std;


int main() {
    int numberOfStones;
    cin >> numberOfStones;
    string Stones;
    cin >> Stones;

    int NumberOfStonesToBeRemoved = 0;

    for(int i = 0 ; i < Stones.length();++i){
        if(Stones[i] == Stones[i - 1]){
            NumberOfStonesToBeRemoved++;
        }
    }
    cout << NumberOfStonesToBeRemoved;
    return 0;
}