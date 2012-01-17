#include <StandardCplusplus.h>
#include <serstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

// <iostream> declares cout/cerr, but the application must define them
// because it's up to you what to do with them.
namespace std
{
  ohserialstream cout(Serial);
}

vector<string> strings;

void setup(void)
{
  Serial.begin(57600);

  strings.push_back("Hello,");
  strings.push_back("world!");
  copy(strings.begin(),strings.end(),ostream_iterator<string>(cout," "));
  cout << endl;
}

void loop(void)
{
}

// vim:cin:ai:sts=2 sw=2 ft=cpp
