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
			friend Matrix operator*(Matrix,Matrix);			
};
Matrix operator*(Matrix M1,Matrix M2)
{
	Matrix mrr(M1.getn(),M2.getm());
	for(int i=0;i<M1.getn();i++)
		{
			for(int j=0;j<M1.getm();j++)
				{
					for(int k=0;k<M2.getn();k++)
					{
						mrr.Arr[i][k]+=M1.Arr[i][j]*M2.Arr[j][k];
					}
				}
		}
		return mrr;
}
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
