#include <iostream>
using namespace std;

class myInt {
    private:
        int num;

    public:
        myInt() : num(0) {}
        myInt(int n) : num(n) {}
        int getNum() {return num;}

        myInt operator = (myInt n) {
            cout << "Object with address = " << this << " called the assignment operator," << endl;
            num = n.num;
            return *this; //returns a object that is temporary, whic is used when chaining assignments
        }
};


int main() {
    myInt obj1(5); 
    myInt obj2;
    myInt obj3;

    cout << "====== Before assignment =======" << endl;
    cout << "obj1 value = " << obj1.getNum() <<" /address = " << &obj1 << endl; 
    cout << "obj2 value = " << obj2.getNum() <<" /address = " << &obj2 << endl; 
    cout << "obj3 value = " << obj3.getNum() <<" /address = " << &obj3 << endl;
    cout << endl;

    cout<<"====== During assignment =======" << endl;
    obj3 = obj2 = obj1;
    cout << endl;

    cout << "======= After assignment =======" << endl; 
    cout << "obj1 value = " << obj1.getNum() << endl;
    cout << "obj2 value = " << obj2.getNum() << endl; 
    cout << "obj3 value = " << obj3.getNum() << endl;

    return 0;
}