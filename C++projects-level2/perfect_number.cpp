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

printPerfectNumber(int num){
	
	if(isPerfect(num)){
		cout<<"The number "<<num<<" is a perfect number\n";
	}else{
		cout<<"The number "<<num<<" is Not a perfect number\n";		
	}
}

int main(){
	
	printPerfectNumber(readNumber());
	
	return 0;
}
