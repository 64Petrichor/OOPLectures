#include <iostream>
using namespace std;

class myInt
    private:
    int num;
    public:
    myInt() num (0) {}
    myInt (int n) num (n) {}
    int getNum() { return this->num; }
    myInt operator= (myInt n)
    {
    num n.num;
    }
    return *this;
    //prefix increment
    myInt operator ++()
    {
    }
    ++ num;
    return *this;
    //postfix increment (return a copy of the original value) myInt operator ++ (int)
    (
    myInt temp (*this); // create a copy
    (num) ++;
    return temp;
    // increment the current object // return the copy