// this is the program to print the greatest of 
// three inputs 
#include<iostream> 
using namespace std; 
int main() { 
    int number1, number2, number3; 
    cout<<"enter first number: "; cin>>number1; 
    cout<<"enter second number: "; cin>>number2;  
    cout<<"enter third number: "; cin>>number3; 
    if (number1 > number2){ 
        if(number1 > number3) cout<<"greatest of three is first number"<<endl; 
        else cout<<"greatest of three is third number"<<endl;
    } else if (number2 > number1) { 
        if (number2 > number3) cout<<"greatest of three number is second number"<<endl; 
        else cout<<"greatest of three number is third number"<<endl;
    }
}