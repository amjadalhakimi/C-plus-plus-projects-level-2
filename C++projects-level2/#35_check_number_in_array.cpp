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
		arr[i]=randomNumber(1, 100) ; 
	}
}

void printArray(int arr[100], int length){
	
	cout<<"Array Elements: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int getIndexElement(int arr[100], int length, int num){
	
	for(int i=0; i<length; i++){
		if(arr[i] == num)
			return i;
	}
	
	return -1;
}

bool isFound(int arr[100], int length, int num){
	
	return getIndexElement(arr, length, num) != -1;
	
}
void printIndexInArray(int arr[100], int length, int num){
	
	cout<<"The number you are looking for is: "<<num<<endl;
	if(isFound(arr, length, num)){
		cout<<"Yes, the number is found :-(\n";
	}else{
		cout<<"No, the number is not found :-(\n";	
	}
}
void printArrayWithIndex(){
	
	int arr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	printArray(arr, length);
	int num = readPositiveNumber("Please enter a number to search for: ");
	printIndexInArray(arr, length, num);
}

int main(){
	
	printArrayWithIndex();
	
	return 0;
}
