//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    long int prn;
    cout<<"Enter your prn: ";
    cin>>prn;
    while(prn!=0){
        cout<<prn%10<<" ";
        prn=prn/10;
        
    }
    
    return 0;
}