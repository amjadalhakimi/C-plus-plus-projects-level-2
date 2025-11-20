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
		arr[i]=i+1; 
	}
	
}
void swap(int &A, int &B){
	int T = A;
	A = B;
	B = T;
}
int shuffleArray(int arr[100], int length){
	
	for(int i=0; i<length; i++){
		swap(arr[randomNumber(0, length -1)], arr[randomNumber(0, length -1)]);
	}
}

void printArray(int arr[100], int length){
	
	cout<<"Array Elements: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void printArrayElementsWithShuffle(){
	
	int arr[100];
	int length = readPositiveNumber("How many elements you want to enter: ");
	
	readArray(arr, length);
	cout<<"Array elements before shuffle\n";
	printArray(arr, length);
	
	cout<<"Array elements after shuffle\n";
	shuffleArray(arr, length);
	printArray(arr, length);
	
}


int main(){
	
//	srand((unsigned)time(NULL));
	printArrayElementsWithShuffle();
	
	return 0;
}
