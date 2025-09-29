#include <iostream>
#include "matchit.h"
#include <unordered_map>
#include <string>
using namespace matchit;

//this section is for the lexer
/*int main(void){
 	return 2;i
 } 
 
 */
enum TokenType{
	identifier;
	Constant;
	int_keyword;
	void_keyword;
	return_keyword;
	Open_parenthesis; 
	Close_parenthesis; 
	Open_brace;
	Close_brace; 
	Semicolon;
}

struct Token{

	std::string value;
	TokenType type;
}

vector<Token> tokenize(string &sourcecode){
	vector<Token> tokens;
	//split strings -> use the fact that we dont need white spaces
	for(ch : sourcecode){
		if ch
	}
	//split tokens
	return tokens;
}
int main(){
	return 0;
}
