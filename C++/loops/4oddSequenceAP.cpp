// this is the program to print the odd 
// sequence AP 2*n - 1 from n = 1 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"odd sequence ap"<<endl; 
    int terms; 
    cout<<"enter number of terms: "; 
    cin>>terms; 
    for (int i = 0; i < terms; i++) { 
        cout<<2 * (i + 1) - 1<<" ";
    } 
    cout<<endl;
}