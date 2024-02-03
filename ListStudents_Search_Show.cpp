#include "iostream"
#include "conio.h"
#include "string.h"
#include "cstdlib"
using namespace std;


int main()
{
	int SizeArray = 30;
	string StudentName [SizeArray];
	int EnterYear [SizeArray];

	int i = 0;
	int Choosing;
	int AcceptToShowResults = 0;
	int AcceptToAddStudent = 0;
	cout<<"Hello, dear user, welcome to my app!\n"<<endl;
	while(true)
	{
		cout<<"=============================================";
		cout<<"\n\nDo you want to display the list of students "<<
		"or add a student's information to the list?\n";
		cout<<"\n\t"<<"Show list : 1 , Add student : 2 , Look for one student : 3"<<
		", Exit : 0"<<"\n\n"<<"Input : ";
		cin>>Choosing;
		if(Choosing == 1)
		{
			if(i != 0)
			{
				for(int j = 0 ; j < i ; j++)
				{
					cout<<"======================="<<j+1<<"======================"<<endl;
					if(StudentName[j] != "")
					{
						cout<<">>NAME OF STUDENT "<<j + 1<<" :		"<<StudentName[j]<<endl;
						cout<<">>ENTRY YEAR OF STUDENT "<<j + 1<<" :	"<<EnterYear[j]<<endl;
					}
					else
						cout<<">>This student does not exist"<<endl;
				}
				AcceptToShowResults++;
				cout<<"\n\n>>YOU "<<AcceptToShowResults<<" TIMES TRY TO SHOW RESULT.";
			}
			else
				cout<<">>There is no student information in this list!"<<endl;
		}
		else if(Choosing == 2)
		{
			cout<<">>Enter name for student "<<i+1<<" : ";
			cin>>StudentName[i];
			cout<<">>Enter entry year for student "<<i+1<<" : ";
			cin>>EnterYear[i];
			i++;
		}
		else if(Choosing == 3)
		{
			string SearchName;
			
			if(i != 0)
			{
				cout<<"Enter name to looking for entry year of your student choosing : ";
				cin>>SearchName;
				for(int j = 0 ; j < i ; j++)
				{
					if(SearchName == StudentName[j])
						cout<<">>Name : "<<StudentName[j] << " | Entry year : "<<EnterYear[j]<<endl;
				}
			}
			else
				cout<<">>There is no student information in this list!"<<endl;
		}
		else if(Choosing == 0)
		{
			cout<<">>You are logged out"<<endl;
			exit(0);
		}
		else
		{
			cout<<"\n>>Status : Error";
		}
	}
	
	getch();
}
