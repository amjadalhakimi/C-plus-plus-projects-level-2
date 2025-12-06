#include<iostream>
#include<cmath>
using namespace std;

float readNumber(){
	
	float num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

float myABS(int num){
	
	return (num < 0) ? num * -1 : num;
}

void printAbsluteResult(int num){
	
	cout<<"this is my function: "<<myABS(num)<<endl;
	cout<<"this is c++ function: "<<abs(num)<<endl;
}

int main(){
	
	printAbsluteResult(readNumber());
	
	return 0;
}
