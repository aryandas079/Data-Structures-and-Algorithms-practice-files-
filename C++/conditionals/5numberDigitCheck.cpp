// this program checks any digit program 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() { 
    cout<<"digit number check"<<endl;
    int digit, number; 
    cout<<"enter digit: "; 
    cin>>digit; 
    // setting the range 
    cout<<"enter number: "; 
    cin>>number; 
    if (number > pow(10, digit - 1) && number < pow(10, digit) - 1) { 
        cout<<"yes it is a "<<digit<<" digit number"<<endl; 
    } else { 
        cout<<"not a "<<digit<<" digit number"<<endl;
    }
}