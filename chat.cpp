#include <iostream>
#include "grammar.h"

using namespace std;

int main()
{
	string input;
	grammar myGrammar;

	cout << "Please type the name of the grammar file: ";
	cin >> input;

	myGrammar.create(file);

	cout << "You may now start conversing with the computer!";
	cin >> input;

	while(input != "quit")
	{
		myGrammar.derive(input);
		cin >> input;
	}

	return 0;
}
