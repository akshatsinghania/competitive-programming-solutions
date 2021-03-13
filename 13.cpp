//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main() {
    string input;
    cin >> input;
    vector<int>  numbers;
    if(input.length() == 1){
        cout <<  input;
    }
    else{

        for(int i = 0;i < input.length();++i){
            if(input.at(i) != '+'){
                numbers.push_back(input.at(i) - '0');
            }
        }
    }
    sort(numbers.begin(),numbers.end());
    for(int i = 0;i < numbers.size();++i){
        cout << numbers.at(i);
        if(i != numbers.size() - 1){
            cout <<  "+";
        }

    }

    return 0;
}