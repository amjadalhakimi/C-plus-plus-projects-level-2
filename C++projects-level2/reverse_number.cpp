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
void printReverseNumber(int num){
	
	cout<<"The reversed number of "<< num <<" is: "<<reverseNumber(num)<<endl;
}
int main(){
	
	printReverseNumber(readPositiveNumber());
	
	return 0;
}
