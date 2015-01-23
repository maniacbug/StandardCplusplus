#include "stringFunctions.h"

void split(vector<string>& dest, string& s, char delim)
{
	stringstream ss(s);
	string word;
	while(getline(ss,word,delim))
	{
		dest.push_back(word);
		if (word.empty()) 
			break;
	}
}


string getArg(string& commandLine,vector<string>& dummy)
{
	vector<string> args;
	split(args,commandLine,' ');
	return args[1];
}

bool startsWith(string& toCheck,string prefix,vector<string>& dummy)
{
	return mismatch(prefix.begin(),prefix.end(),toCheck.begin()).first == prefix.end();
}

