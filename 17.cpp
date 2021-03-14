//https://codeforces.com/problemset/problem/546/A
#include <iostream>


using namespace std;



int main() {
    int k,n,w;
    int amountNeeded = 0;
    cin >> k >> n >> w;
    for(int i = 1;i <= w;++i){
        amountNeeded += i * k;
    }
    if(n >= amountNeeded){
        cout << 0;
    }
    else{
        cout << amountNeeded - n;
    }

    return 0;
}