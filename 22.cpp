//https://codeforces.com/contest/1499/problem/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <array>

using namespace std;

//Variables

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k1,k2;
        int w,b;
        cin >> n >> k1 >> k2;
        cin >> w >> b;
        if(w > (k1 + k2)/2){
            cout << "NO" << endl;
        }
        else if(b > (2 * n - (k1 + k2))/2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}