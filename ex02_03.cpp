#include <iostream>

using namespace std;

int main(){
    int a,num = 0;
    int i = 1;
    cout << "enter 1~10 integer" << endl;
    cin >> a;
    while(i<=a){
        num = i;
        if(num % 3 == 0){
            cout << "X" << endl;
        }else {
            cout << num << endl;
        }
        i++;
    }
return 0;
}
