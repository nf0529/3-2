#include <iostream>
#include <string>
using namespace std;

    class student{
        public:
        string name;
        string department;
        string id_num;
        string hobby;

        student(string n, string d, string id, string h) {
        name = n;
        department = d;
        id_num = id;
        hobby = h;
        }
        void print() {
            cout << "Name: "<< name << endl;
            cout << "Department: "<< department << endl;
            cout << "id: "<< id_num << endl;
            cout << "hobby: "<< hobby << endl;
        }
    };
int main(){
    student student("PJC","EE","20201071","Health");
    student.print();
}