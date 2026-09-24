// A. Integer Sequence Dividing
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an integer sequence 1,2,…,n
// . You have to divide it into two sets A
//  and B
//  in such a way that each element belongs to exactly one set and |sum(A)−sum(B)|
//  is minimum possible.

// The value |x|
//  is the absolute value of x
//  and sum(S)
//  is the sum of elements of the set S
// .

// Input
// The first line of the input contains one integer n
//  (1≤n≤2⋅109
// ).

// Output
// Print one integer — the minimum possible value of |sum(A)−sum(B)|
//  if you divide the initial sequence 1,2,…,n
//  into two sets A
//  and B
// .

// Examples
// InputCopy
// 3
// OutputCopy
// 0
// InputCopy
// 5
// OutputCopy
// 1
// InputCopy
// 6
// OutputCopy
// 1
// Note
// Some (not all) possible answers to examples:

// In the first example you can divide the initial sequence into sets A={1,2}
//  and B={3}
//  so the answer is 0
// .

// In the second example you can divide the initial sequence into sets A={1,3,4}
//  and B={2,5}
//  so the answer is 1
// .

// In the third example you can divide the initial sequence into sets A={1,4,5}
//  and B={2,3,6}
//  so the answer is 1
// .


#include <iostream>
using namespace std;
int main (){
    int x,sum;
    sum=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        sum=sum+i;
    }
    if (sum%2==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}


// Easy question .. we just have to catch the pattern 