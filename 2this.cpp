#include <iostream>
using namespace std;

/*The member functions of every object have access to a pointer named this pointer.
This mean that any member function can find out the address of the object of which it is a member. */

class User {
    public:
        void show_address() {
            cout << "The object's address: " << this << endl;
        }
};

int main() {
    User U1, U2;

    cout << "Show addresses using this pointer" << endl;
    U1.show_address();
    U2.show_address();
    cout << endl;

    cout << "Show addresses directly from main()" << endl;
    cout << "The object's address: " << &U1 << endl; 
    cout << "The object's address: " << &U2 << endl; 

    return 0;
}