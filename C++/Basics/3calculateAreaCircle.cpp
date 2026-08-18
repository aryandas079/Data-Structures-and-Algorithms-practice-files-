// this is the simple code to calculate the 
// area of a circle 
#include<iostream> 
using namespace std; 
int main() { 
    const float pi = 3.14159;
    cout<<"calculate area of circle"<<endl; 
    float radius; 
    cout<<"enter radius: "; 
    cin>>radius; 
    // to calculate area of circle 
    float Area = pi * radius * radius; 
    cout<<"area of circle: "<<Area<<" sq. units"<<endl;
}