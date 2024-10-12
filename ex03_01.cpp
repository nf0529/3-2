#include <iostream>

using namespace std;

int main(){
    int i,j,k = 0;
    for(i=0;i<5;i++){
        for(k=0;k<i;k++){
            cout << " ";
        }
        for(j=5-i;j>0;j--){
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}