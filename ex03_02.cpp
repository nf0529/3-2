#include <iostream>

using namespace std;

void gugudan(int n){
    int i,j,num = 0;
    if(n>=1 && n<=9){
    for(i=1;i<=9;i++){
        num = n*i;
        for(j=0;j<num;j++){
            cout << "*";
        }cout << endl;
    }
  }else{
     cout << "error";
    }
}
int main(){
    int n = 0;
    cin >> n;
    gugudan(n);
        
    return 0;
} 
