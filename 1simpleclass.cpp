#include <iostream>
#include <string>
using namespace std;


class User {
    string name;
    int age;
    public:
        User() : name("John Doe"), age(-1) {}
        User(string str, int y );
        void Display();
};

User::User(string str, int x) {
    name = str; age = x;
}

void User::Display() {
    cout << "name: " << name << " age: " << age << endl;
}

int main() {
    User u( "Smith", 15);
    u.Display();
    return 0;
}