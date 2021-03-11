//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);

    return s;
}


int n;



int main(){
    //input
    cin >> n;
    string *words = new string[n];
    for(int i = 1 ; i <= n;++i){
        string word;
        //old
        cin >> word;
        string output;
        if(word.length() > 10){
            output = getString(word.at(0)) + to_string(word.length() - 2)+ word[word.length() - 1];
        }
        else{
            output = word;
        }
        words[i - 1] = output;
    }

    for(int i = 1;i <= n;++i){
        cout << words[i - 1] << endl;
    }


    return 0;
}