// this is the first program to repeat hello world 
// n number of times 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"loop maker"<<endl;
    int n; 
    cout<<"enter loop repeat times: "; 
    cin>>n; 
    for (int i = 0; i < n; i++) { 
        cout<<"hello world"<<endl; 
    }
}