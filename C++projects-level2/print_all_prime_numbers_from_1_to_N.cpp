#include<iostream>
using namespace std;

int readNumber(){
	int num; 
	cout<<"Please enter a number: ";
	cin>>num;
	
	return num;
}


bool isPrime(int num){
	
	for(int i=2; i<num; i++){
		if(num % i == 0){
			return false;
		}
	}
	
	return true;
}


printAllPrimeNumbers(int num){
	
	for(int i=1; i<=num; i++){
		if(isPrime(i)){
			cout<<i<<" : is a prime number\n";
		}
	}
}

int main(){
	printAllPrimeNumbers(readNumber());
	
	
	return 0;
}
