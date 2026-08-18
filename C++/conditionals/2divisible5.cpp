// this is the code to check the divisibility by 5 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"divisible by 5 check"<<endl; 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if(number % 5 == 0) cout<<"divisible by 5"<<endl; 
    else cout<<"not divisible by 5"<<endl;
}