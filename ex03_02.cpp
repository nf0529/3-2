#include <iostream>

using namespace std;

    void gugudan(int a){
        int b = 0;
        for(int i=1;i<10;i++){
            b = a * i;
            for(int j=0;j<b;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
int main(){
    int a = 0;
    
    while(a <= 0 || a > 9){
        cout << "enter a value" << endl;
        cin >> a;
        
    }
    gugudan(a);
    return 0;
}
