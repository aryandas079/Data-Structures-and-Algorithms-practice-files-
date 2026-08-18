// this is the code to print the 
// even and odd using ternary 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"even odd check with ternary"<<endl; 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    (number % 2 == 0) ? cout<<"number is even"<<endl : cout<<"number is odd"<<endl;
}