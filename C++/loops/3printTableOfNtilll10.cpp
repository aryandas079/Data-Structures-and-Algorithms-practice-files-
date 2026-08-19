// this is the program to print the table of N 
// till N*10 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"print the table of n"<<endl; 
    int n; 
    cout<<"enter n: "; 
    cin>>n; 
    for (int i = 0; i < 10; i++) { 
        cout<<n<<" * "<<i + 1<<" = "<<n*(i+1)<<endl; 
    }
}