// this is the code to check 
// whether the number is divisible by 5 and 3  
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"divisible by 5 and 3 check"<<endl; 
    int number; 
    cout<<"enter number: "; 
    cin>>number; 
    if(number % 3 == 0 && number % 5 == 0) { 
        cout<<"number is divisible by 5 and 3"<<endl;
    } else { 
        cout<<"number is not divisible by 5 and 3"<<endl;
    }
}