// this is the simple program to calculate the grade of any input 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"grade calculator"<<endl;
    int marks; 
    cout<<"enter your marks: "; 
    cin>>marks; 
    if (!(marks <= 100 && marks >= 0)) { 
        cout<<"enter marks between 0 and 100"<<endl; 
        return 0;
    }
    if (marks <= 100 && marks >=80) cout<<"you got A"<<endl; 
    else if (marks < 80 && marks >=60) cout<<"you got B"<<endl;  
    else if (marks < 60 && marks >=50) cout<<"you got C"<<endl; 
    else if (marks < 50 && marks >= 30) cout<<"you got D"<<endl; 
    else cout<<"you got F"<<endl;
}