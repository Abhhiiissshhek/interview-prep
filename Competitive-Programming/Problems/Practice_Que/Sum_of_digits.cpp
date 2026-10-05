

// This programme going to find the sum of digits of given no.

#include <iostream>
using namespace std;
int main(){
    int x,digit_sum,last_digit;
    digit_sum=0;
    cout<<"Enter a number :";
    cin>>x;
    while(x>0){
        last_digit=x%10;
        digit_sum=digit_sum+last_digit;
        x=x/10;
    }
    cout<<digit_sum;
    return 0;
}