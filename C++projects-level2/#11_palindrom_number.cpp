#include<iostream>
using namespace std;

int readPositiveNumber(){
	
	int num;
	while (num <= 0){
		cout<<"please enter a number > 0: ";
		cin>>num;
	}
	
	return num;
}

int reverseNumber(int num){
	
	int reversed = 0, remainder = 0;
	
	while(num > 0){
		remainder = num % 10;
		num = num / 10;
		reversed = reversed * 10 + remainder;
	}
	
	return reversed;
}

bool isPalindrom(int num){
	
	return (num == reverseNumber(num));
}

void printPalindromNumber(int num){
	
	if(isPalindrom(num)){
		cout<<"Yes, this number is Plaindrom!\n";
	}else{
		cout<<"No, this number is NOT Plaindrom!\n";
	}
}

int main(){
	
	printPalindromNumber(readPositiveNumber());
	
	return 0;
}
