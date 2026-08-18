// this is the simple code to check whether a number 
// is even or odd 
#include<iostream> 
using namespace std;
int main() { 
    cout<<"even odd check"<<endl; 
    int number;
    cout<<"enter a number: "; 
    cin>>number; 
    if (number % 2 == 0) { 
        cout<<"number is even"<<endl; 
    } else { 
        cout<<"number is odd"<<endl;
    }
}