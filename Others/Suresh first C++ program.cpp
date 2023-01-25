#include<iostream>
using namespace std;
class Person {
	int age;
	char name[50],adress[50];
	public:
		void getInfo();
		void displayInfo();
};
void Person :: getInfo(){
cout << "Enter name, age and adress of a person" <<endl;
	cin>>name>>age>>adress;
}
void Person::displayInfo(){
	cout<<"Name:"<<name<<endl
	    <<"Age:"<<age<<endl
	    <<"Adress:"<<adress<<endl;
}
int main (){
	Person P;
	P.getInfo();
	P.displayInfo();
	return 0;
}
