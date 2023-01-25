//Add two times in hour and minutes of a class using friend function.(by passing object)
#include<iostream>
using namespace std;
class Time{
	int hour,mint;
	public:
		void inputtime();
		friend void sum(Time,Time);
};
void Time :: inputtime(){
	cout<<"enter two time in hour and minutes"<<endl;
	cin>>hour>>mint;
}
void sum(Time t1,Time t2){
	Time t3;
	t3.mint=t1.mint+t2.mint;
	t3.hour=t3.mint/60;
	t3.mint=t3.mint%60;
	t3.hour=t3.hour+t1.hour+t2.hour;
	cout<<"Time after addition is "<<t3.hour<<"hours and "<<t3.mint<<"minutes"<<endl;
}
int main(){
	Time t1;    // we can also write Time t1,t2
	Time t2;
	t1.inputtime();
	t2.inputtime();
	sum(t1,t2);
	return 0;
}
