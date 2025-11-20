#include<iostream>
#include<string>
using namespace std;

int readPositiveNumber(){
	
	int num;
	while (num <= 0){
		cout<<"please enter a number > 0: ";
		cin>>num;
	}
	
	return num;
}

void printDigitsReversed(int num){

	int remainder = 0;
	
	while(num > 0){
		remainder = num % 10;
		num = num / 10; 
		cout<<remainder<<endl;
	}
	
}

int main(){
	
	printDigitsReversed(readPositiveNumber());

	return 0;
}
