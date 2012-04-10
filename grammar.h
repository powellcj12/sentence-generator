#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <time.h>

using namespace std;

class grammar
{
	struct production
	{
		string nonTerminal;
		vector< vector<string> > symbols;
	};

public:
	grammar();
	void create(string filename);
	string derive(string symbol);
private:
	vector<production> g;
	set<string> nonTerminals;
};