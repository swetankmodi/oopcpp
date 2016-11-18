#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
	private:
		char *name;
		int roll;	
	public:
		student(char *n,int r)
		{
			int i;
			for(i=0;n[i]!='\0';i++);
			name=(char *)malloc(sizeof(char)*(i+1));
			for(i=0;n[i]!='\0';i++)
					name[i]=n[i];
			name[i]=n[i];		
			roll=r;
		}
		student()
		{
			name=NULL;
			roll=-1;
		}	
	void print()
	{
		cout<<"The NAme Is:"<<name<<endl;
		cout<<"The Roll is:"<<roll<<endl;
	} 	
};
class internalTest:virtual public student
{
	int intest;
	public:
	internalTest(char *n,int r,int m):student(n,r)
	{
			intest=m;;
	}
	internalTest(int m)
	{
			intest=m;
	}
	void printi()
	{
		cout<<"The internal Marks Is:"<<intest<<endl;
	}	
};
class externalTest:virtual public student
{
	int extest;
	public:
	externalTest(int m)
	{
			 extest=m;
	}	

	externalTest(char *n,int r,int m):student(n,r)
	{
			 extest=m;
	}	
	void printe()
	{
		cout<<"The external Marks Is:"<<extest<<endl;
	}
};
class TotalMarks:public internalTest,public externalTest
{
	int tot;
	public:
	TotalMarks(char *n,int r,int m1,int m2):student(n,r),internalTest(m1),externalTest(m2)
	{
		tot=m1+m2;
	}
	void display()
	{
		print();
		printi();
		printe();
		cout<<"The Total Marks Is:"<<tot<<endl;
	}	
};
int main()
{
	char n[]="MOHIT";
	TotalMarks tm(n,155,15,15);
	tm.display();
}
