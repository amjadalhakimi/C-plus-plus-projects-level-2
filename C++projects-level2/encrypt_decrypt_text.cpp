#include<iostream>
using namespace std;

string readText(){
	string text; 
	cout<<"please enter the text: ";
	cin>>text;
	
	return text;
}
string encryptText(string text, int encryptionKey){
	
	
	string enctypedText;
	for(int i=0; i<text.length(); i++){
		enctypedText += char((text[i] + encryptionKey));	
	}
	
	return enctypedText;
}

string decryptText(string text, int encryptionKey){
	
	
	string decryptedText;
	for(int i=0; i<text.length(); i++){
		decryptedText += char((text[i] - encryptionKey));	
	}
	
	return decryptedText;
}


void printEncryptedDecryptedText(string text){
	
	int encryptionKey = 2;
	cout<<"The encrypted text is: "<<encryptText(text, encryptionKey)<<endl;
	cout<<"The decrypted text is: "<<decryptText(encryptText(text, encryptionKey), encryptionKey);
}


int main(){
	
	printEncryptedDecryptedText(readText());
	
	return 0;
}
