#include <iostream>
#include <iomanip>
using namespace std;

/*Namespaces are basically folders for your functions. 
This allows you to give functions the same name, but place them in different namespaces*/
namespace folder1 {
    int function1 (int a, int b) {
        return a+b;
    }
}
namespace folder2 {
    int function1 (int a, int b) {
        return a-b;
    }
}

//structs have the same syntax as c


int main() {
    //namespaces
    cout << "Folder1's function1 gives you: " << folder1::function1(5,3) << endl;
    cout << "Folder2's function1 gives you: " << folder2::function1(5,3) << endl << endl;





    /*an enumeration is a set of numbered and named values. The numbers can only be integers, and increment by one for each element, starting form zero.
    if you allocate a number that does not follow the incremented pattern, it will continue incrememnting from the allocarted number. 
    This means that the numbers in this enumerationa are: 2,3,4,7,8,9,10
    if you allocate a float to an element, it will not produce an error, but it will only see the integer part of it. */
    enum days_of_week {Sun = 2, Mon, Tue, Wed = 7, Thu, Fri, Sat};

    days_of_week day1, day2;
    day1 = Mon;
    day2 = Thu;
    int diff = day2 - day1;
    cout << "Number of dayl is " << day1 << " and number of day2 is " << day2 << endl;

    if (day1 < day2) cout<<"day1 comes before day2, diff cannot be calculated" << endl;
    else cout << "Days between = " << diff << endl << endl;





    //typecasting
    int x=3, y= 5;
    cout << x/y << endl;
    cout << static_cast<float>( x ) / y << endl;
    cout << x / static_cast<float>( y ) << endl;
    cout << static_cast<float>(x / y) << endl;





    //unformatted i/o
    /*its basiclly anything that uses a buffer to store any unformatted input. 
    Because its using a buffer, you have to clear it whenever you want to bring in new input, otherwise you'll have reminants of the od input with it*/
    char ch1;
    cout<<"Enter a character: ";
    ch1 = cin.get();
    fflush (stdin);
    cout << "You entered: ";
    cout.put(ch1); 
    cout << endl << endl;

    string name;
    cout<<"Enter your full name: "; 
    getline(cin, name);
    cout << "Hello," << name << "!" << endl;





    //formatted i/o
    /*functions called manipulators in the <iomanip> lib that allow you to edit certain paramaters of the output text*/
    int num = 100;
    //shows the positive sign if the numebr is positive
    cout << "The positive number = " << showpos << num << endl;

    // hexadecimal base
    cout<<"Hex Value =" << " " << hex << num << endl;

    // octal base
    cout<<"Octal Value=" << " " << oct << num << endl;

    // hexadecimal base
    cout<<"Setbase 16 Value=" << " " << setbase (16) << num << endl;

    // octal base
    cout<<"Setbase 8 Value=" << " " << setbase (8) << num << endl;

    //sets the field width & the charater you want to fill the empty space with
    cout<<"width (6) and fill('*'): "; 
    cout.width (6); 
    cout.fill('*'); 
    cout << num << endl;

    // sets how many decimal points you want
    cout<<"precision (8) ---> "; 
    cout.precision (8); 
    cout << 1234.123456 << endl;

    // allows you to essentially tollge the functionality of a manipulator for all couts
    cout<<"setf(showpos): ";
    cout.setf (ios::showpos); cout<<num << endl;
    cout<<"unsetf(showpos): ";
    cout.unsetf (ios::showpos); cout<<num << endl;

    return 0;
}