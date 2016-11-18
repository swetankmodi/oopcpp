#include<iostream>
using namespace std;

class Shape
{
	public:
		
		virtual void surfaceArea()=0;
		virtual void volume()=0;
};

class Cylinder:public Shape
{
	float r;
	float h;
	
	public:
	
		Cylinder(float r,float h)
		{
			this->r=r;
			this->h=h;
		}
		void surfaceArea()
		{
			cout<<endl<<"Surface Area Of Cylinder:"<<2*3.14*r*(r+h);
		}
	
		void volume()
		{
			cout<<endl<<"Volume of Cylinder:"<<3.14*r*r*h;
		}
};

class Cube:public Shape
{
	float a;
	
	public:
	
		Cube(float a)
		{
			this->a=a;
		}
		
		void surfaceArea()
		{
			cout<<endl<<"Surface Area Of Cube:"<<6*a*a;
		}
	
		void volume()
		{
			cout<<endl<<"Volume of Cube:"<<a*a*a;
		}
};

class Cuboid:public Shape
{
	float l;
	float b;
	float h;
	
	public:
	
		Cuboid(float l,float b,float h)
		{
			this->l=l;
			this->b=b;
			this->h=h;
		}
		
		void surfaceArea()
		{
			cout<<endl<<"Surface Area Of Cuboid:"<<2*(l*b+l*h+b*h);
		}
	
		void volume()
		{
			cout<<endl<<"Volume of Cuboid:"<<l*b*h;
		}
};

int main()
{
	Shape *ptr;
	Cylinder c1(2,4.2);
	Cube c2(2.6);
	Cuboid c3(2,4,6.4);
	ptr=&c1;
	ptr->surfaceArea();
	ptr->volume();
	ptr=&c2;
	ptr->surfaceArea();
	ptr->volume();
	ptr=&c3;
	ptr->surfaceArea();
	ptr->volume();
	return 0;
}