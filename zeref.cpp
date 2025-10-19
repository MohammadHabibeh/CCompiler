#include <iostream>
#include "matchit.h"
using namespace std;


//recognizing the word int 

bool check_bounds_keywords(char ch){
	return (ch == ';' || ch == ' ');
}

bool rec_int (std::string &word){
	
//checking wether how it compares to int
	string compared = "int";
	int length = compared.length();
	
	for(int i = 0; i < length;i++){

		if (word[i] != compared[i]){

			return false;
		}
		if (i == (length - 1)){
			if(i + 1 <= word.length()){	
			char bounds = word[i+1];
			return (check_bounds_keywords(bounds));		
		
			}
			else{
				return false;
			}
		}
	
	}
	return false;
}	

//return
bool rec_return (std::string &word){
	
	string compared = "return";
	int length = compared.length();
	
	for(int i = 0; i < length;i++){

		if (word[i] != compared[i]){

			return false;
		}
		if (i == (length - 1)){
			if(i + 1 <= word.length()){	
			char bounds = word[i+1];
			return (check_bounds_keywords(bounds));		
		
			}
			else{
				return false;
			}
		}
	
	}
	return false;
}	
//void
bool rec_void (std::string &word){
	
//checking wether how it compares to int
	string compared = "void";
	int length = compared.length();
	
	for(int i = 0; i < length;i++){

		if (word[i] != compared[i]){

			return false;
		}
		if (i == (length - 1)){
			if(i + 1 <= word.length()){	
			char bounds = word[i+1];
			return (check_bounds_keywords(bounds));		
		
			}
			else{
				return false;
			}
		}
	
	}
	return false;
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
	std::string x = "int asdfsvd = 3;";
	if (rec_int(x)) {cout << "it work";} else {cout << "no  it does not"; }		
	return 0;
	
}

