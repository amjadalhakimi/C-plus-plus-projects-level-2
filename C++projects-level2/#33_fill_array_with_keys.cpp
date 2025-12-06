#include<iostream>
#include<cstdlib>
using namespace std;

enum enCharacter{specialCharacter = 1, digit = 2, capitalLetter = 3, smallLetter = 4};

short readNumber(){
	short keys;
	cout<<"Please enter how many keys you want: ";
	cin>>keys;

	return keys;
}

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

string generateWord(enCharacter charType, short length){
	
	string word;
	for(int i=1; i<=length; i++){
		word += getRandomCharacter(charType);
	}

	return word;
}

string generateKey(){
	string key = "";
	key = generateWord(enCharacter::capitalLetter, 4) + "-";
	key += generateWord(enCharacter::capitalLetter, 4) + "-";
	key += generateWord(enCharacter::capitalLetter, 4) + "-";
	key += generateWord(enCharacter::capitalLetter, 4);

	return key;
}


void fillArrayWithKeys(string arr[100], short length){
	for(int i=0; i<length; i++){

        arr[i] = generateKey();
	}
}

void printArray(string arr[100], short length){

	for(int i=0; i<length; i++){
		cout<<"Array["<<i<<"]: "<<arr[i]<<endl;
	}
	cout<<endl;
}

void printArrayElementsWithKeys(){
    string arr[100];
    int length = readNumber();
    fillArrayWithKeys(arr, length);
    printArray(arr, length);
}

int main(){
	
	srand((unsigned)time(NULL));
	
	printArrayElementsWithKeys();
	
	return 0;
}
