#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include <StandardCplusplus.h>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
using namespace std;

// trim from start
static inline string &ltrim(string &s) {
        s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
        return s;
}

// trim from end
static inline string &rtrim(string &s) {
        s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
        return s;
}

// trim from both ends
static inline string &trim(string &s) {
        return ltrim(rtrim(s));
}

static inline void padTo(string &str, const size_t num, const char paddingChar = ' ')
{
    if(num > str.size())
    	str.insert(str.begin(), num - str.size(), paddingChar);
}

void split(vector<string>& dest, string& s, char delim);
string getArg(string& commandLine,vector<string>& dummy);
bool startsWith(string& toCheck,string prefix,vector<string>& dummy);

#endif
