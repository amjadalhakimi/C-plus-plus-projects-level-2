#include<iostream>
using namespace std;

string readPassword(){
	string password; 
	cout<<"please enter your 3-letter password: ";
	cin>>password;
	
	return password;
}

int getPasswordTrial(string password){
	
	int trial = 0;
	string tempPassword;
	
	for(int i=65; i<=90; i++){
		for(int j=65; j<=90; j++){
			for(int k=65; k<=90; k++){
				trial++; 
				tempPassword = char(i);
				tempPassword += char(j);
				tempPassword += char(k);
				if(password == tempPassword){
					return trial;
				}
			}
		}
	}
	
	return 0;
}


void printPasswordTrial(string password){
	
	cout<<"The password "<<password<<endl;
	
	if(getPasswordTrial(password)){
		cout<<"Found after "<<getPasswordTrial(password)<<" Trial(s)"<<endl;
	}else{
		cout<<"Not found"<<endl;
	}
}


int main(){
	
	printPasswordTrial(readPassword());
	
	return 0;
}
