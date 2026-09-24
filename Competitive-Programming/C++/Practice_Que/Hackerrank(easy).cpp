// Write a short program that prints each number from 1 to 100 on a new line. 

// For each multiple of 3, print "Fizz" instead of the number. 

// For each multiple of 5, print "Buzz" instead of the number. 

// For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.


#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}


// Basic question 