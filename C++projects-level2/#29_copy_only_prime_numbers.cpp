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

bool isPrime(int num){
	
	for(int i=2; i<num; i++){
		if(num % i == 0){
			return false;
		}
	}
	
	return true;
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

copyArrayPrimeNumbers(int arr[100], int carr[100], int length,int &length2){
	
	length2 = 0;
	for(int i=0; i<length; i++){
		if(isPrime(arr[i])){
			carr[length2]=arr[i];
			length2++;
		}
	}
}
void printArrayElementsWithSum(){
	
	int arr[100], length = readPositiveNumber("How many elements you want to enter: ");
	int carr[100], length2;
	readArray(arr, length);
	cout<<"Array 1 elements: \n";
	printArray(arr, length);
	copyArrayPrimeNumbers(arr, carr, length, length2);
	cout<<"Prime numbers in array 2: \n";
	printArray(carr, length2);
}

int main(){
	
	srand((unsigned)time(NULL));
	printArrayElementsWithSum();
	
	return 0;
}
