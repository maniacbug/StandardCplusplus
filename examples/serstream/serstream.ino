#include <StandardCplusplus.h>
#include <serstream>
#include <avr/pgmspace.h>

using namespace std;

// <iostream> declares cout/cerr, but the application must define them
// because it's up to you what to do with them.
namespace std
{
  ohserialstream cout(Serial);
}

void setup(void)
{
  Serial.begin(57600);

  cout << "Hello, world." << endl;

  cout << F("I use up absolutely no RAM space whatsoever") << endl;
  cout << F("so you can use as many F() strings as you want!") << endl;

  float fmax = __FLT_MAX__, fmin = __FLT_MIN__;
  cout.precision(9);
  cout << "Float " << scientific << fmax << endl; 
  cout << "Float " << scientific << fmin << endl;

  cout << "+OK" << endl;
}

void loop(void)
{
}

// vim:cin:ai:sts=2 sw=2 ft=cpp
