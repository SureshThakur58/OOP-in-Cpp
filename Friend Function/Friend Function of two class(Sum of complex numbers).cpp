// FRIEND FUNCTION OF TWO CLASS.

  //Program to add the complex number of two class by using friend function(Returning Object).
  #include<iostream>
  using namespace std;
  class Complex2; //(forward declaration)
  class Complex1{
  	int real,img;
  	public:
  		void input(){
  			cout<<"enter value of real part and imaginary party"<<endl;
  			cin>>real>>img;
		  }
		void display(){
			cout<<"The complex number is "<<real<<"+i"<<img<<endl;
		}  
		friend Complex1 sum(Complex1,Complex2);
  };
  class Complex2{
  	int real, img;
  	public:
  		void input(){
  			cout<<"enter value of real part and imaginary party"<<endl;
  			cin>>real>>img;
		  }
		void display(){
			cout<<"The complex number is "<<real<<"+i"<<img<<endl;
		}  
		friend Complex1 sum(Complex1,Complex2);
  };
  Complex1 sum(Complex1 c1,Complex2 c2){
  	Complex1 c3;
  	c3.real=c1.real+c2.real;
  	c3.img=c1.img+c2.img;
  	return c3;
  }
  int main(){
  	Complex1 c1,c3;
  	Complex2 c2;
  	c1.input();
  	c2.input();
  	c1.display();
  	c2.display();
  	cout<<"After addition "<<endl;
  	c3=sum(c1,c2);
  	c3.display();
  	return 0;
  }
  
  
  
  
  
