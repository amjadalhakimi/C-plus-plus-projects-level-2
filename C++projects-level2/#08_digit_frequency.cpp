#include<iostream>
using namespace std;

struct stNumber{
	int num1;
	short num2;
};
stNumber readNumber(){
	
	stNumber numbers;
	cout<<"please enter a number: ";
	cin>>numbers.num1;
	cout<<"Which number you want to check: ";
	cin>>numbers.num2;
	
	
	return numbers;
}


int digitFrequency(stNumber numbers){
	
	int remainder = 0, frequency = 0;
	
	while(numbers.num1 > 0){
		remainder = numbers.num1 % 10;
		numbers.num1 = numbers.num1 / 10;
		
		if(remainder == numbers.num2){
			frequency++;
		}
	}
	return frequency;
}

void printFrequency(stNumber numbers){
	
	cout<<"The digit "<<numbers.num2<<" frequency is: "<<digitFrequency(numbers);
}

int main(){
	
	printFrequency(readNumber());
	
	return 0;
}
