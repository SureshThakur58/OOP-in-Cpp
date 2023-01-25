// FRIEND FUNCTION OF TWO CLASS.

   // Program to compare the data values of two class by using friend function.
   #include<iostream>
   using namespace std;
   class Compare2;  //Forward declaration
   class Compare1{
   	int x;
   	public:
   		void input(){
   			cout<<"enter value of x: "<<endl;
   			cin>>x;
		   }
		void display(){
			cout<<"x= "<<x<<endl;
		}   
		friend void maximum(Compare1,Compare2);
   };
   class Compare2{
   	int y;
   	public:
   		void input(){
   			cout<<"enter the value of y: "<<endl;
   			cin>>y;
		   }
		void display(){
			cout<<"y= "<<y<<endl;
		}   
		friend void maximum(Compare1,Compare2);
   };
   void maximum(Compare1 A, Compare2 B){
   	if(A.x>B.y){
   		cout<<A.x<<"is maximum"<<endl;
	   }
	   else{
	   	cout<<B.y<<"is maximum"<<endl;
	   }
   }
   int main(){
   	Compare1 A;
   	Compare2 B;
   	A.input();
   	B.input();
   	A.display();
   	B.display();
   	maximum(A,B);
   	return 0;
   }
   
   
   // Program to add two times of two class by using friend function.(by passing object)
   #include<iostream>
   using namespace std;
   class Time2;
   class Time1{
   	int hour, mint;
   	public:
   		void input(){
   			cout<<"enter first time in hour and minutes"<<endl;
   			cin>>hour>>mint;
		   }
		void display(){
			cout<<"Time is "<<hour<<"hours and "<<mint<<"minutes"<<endl;
		}   
		friend void addtime(Time1,Time2);
   };
   class Time2{
   	int hour,mint;
   	public:
   		void input(){
   			cout<<"enter second time in hour and minutes"<<endl;
   			cin>>hour>>mint;
		   }
		void display(){
			cout<<"Time is "<<hour<<"hours and "<<mint<<"minutes"<<endl;
		}   
		friend void addtime(Time1,Time2);
   };
   void addtime(Time1 t1,Time2 t2){
   	Time1 t3;
   	t3.mint=t1.mint+t2.mint;
   	t3.hour=t3.mint/60;
   	t3.mint=t3.mint%60;
   	t3.hour=t3.hour+t1.hour+t2.hour;
   	cout<<"Time After addtion is "<<t3.hour<<"hours and "<<t3.mint<<"minutes"<<endl;
   }
   int main(){
   	Time1 t1;
   	Time2 t2;
   	t1.input();
   	t2.input();
   	t1.display();
   	t2.display();
   	addtime(t1,t2);
   	return 0;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
