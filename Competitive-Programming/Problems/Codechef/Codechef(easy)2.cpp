// Reverse The Number
// Given an Integer N, write a program to reverse it.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// For each test case, display the reverse of the given number N, in a new line.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 1000000
// Sample 1:
// Input
// Output
// 4
// 12345
// 31203
// 2123
// 2300
// 54321
// 30213
// 3212
// 32
// accepted
// Accepted
// 2319
// total-Submissions
// Submissions
// 92532
// accuracy
// Accuracy
// 3.11
// Did you like the problem statement?
// 582 users found this helpful
// More Info
// Time limit1 secs
// Memory limit1.5 GB
// Source Limit50000 Bytes



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int x,rev_no;
        rev_no=0;
        cin>>x;
        while(x>0){
            rev_no=((rev_no)*10)+(x%10);
            x=x/10;
        }
        cout<<rev_no<<endl;
    }
	return 0;

}
 

//solved this quesiton in first time and got accepted >)