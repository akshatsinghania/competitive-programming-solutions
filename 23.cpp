//https://www.codechef.com/problems/HS08TEST
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



int main() {
    float bankCharges  = 0.50;
    int X;
    float Y;
    cin >> X >> Y;
    if(X % 5 == 0 & X + bankCharges <= Y){
        cout << Y - (X + bankCharges);
    }
    else{
        cout << Y;
    }
    return 0;
}