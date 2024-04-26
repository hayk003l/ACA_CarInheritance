#include <iostream>
#include <string>


class Car {
    public:
    Car(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType) : _engineType(engineType), _countryOfManifacture(countryOfManifacture), _bodyType(bodyType) {}
    Car() {}
    ~Car() {}

    public:
    void printData() {
        std::cout << "Engine type - " << _engineType << std::endl;
        std::cout << "Country of manifacture - " << _countryOfManifacture << std::endl;
        std::cout << "Body Type - " << _bodyType << std::endl;
    }

    private:

    std::string _engineType;
    std::string _countryOfManifacture;
    std::string _bodyType;
};

class MercedesBenz : public Car {
    public:
    MercedesBenz(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& steeringWheel, const std::string& transmission, const std::string& driveType) : Car(engineType, countryOfManifacture, bodyType), _steeringWheel(steeringWheel), _transmission(transmission), _driveType(driveType) {}
    MercedesBenz() {}
    ~MercedesBenz() {}


    public:
    void printMercedesData() {
        printData();
        std::cout << "Steering Wheel - " << _steeringWheel << std::endl;
        std::cout << "Transmission - " << _transmission << std::endl;
        std::cout << "Drive type - " << _driveType << std::endl;
    }

    private:

    std::string _steeringWheel;
    std::string _transmission;
    std::string _driveType;
};

class BMW : public Car {
    public:
    BMW(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& transmission, const std::string& driveType) : Car(engineType, countryOfManifacture, bodyType),  _transmission(transmission), _driveType(driveType) {}
    BMW() {}
    ~BMW() {}

    public:
    void printBmwData() {
        printData();
        std::cout << "Transmission - " << _transmission << std::endl;
        std::cout << "Drive type - " << _driveType << std::endl;
    }

    private:
    std::string _transmission;
    std::string _driveType;
};


class Lexus : public Car {
    public:
    Lexus(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& transmission, const std::string& driveType) : Car(engineType, countryOfManifacture, bodyType),  _transmission(transmission), _driveType(driveType) {}
    Lexus() {}
    ~Lexus() {}

    public:
    void printLexusData() {
        printData();
        std::cout << "Transmission - " << _transmission << std::endl;
        std::cout << "Drive type - " << _driveType << std::endl;
    }

    private:
    std::string _transmission;
    std::string _driveType;
};


class CLS_class : public MercedesBenz {
    public:
    CLS_class(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& steeringWheel, const std::string& transmission, const std::string& driveType, const double& engineSize, const bool& isAmg, const int& year) : MercedesBenz(engineType, countryOfManifacture, bodyType, steeringWheel, transmission, driveType), _engineSize(engineSize), _isAmg(isAmg), _year(year) {}
    CLS_class() {}
    ~CLS_class() {}

    public:
    void printClsData() {
        printMercedesData();
        std::cout << "Engine Size - " << _engineSize << std::endl;
        std::cout << "Year - " << _year << std::endl;
        if(_isAmg) {
            std::cout << "AMG Package." << std::endl;
        }
    }

    private:

    double _engineSize = 0;
    bool _isAmg = false;
    int _year = 0;
};


class FiveSeries : public BMW {
    public:
    FiveSeries(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& transmission, const std::string& driveType, const double& engineSize, bool isMPackage, const int& year) : BMW(engineType, countryOfManifacture, bodyType, transmission, driveType), _engineSize(engineSize), _isMPackage(isMPackage), _year(year) {}
    FiveSeries() {}
    ~FiveSeries() {}

    public:
    void printFiveSeriesData() {
        printBmwData();
        std::cout << "Engine Size - " << _engineSize << std::endl;
        std::cout << "Year - " << _year << std::endl; 
        if(_isMPackage) {
            std::cout << "M Package." << std::endl;
        }
    }

    private:
    double _engineSize = 0;
    bool _isMPackage = false;
    int _year = 0;
};

class LFA : public Lexus {
    public:
    LFA(const std::string& engineType, const std::string& countryOfManifacture, const std::string& bodyType, const std::string& transmission, const std::string& driveType, const double& engineSize, const std::string& color, const int& year) : Lexus(engineType, countryOfManifacture, bodyType, transmission, driveType), _engineSize(engineSize), _color(color),  _year(year) {}
    LFA() {}
    ~LFA() {}

    public:
    void printLFAData() {
        printLexusData();
        std::cout << "Engine Size - " << _engineSize << std::endl;
        std::cout << "Color - " << _color << std::endl;
        std::cout << "Year - " << _year << std::endl;
    }

    private:
    double _engineSize = 0;
    std::string _color;
    int _year = 0;
};


void havayi(std::string ape) {}

int main() {
    CLS_class firstCar("Gasoline", "Germany", "Sedan", "Left", "Automatic", "Rear Wheel Drive", 6.3, true, 2014);
    std::cout << "Mercedes-Benz CLS class data" << std::endl;
    std::cout << std::endl;
    firstCar.printClsData();

    std::cout << std::endl;


    FiveSeries secondCar("Gasoline", "Germany", "Sedan","Automatic", "Rear Wheel Drive", 4.4, true, 2023);
    std::cout << "BMW 5-Series data" <<std::endl;
    std::cout << std::endl;    
    secondCar.printFiveSeriesData();

    std::cout << std::endl;

    LFA thirdCar("Gasoline", "Japan", "Sedan","Automatic", "Rear Wheel Drive", 4.8, "White", 2012);    
    std::cout << "Lexus LFA data" << std::endl;
    std::cout << std::endl;
    thirdCar.printLFAData();

    return 0;




}