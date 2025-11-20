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

void addArrayElement(int carr[100], int &length2, int num){
	
	carr[length2] = num;
	length2++;
}


copyArray(int arr[100], int carr[100], int length, int &length2){
	
	for(int i=0; i<length; i++){
		addArrayElement(carr, length2, arr[i]);
	}
}



void printArrayElementsWithSum(){
	
	int arr[100], carr[100], length2 = 0;
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	cout<<"Array 1 elements: \n";
	printArray(arr, length);
	copyArray(arr, carr, length, length2);
	cout<<"Array 2 elements after copy: \n";
	printArray(carr, length2);
}


int main(){
	
//	srand((unsigned)time(NULL));
	printArrayElementsWithSum();
	
	return 0;
}
