# SentenceGenerator

## Introduction
Randomly generate a sentence based on a supplied grammar. The user can "talk" to the computer but it the sentence generated is not sensitive to this context.

## Usage
	make
	./chat

## Execution
The generator first asks for a grammar file from which it will generate sentences. It utilizes a context-free grammar, and the grammar.txt file provides an example. The format is as follows:

	NonTerminal Symbol0 Symbol1 ... SymbolN .

Note that each production rule must be ended with the '.' character.

## Output
The grammar function derive() returns a random sentence based on the initial symbols passed as the sole argument. This symbol must be a non-terminal in the grammar.
