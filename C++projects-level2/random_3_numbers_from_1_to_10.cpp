#include<iostream>
#include<cstdlib>
using namespace std;

int readPositiveNumber(string message){
	
	int num;
	while (num <= 0){
		cout<<message;
		cin>>num;
	}
	
	return num;
}

int randomNumber(int from, int to){
	
		return rand() % (to - from + 1) + from;
}

void print3RandomNumbers(){
	
	int from = readPositiveNumber("please enter the from number: ");
	int to = readPositiveNumber("please enter the to number: ");
	
	cout<<randomNumber(from,to)<<endl;
	cout<<randomNumber(from,to)<<endl;
	cout<<randomNumber(from,to)<<endl;
}

int main(){
	//seeds the random number
//	srand((unsigned)time(NULL));
	
	print3RandomNumbers();
	
	return 0;
}
