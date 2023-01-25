#include<iostream>
using namespace std;
class Rational{
	int num,den;
	public:
		void getnumber();
		void displayrational();
};
void Rational::getnumber(){
	cout<<"Enter numerator and denominator"<<endl;
	cin>>num>>den;
}
void Rational::displayrational(){
	cout<<"The Rational numbers are:"<<num<<"/"<<den<<endl;
}
int main (){
	Rational r[10];
	for(int i=0;i<=9;i++){
		r[i].getnumber();
		r[i].displayrational();
	}
	return 0;
}
