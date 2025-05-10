#include <iostream>

using namespace std;

class logger {
    private:
        static logger* instancePtr;
        logger() {}; // private constructor
    public:
        logger (const logger&) = delete; // removes the use of malloc

        logger operator=(const logger&) = delete; // removes equal operator

        static logger *getInstance() {
            if (instancePtr == NULL) instancePtr = new logger();
            return instancePtr;
        }

        void logMessage(const string& msg) {
            cout << "log: " << msg << endl;
        }
};

logger* logger::instancePtr = nullptr;

int main() {
    logger* inst1 = logger::getInstance();
    inst1->logMessage("Start program");
    cout << "Adress of created object: " << inst1 << endl;

    logger* inst2 = logger::getInstance();
    inst1->logMessage("End program");
    cout << "Adress of created object: " << inst2 << endl;

    cout << "Are they the same?" << endl;

    return 0;
}