#include <iostream>
#include <string>
#include <vector>

using namespace std;

class grammar
{
	struct production
	{
		string nonTerminal;
		vector<string> symbols;
	};

public:
	grammar();
	~grammar();
	void create(string filename);
	string derive(string symbol);
private:
	vector<production> g;
};