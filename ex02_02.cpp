#include <iostream>

using namespace std;

int main(){
    int a,b,c = 0;
    int i,num = 0;
    cout << "enter three integers" << endl;
    cin >> a >> b >> c;
    while(i<3){
        if(i == 0){
            num = a;
        }else if(i == 1){
            num = b;
        }else num = c;
        
        if(num % 2 == 0){
        cout << num << endl;
     }

        i++;
    }   
    return 0;
}