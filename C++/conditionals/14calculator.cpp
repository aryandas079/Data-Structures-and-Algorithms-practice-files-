// this is a simple calculator made by using switch 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"arithmetic calculator"<<endl; 
    char op; 
    float number1, number2; 
    cout<<"enter number1: "; 
    cin>>number1; 
    cout<<"enter number2: "; 
    cin>>number2;
    cout<<"enter operator: "; 
    cin>>op; 
    switch (op) { 
        case '+': 
        cout<<"addition: "<<number1 + number2<<endl; 
        break;
        case '-': 
        cout<<"subtraction: "<<number1 - number2<<endl; 
        break;
        case '*': 
        cout<<"multiplication: "<<number1 * number2<<endl; 
        break;
        case '/': 
        cout<<"quotient: "<<number1 / number2<<endl; 
        break;
        default: 
        cout<<"enter arithmetic operator"<<endl; 
        break;
    }
}