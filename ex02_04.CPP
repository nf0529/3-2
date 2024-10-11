#include <iostream>
using namespace std;
int main(){
    int n,i,j,k = 0;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout << " ";
            
        }
        for(k=n-i;k>0;k--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}