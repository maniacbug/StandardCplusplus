#include <StandardCplusplus.h>
#include <serstream>

using namespace std;

ohserialstream cout(Serial);

void setup(void)
{
  Serial.begin(57600);

  cout << "Hello, world." << endl;
}

void loop(void)
{
}

// vim:cin:ai:sts=2 sw=2 ft=cpp
