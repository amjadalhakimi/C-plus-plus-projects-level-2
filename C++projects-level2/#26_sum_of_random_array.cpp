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

int sumElements(int arr[100], int length){
	
	int sum = 0;
	for(int i=0; i<length; i++){
		sum+=arr[i];
	}
	return sum;
}

void printArrayElementsWithSum(){
	
	int arr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	printArray(arr, length);
	cout<<"The sum of elements is: "<<sumElements(arr, length)<<endl;
}


int main(){
	
	srand((unsigned)time(NULL));
	printArrayElementsWithSum();
	
	return 0;
}
