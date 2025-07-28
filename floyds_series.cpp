/*Prajwal
/24070123073
/A3 floyds series
1
23
456
78910*/
#include <iostream>
using namespace std;
int main() {
    int i,j;
    int n=1;
    int rows=4;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
    cout << n<<" ";
    n++;
        }
        cout<<endl;}
    return 0;

}