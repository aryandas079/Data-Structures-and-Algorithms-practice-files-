// this is the code to check whether the number 
// is vowel or consonant 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"vowel consonant check"<<endl; 
    char character; 
    cout<<"enter character: "; 
    cin>>character; 
    if (!((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))) { 
        cout<<"enter a character alphabet"<<endl; 
        return 0;
    } 
    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || 
    character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') { 
        cout<<"the input character is a vowel"<<endl; 
    } else { 
        cout<<"input character is a consonant"<<endl;
    }
}