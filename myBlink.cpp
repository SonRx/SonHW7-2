#include "derek_LED.h"
using namespace std;

int main(int argc, char* argv[]){
   if(argc!=4){
        cout << "makLEDs <command>" << endl;
        cout << "pick led" << endl;
        cout << "choose number of blinks" << endl;
   }
   cout << "Starting the makeLEDs program" << endl;

    // choose option
    string cmd = (argv[1]); // choose blink

    // pick light path
    int usr = atoi(argv[2]); 
    if (usr > 3) {
        cout << "pick 0 1 2 or 3 for argv[2]" << endl;
        return -1;
    }
 
    LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
    LED path = leds[usr];

    // number of blinks
    int blinks = atoi(argv[3]);
  

      if(cmd=="on")
        path.turnOn();
      else if(cmd=="off")
        path.turnOff();
      else if(cmd=="flash")
        path.flash("100"); //default is "50"
      else if(cmd=="status")
        path.outputState();
// Homework implementation
      else if (cmd=="blink")
        path.blink(blinks);
      else 
        cout << "Invalid command!" << endl; 
   cout << "Finished the makeLEDs program" << endl;
    return 0; 
}
