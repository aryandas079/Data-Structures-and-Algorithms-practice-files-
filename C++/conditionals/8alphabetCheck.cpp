// this is the code to check whether the character is alphabet 
// or not 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"alphabet check"<<endl; 
    string alphabet;
    cout<<"enter your character: "; 
    cin>>alphabet; 
    if (alphabet.length() != 1) { 
        cout<<"enter a single character"<<endl; 
        return 0;
    } 
    if (alphabet[0] >= 'A' && alphabet[0] <= 'Z') { 
        cout<<"upper case alphabet"<<endl;
    } else if (alphabet[0] >= 'a' && alphabet[0] <= 'z') { 
        cout<<"lower case alphabet"<<endl; 
    } else cout<<"not an alphabet"<<endl;
}