// this is the code to print the 
// ascii loop of uppercase alphabets and lowercase alphabets using loops 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"ascii alphabets using loops"<<endl; 
    cout<<"uppercase ascii alphabets"<<endl; 
    for (int i = 65; i < 91; i++) { 
        cout<< (char) i <<" "; 
    } 
    cout<<endl;
    cout<<"lowercase ascii alphabets"<<endl; 
    for (int i = 97; i < 123; i++) { 
        cout<< (char) i <<" "; 
    } 
    cout<<endl;
}