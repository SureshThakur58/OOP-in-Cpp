//swaping two number using friend function
#include<iostream>
using namespace std;
class Swap {
	int x,y;
	public:
		void inputinfo();
		friend void swap(Swap);
};
void Swap :: inputinfo(){
	cout<<"enter two number:"<<endl;
	cin>>x>>y;
}
void swap (Swap m){
	int temp;
	temp=m.x;
	m.x=m.y;
	m.y=temp;
	cout<<"x="<<m.x<<endl;
	cout<<"y="<<m.y<<endl;
	
}
int main (){
	Swap m;
	m.inputinfo();
	swap(m);
	return 0;
}


	
	

