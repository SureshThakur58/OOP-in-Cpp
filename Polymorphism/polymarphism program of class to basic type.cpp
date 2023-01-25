/*Program to read the height in feet and inches and convert it to meter by using user define two class type
  conversion.(class to basic type)
  1meter=328084feets
  1feet=12inches
*/

#include<iostream>
#include<math.h>
using namespace std;
class Height{
	int feet,inch;
	public:
		Height(){}
		Height(int f,int i){
		feet=f;
		inch=i;
		}
		void display(){
			cout<<"Height is"<<feet<<"feets and "<<inch<<"inches"<<endl;
		}
		operator int(){
			int f=inch/12;
			int m=(f+feet)/328084;
			return m;
		}
};
int main(){
	Height H(328083,12);
	H.display();
	int h;
	h=H;  //casting operator is called
	cout<<"Height After conversion is "<<h<<"meters"<<endl;	
}



