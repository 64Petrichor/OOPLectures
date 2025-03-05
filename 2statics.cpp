#include <iostream>
using namespace std;

class foo {
    private:
        static int count;
        int num;

    public:
        foo() {
            count++;
            num = count; 
        }

        ~foo() {
            count--;
            cout<<"Destroying object number " << num << endl;
        }

        static void showcount() {
            cout<<"Count is " << count << endl;
        }

        void shownum() {
            cout<<"Object number is " << num << endl;
        }
};
    
int foo::count = 0; 

    
int main() {
    foo fl;
    foo::showcount(); // you don;t have to specify which object, since they all share the same count
    foo f2, f3;
    foo::showcount();
    cout << endl;

    fl. shownum(); 
    f2. shownum();
    f3. shownum();
    cout << endl;
    
    return 0; // it destructs in the opposite order it was created
}