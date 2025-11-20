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


void printDigitsInOrder(int num){

	int remainder = 0;
	num = reverseNumber(num);
	
	while(num > 0){
		remainder = num % 10;
		num = num / 10; 
		cout<<remainder<<endl;
	}
	
}

int main(){
	
	printDigitsInOrder(readPositiveNumber());

	return 0;
}
