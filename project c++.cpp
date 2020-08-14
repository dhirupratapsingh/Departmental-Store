#include<iostream>
#include<stdio.h>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class user
{
	char name[25];
	long long int phone;
	string email;
	public:
	void get()
	{
		fstream us;
		us.open("userdet.txt",ios::app);
		cout<<"Enter your Name ."<<endl;
		cin.get(name,25);
		us<<name<<endl;
		cout<<endl;
		cout<<"Enter your Phone number ."<<endl;
		cin>>phone;
		us<<phone<<endl;
		cout<<endl;
		cout<<"Enter your E-mail Address ."<<endl;
		cin>>email;
		us<<email<<endl;
		cout<<endl;
		us<<endl;
		us.close();
	}
};

int main()
{

	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                                   SPENCERS"<<endl;
	cout<<"                                                   ~~~~~~~~"<<endl;
cout<<endl;
cout<<endl;
cout<<"                       WELCOME TO HIGHTECH DEPARTMENTAL STORE TRACKER APPLICATION OF SPENCERS"<<endl;	
cout<<"                      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	string name;
	cout<<"Enter your name ."<<endl;
	getline(cin,name);
	cout<<endl;
	cout<<endl;
	cout<<"Hello "<<name<<" ."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                         WE WILL FEEL HAPPY TO HELP YOU ^_^ "<<endl;
cout<<"                                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<endl;
	int i;
	char ch,pi;
	int n=20,h=0,y=0;
	char sec[25];
	char line[n];
	ifstream re;
	re.open("acesscode.txt");
		re.getline(line,n);
abc:		
	cout<<"                                         Enter A/a if you are ADMIN ."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                         Enter U/u if you are USER ."<<endl;
	ch=getche();
	if(ch=='A'||ch=='a')
	{
		system("cls");
		int zz=1;
		cout<<endl;
	x11:	
		cout<<endl;
		cout<<endl;
		cout<<"                                                       ENTER THE SECURITY PIN ."<<endl;
		for(i=0;i<9;i++)
		{
			pi=getch();
			cout<<"*";
		sec[i]=pi;
		}
		cout<<endl;
	
		for(i=0;i<9;i++)
		{
			if(sec[i]==line[i])
			{
				++h;
			}
		}
		cout<<endl;
		cout<<endl;	
		
		if(h!=9)
		{
				cout<<"                                         Wrong Password"<<endl;
			++zz;
			if(zz==4)
			{
			
						cout<<endl;	
						cout<<endl;	
						cout<<"                                            !!!!!!!!!ACSESS DENIED!!!!!!!!!!"<<endl;
				goto yy;
			}
			goto x11;
	
		}
		if(h==9)
		{
			dpgo:
				kav123go:
					stcgo:
						stc11go:
		system("cls");
			
			cout<<"                                                 WELCOME ADMIN"<<endl;
		cout<<"                                                ~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<endl;
cout<<endl;
cout<<"                        YOU ARE ADMIN OF THE DEPARTMENTAL STORE ,SO YOU HAVE FOLLOWING CHOICE AVAILABLE "<<endl;
cout<<endl;
cout<<endl;
cout<<"         Enter 1 for Adding new data to the Location containing File"<<endl;
cout<<endl;
cout<<"         Enter 2 for Deleting the Existing Data of Location containing File"<<endl;
cout<<endl;
cout<<"         Enter 3 for Adding new data to the Items containing File"<<endl;
cout<<endl;
cout<<"         Enter 4 for Deleting the Existing Data of Items containg File"<<endl;
cout<<endl;
cout<<"         Enter 5 for Viewing the Deleted Departmental Stores"<<endl;
cout<<endl;
cout<<"         Enter 6 for Viewing the Details of Foot Fall"<<endl;
cout<<endl;
cout<<endl;
char a;
cin>>a;
if(a=='1')
{
	fstream ap1;
	ap1.open("up.txt",ios::app);
	system("cls");
	cout<<endl;
	cout<<endl;
	cout<<"                                      As you have choosen option 1"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                           YOU ARE ALLOWED TO ADD DETAILS OF NEW DEPARTMENTAL STORE ";
	int ni=3;
	cout<<endl;
	cout<<endl;
	char pina[3];
	string loc;
	string land;
	string str1("LOCATION-");
	string str2("LANDMARK-");
	string dot(" .");
	
	ap1<<endl;
	cout<<endl;
add1:
	cout<<"Enter three character Center Code "<<endl;
	cin>>pina;
	cout<<endl;
		ap1<<pina<<endl;


	getline(cin,land);
	str2.append(land);
	cout<<"Enter the location"<<endl;
	getline(cin,loc);
	cout<<endl;
	str1.append(loc);
		ap1<<str1<<endl;
			cout<<"Enter the Landmark to reach that Location "<<endl;
	getline(cin,land);
	cout<<endl;
	str2.append(land);
	str2.append(dot);
	ap1<<str2<<endl;
	cout<<endl;

	cout<<endl;
	char mum;
	cout<<endl;
	add2:
	cout<<"                     Enter Y/y for adding more Departmental Stores OR Enter N/n to Leave"<<endl;
	cin>>mum;
		cout<<endl;
		
	if(mum=='y'||mum=='Y')
	{
		goto add1;
	}
	if(mum=='n'||mum=='N')
	{
	
	}
		cout<<endl;
	cout<<"                                                DETAILS ARE ADDED"<<endl;
	cout<<endl;	
	char dp;
	cout<<endl;	
	cout<<"                    Enter 0 for going back to the main menu OR Enter anything else to exit"<<endl;
cin>>dp;
	if(dp=='0')
	{
		goto dpgo;
	}
	
		}
		if(a=='2')
		{
			system("cls");
			cout<<endl;
			cout<<endl;
			cout<<"                                            As you have choosen option 2 "<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"                             YOU ARE ALLOWED TO DELETE THE EXISTING LOCATIONS OF THE DEPARTMENTAL STORE"<<endl;
		paw:
			cout<<endl;
			cout<<endl;
			fstream dat;
			dat.open("up.txt",ios::in);
			fstream datc;
			int N=100;
			char linE[N];
			datc.open("up1.txt",ios::out);
			while(dat)
			{
				dat.getline(linE,N);
				datc<<linE<<endl;
			}
			dat.close();
			datc.close();
			char pinco[100];
			cout<<"Enter the Center Code of Departmental Store that you want to Delete from the File"<<endl;
			cin>>pinco;
			int N1=100;
			char NAME[100];
			char cha;
			char ca;
			ifstream datc1;
			datc1.open("up1.txt");
			fstream del;
			del.open("delete1.txt",ios::app);
			fstream cop;
			cop.open("up2.txt",ios::out);
			while(datc1)
			{
				datc1.getline(NAME,100);
				int d123=strcmp(pinco,NAME);
				if(d123==0)
				{
					del<<endl;
					del<<NAME<<endl;
					while(cha!='.')
					{
						cha=datc1.get();
						del<<cha;
					}
					del<<endl;
				}
				else
				{
					cop<<NAME<<endl;
				}
			}
			del.close();
			cop.close();
			datc1.close();
			fstream cc1;
			int y123=100;
			char z123[y123];
			cc1.open("up.txt",ios::out);
			ifstream dd1;
			dd1.open("up2.txt");
			while(dd1)
			{
				dd1.getline(z123,y123);
				cc1<<z123<<endl;
			}
		cout<<endl;
		cout<<endl;
			char dp11;
	cout<<"              Enter y/Y for deleting more Departmental Stores OR Enter n/N to stop Deleting"<<endl;
	cin>>dp11;
	cout<<endl;
	cout<<endl;
	if(dp11=='y'||dp11=='Y')
	{
		goto paw;
	}
			if(dp11=='n'||dp11=='N')
			{
			cout<<"                                     DEPARTMENTAL STORES HAVE BEEN DELETED"<<endl;
}
	cout<<endl;
	cout<<endl;
	char dp123;
	cout<<"                  Enter 0 for going back to the main menu OR Enter anything else to exit"<<endl;
cin>>dp123;
	if(dp123=='0')
	{
		goto dpgo;
	}
	

		}
		
		if(a=='3')
		{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"                                                    As you have choosen option 3 "<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"                                   YOU ARE ALLOWED TO ADD NEW ITEMS TO NEW DEPARTMENTAL STORE "<<endl;
		kavgo:   
		cout<<endl;
		cout<<endl;
		char pinaa[3];
		fstream it;
		it.open("items.txt",ios::app);
		cout<<"Enter the Center Code "<<endl;
		cin>>pinaa;
		it<<pinaa<<endl;
		string fir;
		string fir1("1-");
	string sec;
	string sec2("2-");
	cout<<endl;
		cout<<"Enter the first item"<<endl;
		cin>>fir;
			fir1.append(fir);
			it<<fir1<<endl;
				cout<<endl;
			cout<<"Enter the second item"<<endl;
			cin>>sec;
			sec2.append(sec);
			it<<sec2<<endl;
			string thi;
			string thi3("3-");
			cout<<endl;
			cout<<"Enter the third item"<<endl;
			cin>>thi;
			thi3.append(thi);
			it<<thi3<<endl;
			cout<<endl;
			cout<<"Enter the fourth item"<<endl;
			string fou;
			string fou4("4-");
			cin>>fou;
			fou4.append(fou);
			it<<fou4<<endl;
			cout<<endl;
			cout<<"Enter the fifth item"<<endl;
			string fif;
			string fif5("5-");
			string dota(" .");
			cin>>fif;
			fif5.append(fif);
			fif5.append(dota);
			it<<fif5<<endl;
			it<<endl;
			cout<<endl;
			cout<<endl;
			char kav;
			cout<<"                               Enter y/Y for Adding more Items to the Departmental Stores OR Enter n/N to Stop!!! Adding"<<endl;
			cin>>kav;
			if(kav=='y'||kav=='Y')
			{
				goto kavgo;
			}
			if(kav=='n'||kav=='N')
			{
				cout<<endl;
				cout<<endl;
				cout<<"                                            ITEMS ADDED TO NEW DEPARTMENTAL STORE"<<endl;
			}
				char kav123;
	cout<<"                                     Enter 0 for going back to the main menu OR Enter anything else to exit"<<endl;
cin>>kav123;
	if(kav123=='0')
	{
		goto kav123go;
	}
		}
		if(a=='4')
		{
		  system("cls");
		  cout<<endl;
		  cout<<endl;
		  cout<<"                                                As you have choosen option 4"<<endl;
		  cout<<endl;
		  cout<<endl;
		  cout<<"                                YOU ARE ALLOWED TO DELETE THE LIST OF ITEMS IN A PARTICULAR DEPARTMENTAL STORE"<<endl;
		jkgo:
		 cout<<endl;
		 cout<<endl; 
		 fstream dat11;
		 dat11.open("items.txt",ios::in);
		 fstream datc11;
		 int n11=100;
		 char line11[n11];
		 datc11.open("items1.txt",ios::out);
		 while(dat11)
		 {
		 	dat11.getline(line11,n11);
		 	datc11<<line11<<endl;
		 }
		 dat11.close();
		 datc11.close();
		 char pin11[100];
		 cout<<"Enter the Center Code of Departmental Store whom you want to Delete from the Item List"<<endl;
		cin>>pin11;
		int n111=100;
		char name11[100];
		  char ch11;
		  char c11;
		  ifstream datc111;
		  datc111.open("items1.txt");
		  fstream del11;
		  del11.open("delete11.txt",ios::app);
		  fstream cop11;
		  cop11.open("items2.txt",ios::out);
		  while(datc111)
		  {
		  	datc111.getline(name11,100);
		  	int d11=strcmp(pin11,name11);
		  	if(d11==0)
		  	{
		  		del11<<endl;
		  		del11<<name11<<endl;
		  		while(ch11!='.')
		  		{
		  			ch11=datc111.get();
		  			del11<<ch11;
				  }
				  del11<<endl;
			  }
			  else
			  {
			  	cop11<<name11<<endl;
			  }
		  }
		  del11.close();
		  cop11.close();
		  datc111.close();
		  fstream cc11;
		  int y11=100;
		  char z11[100];
		  cc11.open("items.txt",ios::out);
		  ifstream dd11;
		  dd11.open("items2.txt");
		  while(dd11)
		  {
		  	dd11.getline(z11,100);
		  	cc11<<z11<<endl;
		  }
		  cout<<endl;
		  char jk;
		  cout<<endl;
		  cout<<"                   Enter y/Y for Deleting more items containing Departmental Store OR n/N for stop Deleting "<<endl;
		cin>>jk;
		if(jk=='y'||jk=='Y')
		{
			goto jkgo;
		}
	cout<<endl;
	cout<<endl;
		if(jk=='n'||jk=='N')
		{
			cout<<"                                  ITEMS PRESENT IN A SPECIFIC DEPARTMENTAL ARE DELETED"<<endl;
		cout<<endl;
		cout<<endl;
		char jks;
		cout<<"                     Enter 0 for Going back to the Main Menu OR Enter anyting else to leave the program"<<endl;
cin>>jks;
if(jks=='0')
{
	goto dpgo;
}
		}
		
		}
		if(a=='5')
		{
			system("cls");
			cout<<endl;
			cout<<endl;
			cout<<"                                       As you have choosen option 5"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"                                     YOU ARE ALLOWED TO SEE THE DELETED DEPARTMENTAL STORE"<<endl;
	cout<<endl;
	cout<<endl;
	ifstream de12;
	char str[100];
	de12.open("delete1.txt");
	while(de12)
	{
	de12.getline(str,100);
	cout<<str<<endl;	
	}
	cout<<endl;
	char stc;
	cout<<endl;
	cout<<"                            Enter 0 for going back to the Main Menu OR Enter anything else to exit"<<endl;
		cin>>stc;
		if(stc=='0')
		{
			goto stcgo;
		}
		}
		if(a=='6')
		{
			system("cls");
			cout<<endl;
			cout<<endl;
			cout<<"                                    As you have choosen option 6"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"                                     USER DETAILS ARE AS FOLLOWS--"<<endl;
			cout<<endl;
			cout<<endl;
			char uss1[100];
			fstream uss;
			uss.open("userdet.txt",ios::in);
			while(uss)
			{
				uss.getline(uss1,100);
				cout<<uss1<<endl;
			}
			
				char stc111;
	cout<<endl;
		cout<<endl;
	cout<<"                            Enter 0 for going back to the Main Menu OR Enter anything else to exit"<<endl;
		cin>>stc111;
		if(stc111=='0')
		{
			goto stc11go;
		}
		}
		
	}
		for(i=0;i<3;i++)
		{
			y++;
			
							if(y==3)
	{
		goto z;
	}
			if(h!=9)
			{
				goto abc;
			
			}

		}
	

	}
	if(ch=='U'||ch=='u')
	{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"                                                    WELCOME USER ...."<<endl;
		cout<<endl;
		cout<<endl;
		user obj;
		obj.get();
		cout<<endl;
		cout<<endl;
		cout<<endl;
		char ch2;
	jks1go:
		int n1=500;
		system("cls");
			cout<<endl;
				cout<<endl;
		char line1[n1];
		cout<<"                Enter 1 for Location Details ."<<endl;
		cout<<endl;
		cout<<"                Enter 2 for Items Available in the Particular Store ."<<endl;
		cout<<endl;
		cout<<"                Enter 3 for Searching the Location of a Specific Store with known Center Code ."<<endl;
		cout<<endl;
		cin>>ch2;
		cout<<endl;
		cout<<endl;
		if(ch2=='1')
		{
			system("cls");
			cout<<endl;
			cout<<endl;
			cout<"                                             As your entered Choice is 1";
			cout<<endl;
			cout<<endl;
			cout<<"The First line represents the Center Code"<<endl;
		cout<<endl;
			cout<<"The Second line represents Location "<<endl;
			cout<<endl;
			cout<<"The Third line represents Landmark "<<endl;
			cout<<endl;
			cout<<endl;
			ifstream re1;
			re1.open("up.txt");
			while(re1)
			{
				re1.getline(line1,n1);
				cout<<line1<<endl;
			}
			re1.close();
			cout<<endl;
			cout<<endl;
					char jks1;
		cout<<"                     Enter 0 for Going back to the Main Menu OR Enter anyting else to leave the program"<<endl;
cin>>jks1;
if(jks1=='0')
{
	goto jks1go;
}
		}
	if(ch2=='2')
	{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"                                                        As you have entered 2";
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"                               YOU ARE ALLOWED TO SEE THE ITEMS AVAILABLE IN THE PARTICULAR DEPARTMENTAL STORE "<<endl;
		cout<<endl;
		cout<<endl;
		char pin[30];
		char name[30];
		char ch3;
		cout<<"Enter the Center Code of the Departmental Store"<<endl;
		cin>>pin;
		ifstream re2;
		re2.open("items.txt");
		while(re2)
		{
			re2>>name;
			int d=strcmp(pin,name);
			if(d==0)
			{
				while(ch3!='.')
				{
					ch3=re2.get();
					cout<<ch3;
				}
			}				
		
		}
		re2.close();
					cout<<endl;
			cout<<endl;
					char jks2;
		cout<<"                        Enter 0 for Going back to the Main Menu OR Enter anyting else to leave the program"<<endl;
cin>>jks2;
if(jks2=='0')
{
	goto jks1go;
}
		}	
	if(ch2=='3')
	{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"                                               As you have selected 3 "<<endl;
		cout<<endl;
		cout<<endl;
		char ch3;
		char pin3[60];
		cout<<"Enter the Center code of The Store whose Location You want to search "<<endl;
		cin>>pin3;
		cout<<endl;
		cout<<endl;
		cout<<"                                               LOCATION DETAILS ARE AS FOLLOWS--"<<endl;
cout<<endl;
cout<<endl;
char rea[60];
ifstream re3;
re3.open("up.txt");
while(re3)
{
	re3>>rea;
	int e=strcmp(rea,pin3);
	if(e==0)
	{
		while(ch3!='.')
		{
			ch3=re3.get();
			cout<<ch3;
		}
	}
		}		
					cout<<endl;
			cout<<endl;
					char jks3;
					cout<<endl;
					cout<<endl;
		cout<<"   Enter 0 for Going back to the Main Menu OR Enter anyting else to leave the program"<<endl;
cin>>jks3;
if(jks3=='0')
{
	goto jks1go;
}
	}
}
yy:
z:;
}
