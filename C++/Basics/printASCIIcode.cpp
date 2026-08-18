// this is the program used to print the 
// ASCII code for different characters 
#include<iostream> 
using namespace std; 
int main() { 
    string character; 
    cout<<"enter your character: "; 
    cin>>character;
    if (character.length() != 1) {
        cout << "Not a single character" << endl;
    }else {
        cout << "ASCII code: " << (int)character[0] << endl;
    }
}