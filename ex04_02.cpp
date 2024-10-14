#include <iostream>

using namespace std;

class Money{
public:
        int input;
        double output;
        int n;
        
       
        void calcMoney(){
            output = input;
            for(int i=0;i<n;i++){
                output += output * 0.13;
            }
        }
        double getOutput(){
            return output;
        }
};

int main(){
    Money m;
    cout << "enter n year, input money" << endl;
    cin >> m.n >> m.input;
    m.calcMoney();
    cout << "output is : " << m.getOutput() << endl;
    
    return 0;
}