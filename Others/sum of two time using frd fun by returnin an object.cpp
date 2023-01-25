//Add two times in hour and minutes of a class using friend function.(by returning an object)
#include<iostream>
using namespace std;
class Time{
  int hour,mint;
	public:
		void inputtime();
		void displaytime();
		friend Time sum(Time,Time);
};
void Time :: inputtime(){
	cout<<"enter two time in hour and minutes"<<endl;
	cin>>hour>>mint;
}
void Time :: displaytime(){
	cout<<"time is "<<hour<<"hours and"<<mint<<"minutes"<<endl;
}

 Time sum(Time t1,Time t2){
	Time t3;
	t3.mint=t1.mint+t2.mint;
	t3.hour=t3.mint/60;
	t3.mint=t3.mint%60;
	t3.hour=t3.hour+t1.hour+t2.hour;
	return t3;
}
int main(){
	Time t1;
	Time t2;
	Time t3;      //we can also write Time t1,t2,t3;
	t1.inputtime();
	t2.inputtime();
	t3=sum(t1,t2);
	t3.displaytime();
	return 0;
}
