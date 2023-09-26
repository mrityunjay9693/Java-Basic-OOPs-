#include<iostream>

using namespace std;

class A
{
	private:
		int a;
	public:
		A()
		{
			a=10;
		}
		void showa()
		{
			cout<<"a="<<a<<endl;
		}
};

class B : public A
{
	private:
		int b;
	public:
		B()
		{
			b=20;
		}
		B(int x)
		{
			b=x;
		}
		void showb()
		{
			cout<<"b="<<b<<endl;
		}
};


int main()
{
	//B obb(30)				Implicit call to constructor
	B obb = B(30);			//Explicit call to constructor
	
	obb.showa();
	obb.showb();
	
	return 0;
}
