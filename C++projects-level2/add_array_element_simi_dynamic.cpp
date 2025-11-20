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

void addArrayElement(int arr[100], int &length){
	
	arr[length] = readPositiveNumber("Please enter a number: ");
	length++;
}

void readArray(int arr[100], int &length){
	bool add = true;
	do{
		addArrayElement(arr, length);
		cout<<"do you want to add more numbers? [0]:No [1]:Yes?: ";
		cin>>add;
	}
	while(add);
	
}

void printArray(int arr[100], int length){
	
	cout<<"Array Elements: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void printArrayElementsWithSimiDynamic(){
	
	int arr[100], length = 0;
	
	readArray(arr, length);
	printArray(arr, length);
	
}


int main(){
	
	printArrayElementsWithSimiDynamic();
	
	return 0;
}
