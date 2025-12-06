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

int readArray(int arr[100], int length){
	
	for(int i=0; i<length; i++){
		arr[i]=randomNumber(-50, 50) ; 
	}
	
}

void printArray(int arr[100], int length){
	
	cout<<"Array Elements: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

bool isPositive(short num){
	return (num > 0);
}

int negativeNumbersInArray(int arr[100], int length){
	
	int counter = 0; 
	for(int i=0; i<length; i++){
		if(!isPositive(arr[i])){
			counter++;
		}
	}
	return counter;
}


void printArrayElements(){
	
	int arr[100], length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	printArray(arr, length);
	cout<<"Negative numbers are: "<<negativeNumbersInArray(arr, length);
}

int main(){
	
//	srand((unsigned)time(NULL));
	printArrayElements();
	
	return 0;
}
