// this is the program to print the absolute 
// value of a number 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"absolute value output"<<endl;
    int number;
    cout<<"enter a number: "; 
    cin>>number; 
    if(number > 0 || number == 0) cout<<"absolute_value: "<<number<<endl; 
    else cout<<"absolute_value: "<<(-number)<<endl;
}