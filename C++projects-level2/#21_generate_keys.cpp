#include<iostream>
#include<cstdlib>
using namespace std;


int readPositiveNumber(){
	
	int num;
	while (num <= 0){
		cout<<"please enter how many keys you want to generate: ";
		cin>>num;
	}
	
	return num;
}

int randomNumber(int from, int to){
	
		return rand() % (to - from + 1) + from;
}

void getRandomKey(){
	for(int i=1; i<=16; i++){
		cout<<char(randomNumber(65, 90));
		if(i % 4 == 0 and i<16){
			cout<<"-";
		}
	}
}

void printRandomeKeys(int num){
	for(int i=1; i<=num; i++){
		cout<<"Key["<<i<<"]: ";
		getRandomKey();
		cout<<endl;	
	}
}

int main(){
//	srand((unsigned)time(NULL));
	
	
	printRandomeKeys(readPositiveNumber());
	
	return 0;
}
