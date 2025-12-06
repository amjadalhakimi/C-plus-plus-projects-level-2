#include<iostream>
using namespace std;

int readNumber(){
	
	int num;
	while (num <= 0){
		cout<<"please enter a number > 0: ";
		cin>>num;
	}
	
	return num;
}

bool isPerfect(int num){
	
	int sum = 0;
	
	for(int i=1; i<=num / 2; i++){
		if(num % i == 0){
			sum +=i;
		}
	}
	
	return (num == sum) ;
}



printPerfectNumbers(int num){
	
	for(int i=1; i<=num; i++){
		if(isPerfect(i)){
			cout<<"The number "<<i<<" is a perfect number\n";
		}
	}
}

int main(){
	
	printPerfectNumbers(readNumber());
	
	return 0;
}
