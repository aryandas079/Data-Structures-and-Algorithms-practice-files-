// this is the program to print the geometric 
// progression of 2s powers 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() { 
    cout<<"gp of 2s powers"<<endl; 
    int terms; 
    cout<<"enter number of terms: "; 
    cin>>terms; 
    for (int i = 0; i < terms; i++) { 
        cout<<pow(2, i)<<" "; 
    } 
    cout<<endl; 
}