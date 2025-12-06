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

int sumTwoArrays(int arr1[100], int arr2[100], int arr3[100], int length){
	
	for(int i=0; i<length; i++){
		arr3[i]=arr1[i] + arr2[i];
	}
}

void printArrayElementsWithSum(){
	
	int arr1[100], arr2[100], arr3[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr1, length);
	readArray(arr2, length);
	
	cout<<"Array 1 elements\n";
	printArray(arr1, length);
	cout<<"Array 2 elements\n";
	printArray(arr2, length);
	
	sumTwoArrays(arr1, arr2, arr3, length);
	cout<<"Sum of array 1 and array2 elements\n";
	printArray(arr3, length);
}


int main(){
	
	srand((unsigned)time(NULL));
	printArrayElementsWithSum();
	
	return 0;
}
