// Problem
// You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

// Input Format
// The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

// Output Format
// Print the required answer on a single line.

// Constraints 

// Note
// String S consists of lowercase English Alphabets only.

// Sample Input
// aba
// Sample Output
// YES
// Time Limit: 1
// Memory Limit: 256
// Source Limit:

#include <iostream>
using namespace std;
int main() {
	string s;
	bool is_pal=true;
	cin>>s;
	for(int i=0;i<(s.size()/2);i++){
		if(s[i]!=s[s.size()-i-1]){
			is_pal=false;
			break;
		}
	}
	if (is_pal)
	    cout<<"YES";
	else
	    cout<<"NO";
	
	
	return 0;
}


// this one is pretty easy 