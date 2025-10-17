#include <iostream>
#include "matchit.h"
using namespace std;


//recognizing the word int 
/*
bool bounds(char &ch){
	if 
	
}
*/
bool rec_int (std::string &word){
	
//checking wether how it compares to int
	string compared = "int";
	for(int i = 0; i < compared.length();i++){

		if (word[i] != compared[i]){

			return false;
		} 
	}
	return true;
//checking how it compares to the bound
/*
	char* bounds = word.[i+1];
	if (check_bounds(bounds)){ return true;} else{return false;}		
*/
}	



//doing this for return
bool rec_return (std::string &word){
	
//checking wether how it compares to int
	string compared = "return";
	for(int i = 0; i < compared.length();i++){

		if (word[i] != compared[i]){

			return false;
		} 
	}
	
	return true;
}	

//void keyword recognzer
bool rec_void (std::string &word){
	
//checking wether how it compares to int
	string compared = "void";
	for(int i = 0; i < compared.length();i++){

		if (word[i] != compared[i]){

			return false;
		} 
	}

	return true;
}
/*
enum tokens {
	Identifier,
	Constant,
	Int_keyword, 
	Void_keyword,
	Return_key,
	Lparen,
	Rparen,
	Lbrace,
	Rbrace,
	semicolon,
}


vector<tokens> Tokenizer(string &sourcecode){


} 

*/
int main() {
	std::string x = "ind";
	if (rec_int(x)) {cout << "it work";} else {cout << "no  it does not"; }		
	return 0;
	
}

