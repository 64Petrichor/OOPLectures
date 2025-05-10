#include <iostream>

using namespace std;

enum vehicleType { VT2wheels, VT3wheels, VT4wheels };

class vehicle {
    public:
        virtual void printVehicleInfo() = 0;
        virtual ~vehicle() {}
        static vehicle* build(vehicleType VType);
};

class twoWheeler : public vehicle {
    public:
        void printVehicleInfo () {
            cout << "I am a two wheeler" << endl;
        }
};

class threeWheeler : public vehicle {
    public:
        void printVehicleInfo () {
            cout << "I am a three wheeler" << endl;
        }
};

class fourWheeler : public vehicle {
    public:
        void printVehicleInfo () {
            cout << "I am a four wheeler" << endl;
        }
};

vehicle* vehicle::build(vehicleType VType) {
    switch (VType) {
        case (VT2wheels): {return new twoWheeler(); break;}
        case (VT3wheels): {return new threeWheeler(); break;}
        case (VT4wheels): {return new fourWheeler(); break;}
        default:          return nullptr;
    }
}


class client {
    private:
        vehicle* pvehicle;
    public:
        client() { pvehicle = nullptr; }
        
        void cleanpvehicle () {
            if (pvehicle) {
                delete pvehicle;
                pvehicle = NULL;
            }
        }

        void buildVehicle (vehicleType VType) {
            cleanpvehicle();
            pvehicle = vehicle::build(VType);
        }

        ~client() {
            cleanpvehicle();
        }

        vehicle* getVehicle() { return pvehicle; }
};

int main() {
    client* pclient = new client();
    
    pclient->buildVehicle(VT2wheels);
    pclient->getVehicle()->printVehicleInfo();

    pclient->buildVehicle(VT3wheels);
    pclient->getVehicle()->printVehicleInfo();

    pclient->buildVehicle(VT4wheels);
    pclient->getVehicle()->printVehicleInfo();

    delete pclient;
    return 0;
}