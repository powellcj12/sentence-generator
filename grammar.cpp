#include <fstream>
#include "grammar.h"

using namespace std;

grammar::grammar()
{
	srand(time(NULL));
}

void grammar::create(string filename)
{
	ifstream inFile;
	inFile.open(filename.c_str(), ifstream::in);

	string input;

	while(inFile.good())
	{
		production temp;
		inFile >> input;

		if(nonTerminals.count(input) > 0) // non-terminal already in grammar
		{
			// find where in the list it is
			vector<production>::iterator it = g.begin();
			while((*it).nonTerminal != input)
				it++;

			vector<string> temp2;

			inFile >> input;

			// add symbols to it
			while(input != ".")
			{
				temp2.push_back(input);
				inFile >> input;
			}

			(*it).symbols.push_back(temp2);
		}
		else // non-terminal does not exist
		{
			temp.nonTerminal = input;
			nonTerminals.insert(input);
			vector<string> temp2;

			inFile >> input;

			while(input != ".")
			{
				temp2.push_back(input);
				inFile >> input;
			}

			temp.symbols.push_back(temp2);
			g.push_back(temp);
		}
	}
}

string grammar::derive(string symbol)
{
	string ans = "";
	vector<production>::iterator it = g.begin();

	while((*it).nonTerminal != symbol)
		it++;

	int index = rand() % (*it).symbols.size();
	vector<string> prod = (*it).symbols[index]; //if size is 1, result is always 0

	if(nonTerminals.count(prod[0]) > 0) // non-terminal
	{
		for(unsigned int i = 0; i < prod.size(); i++)
			ans += derive(prod[i]);
	}
	else
		ans = prod[0] + " ";

	return ans;
}