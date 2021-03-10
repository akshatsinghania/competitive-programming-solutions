// https://www.codechef.com/MARCH21C/problems/NOTIME
//WRONG

#include <iostream>
using namespace std;

int N,H,x;

int main() {
    cin >> N >> H >> x;
    int *T = new int[N];
    for(int i=0;i< 2;i++)
    {
        cin >> T[i];

    }
    if(x + T[N - 1] >= H){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}