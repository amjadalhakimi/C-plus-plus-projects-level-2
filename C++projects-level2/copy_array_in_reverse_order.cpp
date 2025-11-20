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

copyArrayInReverse(int arr[100], int carr[100], int length){
	
	for(int i=0; i<length; i++){
		carr[i]=arr[length - i -1];
	}
}

void printArrayElementsWithReverseOrder(){
	
	int arr[100], carr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	cout<<"Array 1 elements: \n";
	printArray(arr, length);
	copyArrayInReverse(arr, carr, length);
	cout<<"Array 2 elements after copy: \n";
	printArray(carr, length);
}

int main(){
	
	srand((unsigned)time(NULL));
	printArrayElementsWithReverseOrder();
	
	return 0;
}
