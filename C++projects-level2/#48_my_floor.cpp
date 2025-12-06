#include<iostream>
#include<cmath>
using namespace std;

float readNumber(){
	
	float num;
	cout<<"please enter a number: ";
	cin>>num;
	
	return num;
}

float getFractionPart(float num){
	
	return num - int(num);
}

int myFloor(float num){
	
	if(getFractionPart(num) == 0){
		return int(num);
	}
	return (num>0)? int(num): int(num) -1;
}

void printResult(float num){
	
	cout<<"this is my function: "<<myFloor(num)<<endl;
	cout<<"this is c++ function: "<<floor(num)<<endl;
}

int main(){
	
	printResult(readNumber());
	
	return 0;
}
