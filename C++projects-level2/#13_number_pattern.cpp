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

void printNumberPattern(int num){
	
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
	
}

int main(){
	
	printNumberPattern(readPositiveNumber());
	
	return 0;
}
