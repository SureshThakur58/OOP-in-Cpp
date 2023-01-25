 //WAP to open a bank account by using constructor
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Bank{
 char name[50];
 int acc_no,bal;
 public:
 	Bank(){}
	 Bank(char *n,int ac,int b){
	 strcpy(name,n);
	 acc_no=ac;
	 bal=b;	
	 }
	 void display(){
	 	cout<<"Name: "<<name<<endl<<"Account number: "<<acc_no<<endl<<"Balance: "<<bal<<endl;
	 }
 };
 int main(){
 	Bank B("Suresh",181114444070,10000);
 	B.display();
 }
 
