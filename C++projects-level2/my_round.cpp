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

int myRound(float num){

	if(abs(getFractionPart(num)) >= 0.5){
		if(num > 0){
			return int(num) + 1;
		}else{
			return int(num) - 1;
		}
	}else{
		return int(num);
	}
}

void printRoundResult(float num){
	
	cout<<"this is my function: "<<myRound(num)<<endl;
	cout<<"this is c++ function: "<<round(num)<<endl;
}

int main(){
	
	printRoundResult(readNumber());
	
	return 0;
}
