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

int myCeil(float num){
	
	if(getFractionPart(num) == 0){
		return int(num);
	}
	return (num>0)? int(num) + 1: int(num);
}

void printResult(float num){
	
	cout<<"this is my function: "<<myCeil(num)<<endl;
	cout<<"this is c++ function: "<<ceil(num)<<endl;
}

int main(){
	
	printResult(readNumber());
	
	return 0;
}
