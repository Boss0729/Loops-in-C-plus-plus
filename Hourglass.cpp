//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;
int main() {
    int i,j,k;
    int n=5;
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            cout<<" ";
        }
        for(j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(i=1;i<=n-1;i++){
        for(k=i;k<=n-1;k++){
            cout<<" ";
        }
        for(j=1;j<=i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}