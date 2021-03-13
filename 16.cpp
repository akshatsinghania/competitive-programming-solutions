//https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
    string name;
    cin >> name;
    sort(name.begin(),name.end());
    int UsernameLength = name.length();
    for(int i = 0; i < name.length();++i){
        if(name[i] == name[i - 1]){

            UsernameLength--;
        }
    }

    if(UsernameLength%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}