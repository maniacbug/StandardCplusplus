#include <StandardCplusplus.h>
#include <serstream>
#include <avr/pgmspace.h>

using namespace std;

ohserialstream cout(Serial);

void setup(void)
{
  Serial.begin(57600);

  cout << "Hello, world." << endl;

  cout << PSTR("I use up absolutely no RAM space whatsoever") << endl;
  cout << PSTR("so you can use as many PSTR strings as you want!") << endl;
}

void loop(void)
{
}

// vim:cin:ai:sts=2 sw=2 ft=cpp
