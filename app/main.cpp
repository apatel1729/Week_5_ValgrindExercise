#include <iostream>
#include <AnalogSensor.hpp>

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
  // Initialized the variable to resolve the error
  auto terminator{true};
  if (terminator) {
    std::cout << "DONE" << std::endl;
  }
  return 0;
}
