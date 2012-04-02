#include <fstream>
#include "grammar.h"

using namespace std;

grammar::grammar()
{

}

grammar::~grammar()
{

}

void grammar::create(string filename)
{
	ifstream inFile;
	inFile.open(filename.c_str(), ifstream::in);

	production temp;
	string input;

	while(inFile.good())
	{
		cin >> temp.nonTerminal >> input;
		
		while(input != ".")
		{
			temp.symbols.push_back(input);
			cin >> input;
		}

		g.push_back(temp);
	}
}

string grammar::derive(string symbol)
{
	return "";
}