#include <iostream>
#include <cmath>
using namespace std;
void foo1(int a)
{
	int temp=a,b=0;
	while(temp!=0)
	{
		b=b*10+temp%10;
		temp/=10;
	}
	if (a==b)
		cout << "palindrom\n";
	else cout<< "no :(\n";
}
double arrfoo(int* array,int size)
{
	double result;
	result=sqrt((array[0]-array[1])*(array[0]-array[1])+(array[2]-array[3])*(array[2]-array[3])+(array[4]-array[5])*(array[4]-array[5]));
	return result;
	
}
void cubfun(int N)
{
	for (int i=0;i<N;)
	{
		i++;
		cout << i*i*i<<'\n';
	}
}
int main()
{
	/*1.проверка, является ли пятизначное число палиндромом (14233->no; 12821->yes)
	  2.принимает коорднинаты двух точек и находит расстояние между ними в 3-Д
	  (a(3,6,8);b(2,1,-7)-15.84;a(7,5,0);b(1,-1,9)->11.53) 
	  = sqt((x2-x1)^2+(y2-y1)^2+(z2-z1)^2)
	  3. принимает N и выдает таблицу кубов чисел от 1 до N (3->1,8,27;5->1,8,27,64,125)*/
	  int num=1,n=0;
	  const int size=6;
	  int array[size];
	while (num)
	{
		system("cls");
	  	  cout << "enter number task. from exit press 0\n "
	  		"1.checking num for palindrom\n "
	  		"2.finds the distance in 3d\n "
	  		"3.gives a table of cubes up to N\n";
		cin>>num;
	
	  switch (num)
	  	{
	  		case 1:
	  			{
				  cout  << "enter 5-digit number "; 
				  cin >> n;
	  				foo1(n);	 
	  				system ("pause");
				  }
				  break;
			case 2:
				{
					cout << "enter 3 points ";
					cout << "enter X1 ";
					cin>> array[0];
					cout << "enter Y1 ";
					cin >> array[2];
					cout << "enter Z1 ";
					cin>> array[4];
					cout<< "enter X2 ";
					cin>> array[1];
					cout << "enter Y2 ";
					cin>> array[3];
					cout<< "enter Z2 ";
					cin>>array[5];
					cout <<"distance = "<< arrfoo(array,size)<<endl;;
					
					system("pause");
				}
				break;
			case 3:
				{cout<< "enter N ";
				cin>>n;
				cubfun(n);
				system("pause");
				}
				break;
			case 0:
				cout << "goodbye!!!\n";
				break; 
			default:
				{
					cout << "incorrect number task\n";
					system("pause");
				}
				break;
		  }
	}
	system("pause");
	return 0;
}