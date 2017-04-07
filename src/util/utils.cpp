#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
 
#define PATH_ADC "/sys/bus/iio/devices/iio:device0/in_voltage"
 
int readAnalog(int number){
   stringstream ss;
   ss << PATH_ADC << number << "_raw";
   fstream fs;
   fs.open(ss.str().c_str(), fstream::in);
   fs >> number;
   fs.close();
   return number;
}