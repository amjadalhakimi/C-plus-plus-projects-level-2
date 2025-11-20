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
int sumDigits(int num){
	int sum = 0;
	
	while(num > 0){
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}

void printSumDigits(int num){
	
	cout<<"The sum of "<<num<<" is: "<<sumDigits(num)<<endl;
}

int main(){
	printSumDigits(readPositiveNumber());
	
	return 0;
}
