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

bool isPalindrome(int arr[100], int length){
	
	for(int i=0; i<length; i++){
		if(arr[i] != arr[length - i -1]){
			return false;
		}
	}
	return true;
}

void checkIsPlaindrome(int arr[100], int length){
	
	if(isPalindrome(arr, length)){
		cout<<"Yes, the array is palindrome."<<endl;
	}else{
		cout<<"No, the array is not palindrome."<<endl;
	}
}

void printArrayElements(){
	
	int arr[100] = {10,20,30,30,20,10}, length = 6;
	printArray(arr, length);
	checkIsPlaindrome(arr, length);
}

int main(){
	
//	srand((unsigned)time(NULL));
	printArrayElements();
	
	return 0;
}
