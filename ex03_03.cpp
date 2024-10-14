#include <iostream>

using namespace std;

int myabs(int a){
    if(a>0){
        return a;
    }else if(a<0){
        return -a;
    }else{
        return 0;
    }
}
int main(){
    int a = 0;
    cout << "enter a vaule" << endl;
    cin >> a;
    cout << myabs(a);
    return 0;

}