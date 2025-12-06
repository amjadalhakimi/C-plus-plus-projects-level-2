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

void printInvertedNumberPattern(int num){
	
	for(int i=num; i>=1; i--){
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
	
}

int main(){
	
	printInvertedNumberPattern(readPositiveNumber());
	
	return 0;
}
