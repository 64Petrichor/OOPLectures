#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    
    public:
        Distance() : feet(0), inches (0.0) {} //constructor

        Distance(int ft, float in) : feet(ft), inches (in) {} //paramaterized constructed
        
        void getdist() { //get length from user
        cout<<"Enter feet: ";
        cin >> feet;
        cout<<"Enter inches: ";
        cin >> inches;
        }

        void showdist() const  { //display distance
        cout << feet << "\'-" << inches << "\"";
        }

        Distance add_dist (const Distance) const; //add
};

/*a function that has const after its decleration promises not to edit any non-static variables. 
the only variables that can be changed are the varibles initialized inside it*/ 

Distance Distance::add_dist (const Distance d2) const {
    Distance temp;
    temp.inches = inches + d2.inches; 
    if (temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet++;
    }
    temp.feet += feet + d2. feet; //add the feet
    return temp;
}


int main()
{
    Distance dist1, dist3;
    Distance dist2 (11, 6.25); 
    dist1.getdist();
    dist3 = dist1.add_dist (dist2);
    cout<<endl<< "dist1 = "; dist1.showdist(); 
    cout<<endl<< "dist2 = "; dist2.showdist(); 
    cout<<endl<< "dist3 = "; dist3.showdist();
    return 0;
}