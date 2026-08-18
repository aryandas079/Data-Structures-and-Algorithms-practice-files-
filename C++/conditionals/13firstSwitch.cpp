// print the seven days of the week using 
// number input 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"prints weekday"<<endl; 
    int number;
    cout<<"enter number: "; 
    cin>>number; 
    switch (number) {
    case 1: 
        cout<<"today is monday"<<endl; 
        break;
    case 2: 
        cout<<"today is tuesday"<<endl; 
        break;
    case 3: 
        cout<<"today is wednesday"<<endl; 
        break;
    case 4: 
        cout<<"today is thursday"<<endl; 
        break;
    case 5: 
        cout<<"today is friday"<<endl; 
        break;
    case 6: 
        cout<<"today is saturday"<<endl; 
        break;
    case 7: 
        cout<<"today is sunday"<<endl; 
        break;
    default: 
        cout<<"enter a weekday number"<<endl; 
        break;
    }
}