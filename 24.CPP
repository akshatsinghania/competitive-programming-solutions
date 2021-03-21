//https://codeforces.com/problemset/problem/160/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <array>
#include <numeric>

using namespace std;

int main() {
    float n;
    cin >> n;
    vector<float> a(n);
    float totalSumOfArray = 0;
    for(int i = 0;i < n;++i){
        cin >> a[i];
        totalSumOfArray += a[i];
    }
    sort(a.begin(),a.end(), greater<int>());
    int coinCount = 1;
    float CurrentSum = 0;
    for(int i = 0;i < n;++i){
        if(CurrentSum + a[i] > totalSumOfArray/2){
            cout << coinCount;
            return 0;
        }
        else{
            CurrentSum += a[i];
            coinCount++;
        }
    }
    cout << coinCount;
    return 0;
}