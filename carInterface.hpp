#ifndef __CARINTERFACE__
#define __CARINTERFACE__

#include <string>

class CarInterface {
    public:
    virtual void gasPedal(const int& impactStrength) = 0;
    virtual void airCondition(bool onOrOff) = 0;
    virtual void soundSystem(const int& volume) = 0;
    virtual void carBlinker(const std::string& direction) = 0;
    virtual void horn(bool carHorn) = 0;
};

#endif // __CARINTERFACE__