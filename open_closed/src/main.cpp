#include <iostream>
using namespace std;

class SimplePowerManager {
    public:
        virtual void predictLifetime(){
            cout << "traditional power prediction processing" << endl;
        }
};

class AdvancedPowerManager : public SimplePowerManager {
    public:
        void predictLifetime(){
            cout << "advanced power prediction processing" << endl;
        }
};

int main(){
    SimplePowerManager powerManager;
    AdvancedPowerManager newPowerManager;
    powerManager.predictLifetime();
    newPowerManager.predictLifetime();
    return 0;
}
