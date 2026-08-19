// this is the code to print from 
// 0 to 100 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"print till n"<<endl; 
    int n; 
    cout<<"enter n: "; 
    cin>>n; 
    for (int i = 0; i < n; i++) { 
        cout<<i+1<<" ";
    } 
    cout<<endl; 
}