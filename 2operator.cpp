#include <iostream>
#include <cstring>
using namespace std;

class catstring {
private:
    char str[100];

public:
    catstring() {
        str[0] = '\0';
    }

    catstring(const char* s) {
        strcpy(str, s);
    }

    catstring operator+(const catstring& obj) {
        catstring temp;
        strcpy(temp.str, str);
        strcat(temp.str, obj.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    catstring s1("Hello, ");
    catstring s2("World!");
    catstring s3;

    s3 = s1 + s2;

    cout << "Concatenated String: ";
    s3.display();
    
    return 0;
}
