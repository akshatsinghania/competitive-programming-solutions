//https://codeforces.com/contest/1497/problem/A
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
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> Numbers;
        vector<int> numbersPartOne;
        vector<int> numbersPartTwo;
        int n;
        cin >> n;
        for(int i = 0;i < n;++i){
            int input;
            cin >> input;
            Numbers.push_back(input);
        }
        sort(Numbers.begin(),Numbers.end());
        for(int i = 0;i < Numbers.size();i++){
            if(Numbers[i] ==  Numbers[i - 1]){
                numbersPartTwo.push_back(Numbers[i]);
            }
            else{
                numbersPartOne.push_back(Numbers[i]);
            }
        }
        for(auto x:numbersPartOne) cout << x << " ";
        for(auto x:numbersPartTwo) cout << x << " ";
        cout << endl;

    }

    return 0;
}