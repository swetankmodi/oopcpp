#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
             int stk[50];
             int top;
      public:
             stack()
              {
                top=-1;
               }
             void push(int x)
              {
                 stk[++top]=x;
                 cout <<"inserted " <<x;
               }
             void pop()
               {
                    cout <<"deleted " <<stk[top--];
                }
             void display()
               {
                   if(top<0)
                    {
                            cout <<" stack empty";
                            return;
                    }
                    for(int i=top;i>=0;i--)
                    cout <<stk[i] <<" ";
                }
                int gettop()
                {
                	return top;
                }
};
 class mystack: public stack
 {
 	public:
 	    mystack()
 	    {
 	    }
 		void pushh(int t)
 		{
 			try
 			{
                 if(gettop() >  50)
                       {
                           throw "OverFlow";
                       }
                       push(t);
            }
            catch(const char* msg)
            {
            	cout<<msg<<endl;
            	//return;
            }
        }
         void popp()
               {
               	try
               	{
                  if(gettop() < 0)
                   {
                 		throw "UnderFlow";
                    }
                    pop();
                }
                catch(const char* msg)
                {
                	cout<<msg<<endl;
                }
            }
};
int main()
{
     int ch;
     mystack st;
     while(1)
        {
             cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice";
             cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element";
                        cin >> ch;
                        st.pushh(ch);
                        break;
               case 2:  st.popp();  break;
               case 3:  st.display();break;
               case 4:  exit(0);
               }
         }
return (0);
}