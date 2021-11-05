#ifndef derek_LED_h
#define derek_LED_h

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unistd.h>
using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

class LED
{
private:
    string path;
    int number;
    virtual void writeLED(string filename, string value);
    virtual void removeTrigger();
public:
    // Constructor / Destructor
    LED(int number);
    virtual ~LED();
    // mutators
    virtual void turnOn();
    virtual void turnOff();
    virtual void flash(string delayms);
    virtual void outputState();

    // homework problem 2 implementation
    virtual void blink(int num);
};

#endif

