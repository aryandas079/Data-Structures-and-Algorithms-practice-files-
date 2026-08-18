// this is the code to check 
// whether the number is divisible by 5 or 3 but not 15 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"divisible by 5 or 3 not 15 check"<<endl; 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if((number % 5 == 0 || number % 3 == 0) && number % 15 != 0) { 
        cout<<"number is divisible by 5 or 3 not 15"<<endl; 
    } else { 
        cout<<"number does not satisfy the condition"<<endl; 
    }
}