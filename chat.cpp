#include <iostream>	
#include "grammar.h"

using namespace std;

int main()
{
	string input;
	grammar myGrammar;

	cout << "Please type the name of the grammar file: ";
	cin >> input;

	myGrammar.create(input);

	cout << "You may now start conversing with the computer!\n";
	cin >> input;

	while(input != "quit")
	{
		cout << myGrammar.derive("Sentence") << endl;
		cin >> input;
	}

	return 0;
}
