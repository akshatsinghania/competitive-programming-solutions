#include <iostream>
using namespace std;

int main() {
	int NumbersLength,sum=0;
    //Take input of NumbersLength
	cin>>NumbersLength;
    //Make a array of duplicate and the original numbers
	int Numbers[NumbersLength],NumbersDuplicate[NumbersLength];

	for(int i=0; i< NumbersLength; ++i){
        //Take input of the numbers according to the number length
	    cin>>Numbers[i];
        //Add them to the sum
	    sum+=Numbers[i];
	}
    //Make the first three items in NumbersDuplicate === Numbers
	NumbersDuplicate[0] = Numbers[0];
	NumbersDuplicate[1] = Numbers[1];
	NumbersDuplicate[2] = Numbers[2];
	for(int i=3; i < NumbersLength; ++i){
        //For example if numbers are : 3 2 3 2| 3 5 1 3
        //after the third item : 2 3 5 1 3
        //then minimum between
        //(2 + 3) and ((2 + 3) and (2 + 3))) = 5 is the value of index 3
        //(3 + 2) and ((3 + 3) and (3 + 2))) = 5 is the value of index 4
        //(3 + 2) and ((3 + 3) and (3 + 2))) = 5 is the value of index 5

	    NumbersDuplicate[i]= min(Numbers[i]+NumbersDuplicate[i-1] , min(Numbers[i]+NumbersDuplicate[i-2] , Numbers[i]+NumbersDuplicate[i-3]));
	}
	cout<<sum-min(NumbersDuplicate[NumbersLength-1],min(NumbersDuplicate[NumbersLength-2],NumbersDuplicate[NumbersLength-3]));
	return 0;
}
