#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    bool terminator{0};
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    terminator = 1;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
