#include<iostream>
using namespace std;

void rowSeperator(){
	
	cout<<endl;
	for(int i=1; i<=100; i++){
		cout<<"-";
	}
	cout<<endl;
	
}

string columnSeperator(int i){
	
	if(i<10)
		return "   |";
	else
		return "  |";
}

void printTableHeader(){
	
	cout<<"\n\n\t\t\t multiplication table from 1 to 12\n\n";
	cout<<"\t";
	
	for(int i=1; i<=12; i++){
		cout<<i<<"\t";
	}
	rowSeperator();
}

void printMultiplicationTable(){
	
	printTableHeader();
	
	for(int i=1; i<=12; i++){
		cout<<" "<<i<<columnSeperator(i)<<"\t";
		for(int j=1; j<=12; j++){
			cout<<i*j<<"\t";
		}
		rowSeperator();
	}
}

int main(){
	
	printMultiplicationTable();
	
	return 0;
}
