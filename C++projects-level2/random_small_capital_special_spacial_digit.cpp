#include<iostream>
#include<cstdlib>
using namespace std;

enum enCharacter{specialCharacter = 1, digit = 2, capitalLetter = 3, smallLetter = 4};

int randomNumber(int from, int to){
	
		return rand() % (to - from + 1) + from;
}

char getRandomCharacter(enCharacter charType){
	
	switch (charType)
	{
	case enCharacter::specialCharacter:
		return char(randomNumber(33, 47));
	case enCharacter::digit:
		return char(randomNumber(48, 57));
	case enCharacter::capitalLetter:
		return char(randomNumber(65, 90));
	case enCharacter::smallLetter:
		return char(randomNumber(97, 122));
		
	}
}

void printRandomCharacters(){
	
	cout<<"Random number: "<<getRandomCharacter(enCharacter::digit)<<endl;
	cout<<"Random Small Letter: "<<getRandomCharacter(enCharacter::smallLetter)<<endl;
	cout<<"Random Capital Letter: "<<getRandomCharacter(enCharacter::capitalLetter)<<endl;
	cout<<"Random Special Character: "<<getRandomCharacter(enCharacter::specialCharacter)<<endl;
}

int main(){
	
	srand((unsigned)time(NULL));
	
	printRandomCharacters();
	
	return 0;
}
