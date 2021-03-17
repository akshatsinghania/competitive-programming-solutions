//https://codeforces.com/contest/1491/problem/A
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

//Variables
const int maxSize = 1e6 + 5;
int numbersSize,querySize,numbers[maxSize],onesCount,queryType,queryParam;

int main() {
    cin >> numbersSize >> querySize;
    for(int i = 1; i <= numbersSize; ++i)
	{
        cin >> numbers[i];
        if(numbers[i])
            onesCount++;
    }
    while (querySize--)
    {
        cin >> queryType >> queryParam;
        if(queryType == 1){
            numbers[queryParam] = 1 - numbers[queryParam];
            if(numbers[queryParam]){
                onesCount++;
            }
            else{
                onesCount--;
            }
        }
        else{
            if(onesCount >= queryParam){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }

    return 0;
}