// this is the program to calculate whether the 
// seller has made a profit or a loss 
#include<iostream> 
using namespace std; 
int main() { 
    cout<<"profit loss calculator"<<endl; 
    float costPrice, sellPrice; 
    cout<<"enter cost price: "; 
    cin>>costPrice; 
    cout<<"enter sell price: "; 
    cin>>sellPrice; 
    if (costPrice > sellPrice) { 
        cout<<"loss_made"<<endl; 
        cout<<"percentage loss: "<<((costPrice - sellPrice) / costPrice) * 100<<"%"<<endl;     
    }
    else if (costPrice < sellPrice) { 
        cout<<"profit_made"<<endl; 
        cout<<"percentage profit: "<<((sellPrice - costPrice) / sellPrice) * 100<<"%"<<endl; 
    } 
    else cout<<"no loss and profit made"<<endl;     
}