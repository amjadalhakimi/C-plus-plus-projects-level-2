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
void printIndexInArray(int index, int num){
	
	if(index == -1){
		cout<<"The number you are looking for is: "<<num<<endl;
		cout<<"The number is not found :-(\n";
	}else{
		cout<<"The number you are looking for is: "<<num<<endl;
		cout<<"The number found in possion: "<<index<<endl;
		cout<<"The number order is: "<<index + 1<<endl;
	
	}
}
void printArrayWithIndex(){
	
	int arr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	printArray(arr, length);
	int num = readPositiveNumber("Please enter a number to search for: ");
	int index = getIndexElement(arr, length, num);
	printIndexInArray(index, num);
}

int main(){
	
	printArrayWithIndex();
	
	return 0;
}
