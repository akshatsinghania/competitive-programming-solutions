//https://www.codechef.com/MARCH21C/problems/NOTIME
#include <iostream>
using namespace std;

int N,H,x;

int largest(int arr[], int n)
{
    int i;

    // Initialize maximum element
    int max = arr[0];

    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    cin >> N >> H >> x;
    int *timezones = new int [N - 1];
    for(int i = 1;i <= N;++i){
        cin >> timezones[i - 1];
    }
    if(x + largest(timezones,N - 1) >= H){
        cout << "Yes";
    }
    else{
        cout << "NO";
    }
    return 0;
}