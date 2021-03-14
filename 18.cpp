//https://codeforces.com/problemset/problem/1501/A
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>


using namespace std;

int main() {

    int t;
    cin >> t;
    int answer[t];
    for(int nouse = 1;nouse <= t;++nouse){
        int n;
        cin >> n;
        float a[n + 1] = {0};
        float b[n + 1];
        float tm[n + 1000];


        for(int i = 1;i <=n;++i)
            cin >> a[i] >> b[i];

        for(int i = 1;i <= n;++i)
            cin >> tm[i];

        b[0] = 0;
        a[0] = 0;
        int currentArrivalTime = 0;
        int lastDepartureTime = 0;
        for(int i = 1;i <= n;++i){
            currentArrivalTime =   (lastDepartureTime + (a[i] - b[i - 1])) + tm[i];
            float waitTime = ceil(abs((a[i] - b[i])/2));
            lastDepartureTime = max(b[i],currentArrivalTime + waitTime);


        }
        cout << currentArrivalTime << endl;




    }


    return 0;
}