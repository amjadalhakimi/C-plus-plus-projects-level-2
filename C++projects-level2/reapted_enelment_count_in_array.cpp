#include<iostream>
using namespace std;

int readPositiveNumber(string message){
	
	int num;
	while (num <= 0){
		cout<<message;
		cin>>num;
	}
	
	return num;
}

int readArray(int arr[100], int length){
	
	cout<<"Enter array elements: \n";
	
	for(int i=0; i<length; i++){
		cout<<"Element ["<<i+1<<"]: ";
		cin>>arr[i];
	}
	
}

int digitFrequency(int arr[100], int length, int digit){
	
	int frequency = 0;
	for(int i=0; i<length; i++){
		if(arr[i]==digit){
			frequency++;
		}
	}
	return frequency;
}

void printArray(int arr[100], int length){
	
	cout<<"Original array is: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void printArrayWithFrequencyDigit(){
	
	int arr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	readArray(arr, length);
	int digit = readPositiveNumber("Eneter the number want to check: ");
	printArray(arr, length);
	cout<<"Number "<<digit<<" is repeated "<<digitFrequency(arr, length, digit)<<" times(s)\n";	
}

int main(){
	
	printArrayWithFrequencyDigit();
	
	return 0;
}
