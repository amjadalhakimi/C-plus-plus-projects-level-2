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

int digitFrequency(int number, short digit){
	
	int remainder = 0, frequency = 0;
	
	while(number > 0){
		remainder = number % 10;
		number = number / 10;
		
		if(remainder == digit){
			frequency++;
		}
	}
	return frequency;
}


void printFrequencyForAll(int number){
	short frequency = 0;
	
	for(int i=0; i<=9; i++){
		frequency = digitFrequency(number, i);
		if (frequency>0){
			cout<<"Digit "<<i<<" frequency is: "<<frequency<<" time(s)\n";
		}
	}
}

int main(){
	printFrequencyForAll(readPositiveNumber());
	
	return 0;
}
