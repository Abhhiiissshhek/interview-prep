

// this programme gonna guess the no. you want to predict .. if the guess no. is in a range of  +10 or -10 of actual no.. then it gonna print hot else cold

#include <iostream>
using namespace std;
int main (){
    int ans;
        cout<<"Enter a num you wanna guess :";
        cin>>ans;
    while(true){
        cout<<"Enter a number between 1 and 100 :";
        int x;
        cin>>x;
        if (x==ans){
            cout<<"You guessed it !!";
            break;
        }
        else if (ans-10<x && x<ans+10){
            cout<<"Hot"<<endl;
        }
        else{
            cout<<"cold"<<endl;
            
        }
    }
    return 0;
}