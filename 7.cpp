//https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

int n,k,numberOfContestantsPassed;

int main() {
    cin >> n >> k;
    int *scores = new int[n];
    for(int i = 1 ; i <= n;++i){
        cin >> scores[i - 1];
    }
    for(int i = 1;i <= n;++i){
        if(scores[i - 1] >= scores[k - 1] & scores[i - 1] > 0){
            numberOfContestantsPassed += 1;

        }


    }
    cout << numberOfContestantsPassed;
    return 0;
}