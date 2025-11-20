#include<iostream>
#include<cmath>
using namespace std;

float readNumber(){
	
	float num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

float mySqrt(float num){
	
	return pow(num, 0.5);
}

void printResult(float num){
	
	cout<<"this is my function: "<<mySqrt(num)<<endl;
	cout<<"this is c++ function: "<<sqrt(num)<<endl;
}

int main(){
	
	printResult(readNumber());
	
	return 0;
}
