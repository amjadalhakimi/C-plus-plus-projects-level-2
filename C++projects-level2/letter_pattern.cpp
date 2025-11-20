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

void printLetterPattern(int num){

	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<char(i + 64);
		}
		cout<<endl;
	}
	
	
}

int main(){
	
	printLetterPattern(readPositiveNumber());
	
	return 0;
}
