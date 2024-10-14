#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b = 0;
    while(1){
    cout << "input 2 vaule" << endl;
    cin >> a >> b;
    cout << gcd(a,b) << endl;


    if(a==0 && b==0){
        break;
        }
    }
    return 0;
}