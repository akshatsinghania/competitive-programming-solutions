//https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;

int n,solvableProblems;

int main(){
    cin >> n;
    int petyaIsSure;
    int vasyaIsSure;
    int tonyaIsSure;
    for(int i = 1 ; i <= n;++i){
        cin >> petyaIsSure >> vasyaIsSure >> tonyaIsSure;
        if(petyaIsSure & vasyaIsSure  | petyaIsSure  & tonyaIsSure | vasyaIsSure & tonyaIsSure){
        solvableProblems += 1;
        }
    }
    cout << solvableProblems;
    return 0;
}