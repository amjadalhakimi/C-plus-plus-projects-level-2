#include<iostream>
#include<cstdlib>
using namespace std;

void printArray(int arr[100], int length){
	
	cout<<"Array Elements: ";
	for(int i=0; i<length; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

bool isExists(int carr[10],int length2, int num){
	
	for(int i=0; i<length2; i++){
		if(carr[i] == num){
			return true;
		}
	}
	
	return false;
}

void addArrayElement(int carr[10], int &length2, int num){
	
	carr[length2] = num;
	length2++;
}


copyArray(int arr[10], int carr[10], int length, int &length2){
	
	for(int i=0; i<length; i++){
		if(!isExists(carr, length2, arr[i])){
		addArrayElement(carr, length2, arr[i]);
		}
	}
}


void printArrayElements(){
	
	int arr[10] = {10,10,10,50,50,10,70,70,90,70};
	int carr[10], length = 10, length2 = 0;
	cout<<"Array 1 elements: \n";
	printArray(arr, length);
	copyArray(arr, carr, length, length2);
	cout<<"Unique numbers in array 1: \n";
	printArray(carr, length2);
}

int main(){
	
//	srand((unsigned)time(NULL));
	printArrayElements();
	
	return 0;
}
