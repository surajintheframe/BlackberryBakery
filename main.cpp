#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>

using namespace std;


class User{
	public:
	char phoneNumber[10];
	string name1;
	string password1;
	char phoneNum[10];
	string name;
	string password;
	public:
		void log_in(){
			cout<<"Enter Your Phone Numebr"<<endl;
			cin>>phoneNumber;
			cout<<"Enter Your Password"<<endl;
			cin>>password1;
			//cout<<password;
			};

		void sign_up(){
			cout<<"Enter Your Name"<<endl;
			//USE CIN.IGNORE to ignore the number of characters in the stream up to the given delimiter.
			cin.ignore();
			getline(std::cin,name);
			cout<<"Enter Your Phone Numebr"<<endl;
			cin>>phoneNum;
			cout<<"Enter Your Password"<<endl;
			cin>>password;
			};
};

 

int main(){
	int option;
	
	User usr;
	
	cout<<"Enter 1 for SignUp  and  2 for Log In"<<endl;
		cin>>option;
		if(option==1){
			usr.sign_up();
			
			cout<<endl<<endl<<endl;
			
			cout<<"Now Login Using Your Credentials"<<endl<<endl;
			usr.log_in();

		}else if(option==2){
			usr.log_in();
		}else{
			cout<<"Invalid Option Try again"<<endl;
			};
		cin.ignore();
		cout<<"Sign password :"<<usr.password<<endl<<"Log password :"<<usr.password1<<endl;
			
		/*The issue with the code is that the strcmp function is used to compare two C-style strings (char arrays) 
		but the password1 and password variables are of type string. To fix the issue, the string variables need to 
		be converted to C-style strings using the c_str() function before passing them to strcmp */
	    if((strcmp(usr.phoneNumber,usr.phoneNum)==0 )&&( strcmp(usr.password1.c_str(),usr.password.c_str())==0 )){
			cout<<"Success";
			}else{
			cout<<"Login Failed";
			};
		
	return 0;
}

		
