    #include <iostream>     
    #include <cstdlib>
    #include <ctime>
    #define PI 3.14
    using namespace std;

    class Circle{
        int radius;
    public:
        int r;
        void setRadius(int r){
            radius = r;    
        }
        double getArea(){
            return PI*radius*radius;
        }    
    };


    int main(){
        srand(time(NULL));
        int n,i,r,num=0;
        cout << "number of circles" << endl;
        cin >> n;
        
        Circle* circles = new Circle[n];

        for(i=0;i<n;i++){
            cout << "radius of circle" << i << endl;
            r = rand() % 100 + 1;
            circles[i].setRadius(r);
        }
        for(i=0;i<n;i++){
            if(circles[i].getArea() > 5000){
                 num++;
                 cout << circles[i].getArea() << endl;
            }
        }
        cout << "num of circle area > 5000cm^2" << endl << num;
        delete[] circles;
        return 0;
    }