// this is the code to calculate the simple interest for 
// given inputs 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"simple interest calculator"<<endl;
    float principle, rate, time; 
    cout<<"enter principle: "; 
    cin>>principle; 
    cout<<"enter rate: "; 
    cin>>rate; 
    cout<<"enter time: "; 
    cin>>time; 
    // now calculating the simple interest 
    float simpleInterest = (principle * rate * time)/ 100; 
    // printing the result 
    cout<<"simple interest: "<<simpleInterest<<endl;
}