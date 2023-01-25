/*Program to read the height in feet and inches and convert it to meter by using user define two class type
  conversion.(class to class type)
  1meter=328084feets
  1feet=12inches
*/

#include<iostream>
using namespace std;
class Height2{
	int meter;
	public:
		Height2(){}
	    Height2(int m){
	    	meter=m;
		}	
		void display(){
			cout<<"Height is "<<meter<<endl;
		}
};
class Height1{
	int feet,inch;
	public:
		Height1(){}
		Height1(int x,int y){
			feet=x;
			inch=y;
		}
		void display(){
			cout<<"height is "<<feet<<"feets and "<<inch<<"inches"<<endl;
		}
		operator Height2(){
			int f=inch/12;
			int m=(f+feet)/328084;
			return Height2(m);
		}
};
int main(){
	Height1 H1(328083,12);
	Height2 H2;
	H1.display();
	H2=H1;
	cout<<"After conversion:"<<endl;
	H2.display();
}



