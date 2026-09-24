// Sum of Digits
// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input Format
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

// Output Format
// For each test case, calculate the sum of digits of N, and display it in a new line.

// Constraints
// 1
// ≤
// T
// ≤
// 1000
// 1≤T≤1000
// 1
// ≤
// N
// ≤
// 1000000
// 1≤N≤1000000
// Sample 1:
// Input
// Output
// 3 
// 12345
// 31203
// 2123
// 15
// 9
// 8
// Did you like the problem statement?
// 638 users found this helpful
// More Info
// Time limit1 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes



#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
	while(x--){
	    int i,digit_sum;
	    digit_sum=0;
	    cin>>i;
	    while(i>0){
	        digit_sum=digit_sum+i%10;
	        i=i/10;
	    }
	    cout<<digit_sum<<endl;
	}
	return 0;

}



// in a single attempt.. cuz i sloved it this morning <)