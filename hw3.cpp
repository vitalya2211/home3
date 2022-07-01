#include <iostream>
using namespace std;
int main()
{
	/*1.проверка, является ли пятизначное число палиндромом (14233->no; 12821->yes)
	  2.принимает коорднинаты двуз точек и находит расстояние между ними в 3Д(a(3,6,8);b(2,1,-7)-15.84;
	  			a(7,5,0);b(1,-1,9)->11.53
	  3. принимает N и выдает таблицу кубов чисел от 1 до N (3->1,8,27;5->1,8,27,64,125)*/
	  int num=1,n=0;
	while (num)
	{
		system("cls");
	  	  cout << "enter number task. from exit press 0\n "
	  		"	1.checking num for palindrom\n "
	  		"   2.finds the distance in 3d\n "
	  		"   3.gives a table of cubes up to N\n";
		cin>>num;
	
	  switch (num)
	  	{
	  		case 1:
	  			{cout  << "enter 5digit number "; 
	  			cin>> n;
				  }
				  break;
			case 2:
				{cout << "enter 3 points ";
				cin>>n;
				}
				break;
			case 3:
				{cout<< "enter N ";
				cin>>n;
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