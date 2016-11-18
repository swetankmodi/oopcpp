#include<iostream>
#include<stdlib.h>
using namespace std;
class Matrix
{
	private:int n;
			int m;
			int **Arr;
	public:	Matrix(int n1,int m1)
			{
				n=n1;
				m=m1;
				Arr=(int**)malloc(sizeof(int*)*n);
				for(int i=0;i<n;i++)
					{
						*(Arr+i)=(int*)malloc(sizeof(int)*m);
						for(int j=0;j<m;j++)
							Arr[i][j]=0;
					}		
					
			}
			int getm(){		return m;	}
			int getn(){		return n;	}	
			void input()
			{
				printf("Enter The Elements OF MAtrix:\n");
				for(int i=0;i<n;i++)
				{
						for(int j=0;j<m;j++)
							scanf("%d",*(Arr+i)+j);
				}	
			}
			Matrix operator*(Matrix M)
			{
				Matrix mrr(n,M.m);
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)
					{
						for(int k=0;k<M.n;k++)
						{
							mrr.Arr[i][k]+=Arr[i][j]*M.Arr[j][k];
						}
					}
				}
				return mrr;
			}
			void display()
			{
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)
					{
							printf("%d ",*(*(Arr+i)+j));
					}
					printf("\n");
				}
			}			
};
int main()
{
	Matrix A1(5,5);
	Matrix A2(5,2);
	A1.input();
	A2.input();
	cout<<"Matrix 1 is\n";
	A1.display();
	cout<<"Matrix 2 is\n";
	A2.display();
	if(A1.getm()!=A2.getn())
				{
					cout<<"Multuplication Not Possible";
					return 0;
				}	
	Matrix M(A1.getn(),A2.getm());			
	M=A1*A2;
	cout<<"Result Matrix is\n";
	M.display();
	return 0;
}
