#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>
#include <windows.h>
using namespace std;
char f[10] = "f";
char s[10] = "s";
int addr, ad, flag, f1, d, m, i, amt;
float tamt;
class login
{
	public:
	char id[100];
	char pass[100];
	char password[10];
	void getid()
	{ system("cls");
		cout << "\n\t\t\t\t\t\t\t\tEnter your id:";
		cin >> id;
		cout << "\t\t\t\t\t\t\t\tEnter the Password: ";
		cin >> password;
		cout << "\n";
		strcpy(pass,password);
	}
	void displayid()
	{  system("cls");
	system("Color 09");
	    cout << "\n\t\t\t\t\t\t\t||" << "User ID:" << "\t" << "||" << "Password\n\t\t\t\t\t\t\t";
		cout << "|" << id << "\t\t" << "|" << pass << "\n\n";
	}
};
class Detail
{ 
	public:
		int tno;
		char tname[100];
		char bp[100];
		char dest[100];

		int c1,c1fare;
		int c2,c2fare;
		int d,m,y;
		void getDetail()
		{ system("cls");
		system("Color 0A");
			cout << "\n\t\t\t\t\t\t----Add New details----\n";
			cout << "\n\t\t\t\t\t\tTrain no: ";
			cin >> tno;
			cout << "\t\t\t\t\t\tTrain Name: ";
			cin >> tname;
			cout << "\t\t\t\t\t\tBoarding point: ";
			cin >> bp;
			cout << "\t\t\t\t\t\tDestination pt: ";
			cin >> dest;
			cout << "\t\t\t\t\t\tNo of seats in first class & fare per ticket: ";
			cin >> c1 >> c1fare;
			cout << "\t\t\t\t\t\tNo of seats in second class & fare per ticket: ";
			cin >> c2 >> c2fare;
			cout << "\t\t\t\t\t\t\t\tDate of travel\n";
			cout << "\t\t\t\t\t\t\t\tDay: ";
			cin >> d;
			cout << "\t\t\t\t\t\t\t\tMonth: ";
			cin >> m;
			cout << "\t\t\t\t\t\t\t\tYear: ";
			cin >> y;
		}
		void displaydetail()
		{ 
		system("Color 09");
		    cout << "\n|Train No." << "\t" << "|Train Name" << "\t" << "|Boarding pt." << "\t" << "|Destination pt."  <<"\t";
			cout << "|F-Class" << "\t"<< "|F-Class Fare" << "\t" << "|S-Class" << "\t" << "|S-Class Fare" <<"\t";
			cout << "|Day" << "-" << "Month" << "-" << "Year" << "\n";

			cout << "|" << tno << "\t\t" << "|" << tname << "\t\t" << "|" << bp << "\t\t" << "|" << dest <<"\t\t\t";
			cout << "|" << c1 << "\t\t" << "|"<< c1fare << "\t\t" << "|" << c2<< "\t\t" << "|" << c2fare <<"\t\t";
			cout << "|" << d << "-" << m << "-" << y << "\n";
		}
};
class reser
{ 
	public:
	int pnr;
	int tno;
	char tname[100];
	char bp[10];
	char dest[100];
	char pname[10][100];
	int age[20];
	char clas[10];
	int nosr;
	int i;
	int d,m,y;
	int con;
	float amc;
	void getresdet()
	{ 
	system("Color 0A");
		cout<<"\t\t\t\t\t\t\tEnter the details as follows\n";
		cout<<"\t\t\t\t\t\t\tTrain no: ";
		cin>>tno;
		cout<<"\t\t\t\t\t\t\tTrain name: ";
		cin>>tname;
		cout<<"\t\t\t\t\t\t\tBoarding point: ";
		cin>>bp;
		cout<<"\t\t\t\t\t\t\tDestination pt: ";
		cin>>dest;
		cout<<"\t\t\t\t\t\t\tNo of seats required: ";
		cin>>nosr;
		for(i=0;i<nosr;i++)
		{
			cout<<"\t\t\t\t\t\t\tPassenger name: ";
			cin >> pname[i];
			cout<<"\t\t\t\t\t\t\tPassenger age: ";
			cin>>age[i];
		}
		cout<<"\t\t\t\t\t\t\tEnter the class f-first class s-second class: ";
		cin >> clas;
		cout<<"\t\t\t\t\t\t\tDate of travel in Format (dd mm yyyy) : ";
		cin>>d>>m>>y;
		cout<<"\t\t\t\t\t\t\tEnter the concession category\n";
		cout<<"\t\t\t\t\t\t\t1.Military\n\t\t\t\t\t\t\t2.Senior citizen\n";
		cout<<"\t\t\t\t\t\t\t3.Children below 5 yrs\n\t\t\t\t\t\t\t4.None\n\t\t\t\t\t\t\t";
		cin>>con;
		cout<<"\t\t\t\t\t\t\t!------END OF GETTING DETAILS------!\n";
	}
	void displayresdet()
	{ system("cls");
		cout<<"\t\t\t\t\t\t\t\tPnr no: "<<pnr;
		cout<<"\n\t\t\t\t\t\t\t\tTrain no: "<<tno;
		cout<<"\n\t\t\t\t\t\t\t\tTrain name: "<<tname;
		cout<<"\n\t\t\t\t\t\t\t\tBoarding point: "<<bp;
		cout<<"\n\t\t\t\t\t\t\t\tDestination pt: "<<dest;
		cout<<"\n\t\t\t\t\t\t\t\tNo of seats reserved: "<<nosr;
		for(i=0;i<nosr;i++)
		{
			cout<<"\nPassenger name: ";
            puts(pname[i]);
			cout<<"Passenger age: "<<age[i];
		}

		cout<<"\n\t\t\t\t\t\t\t\tYour class: ";puts(clas);
		cout<<"\n\t\t\t\t\t\t\t\tDate of reservation: "<<d<<"-"<<m<<"-"<<y;
		cout<<"\n\t\t\t\t\t\t\t\tYour concession category: "<<con;
		cout<<"\n\t\t\t\t\t\t\t\tYou must pay: "<<amc<<endl;
		cout<<"\t\t\t\t\t\t\t\t*************\n";
	}
};
class canc
{
    public:
    int pnr;
    int tno;
    char tname[100];
    char bp[10];
    char dest[100];
    char pname[10][100];
    int age[20];
    int i;
    char clas[10];
    int nosc;
    int d, m, y;
    float amr;
    void getcancdet()
    {
        cout << "\t\t\t\t\t\t\t\tEnter the details as follows\n";
        cout << "\t\t\t\t\t\t\t\tPnr no:";
        cin >> pnr;
        cout << "\t\t\t\t\t\t\t\tDate of cancellation:";
        cin >> d >> m >> y;
        cout << "\t\t\t\t\t\t\t\t..----END OF GETTING DETAILS----..\n";
    }
    void displaycancdet()
    {
        cout << "\t\t\t\t\t\t\t\tPnr no:" << pnr;
        cout << "\n\t\t\t\t\t\t\t\tTrain no:" << tno;
        cout << "\n\t\t\t\t\t\t\t\tTrain name:";
        cout << tname;
        cout << "\t\t\t\t\t\t\t\tBoarding point:";
        cout << bp;
        cout << "\t\t\t\t\t\t\t\tDestination pt:";
        cout << dest;
        cout << "\n\t\t\t\t\t\t\t\tYour class:";
        cout << clas;
        cout << "\t\t\t\t\t\t\t\tno of seats to be cancelled:" << nosc;
        for (i = 0; i < nosc; i++)
        {
            cout << "\t\t\t\t\t\t\t\tPassenger name:";
            cout << pname[i];
            cout << "\t\t\t\t\t\t\t\tpassenger age:" << age[i];
        }
        cout << "\n\t\t\t\t\t\t\t\tDate of cancellation:" << d << "-" << m << "-" << y;
        cout << "\n\t\t\t\t\t\t\t\tYou can collect:" << amr << "rs" << endl;
        cout << "\t\t\t\t\t\t\t\t***************\n";
        cout << "\t\t\t\t\t\t\t\t------END OF CANCELLATION-----.\n";
        cout << "\t\t\t\t\t\t\t\t***************\n";
    }
};
void manage();
void can();
void user();
void database();
void res();
void displaypassdetail();
void cancell();
void enquiry();
int main(void)
{
	int ch;
    system("CLS");
    system("Color 0B");
	cout << "\n\n\t\t\t\t!!----------- IRCTC INDIAN RAILWAY CATERING AND TOURISM CORPORATION -----------!!\n";
	do
	{
		cout << "\n\n\t\t\t\t\t\t\t\t MAIN MENU \n";
		cout << "\t\t\t\t\t\t\t\t1.Admin mode\n\t\t\t\t\t\t\t\t2.User mode\n\t\t\t\t\t\t\t\t3.Exit \n";
		cout << "\t\t\t\t\t\t\t\tEnter your choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				database();
				break;
			case 2:
				user();
				break;
			default:
				exit(0);
		}
	}while(ch<3);

	return 0;
}

void database()
{
	char password[10];
	char pass[10] = "01234";
	cout << "\n\t\t\t\t\t\t\t\tEnter the Admin Password: ";
	cin >> password;
	Detail a;
	fstream f;
	int ch;
	char c;
	if(strcmp(pass,password)!=0)
	{
		cout << "\t\t\t\t\t\t\t\tEnter the password correctly \n";
		cout << "\t\t\t\t\t\t\t\tYou are not permitted to login this mode\n";
	}
	if(strcmp(pass,password)==0)
	{
		char c;
		system("Color 0E");
        system("cls");
		do
		{ 
			cout << "\n\n\t\t\t\t\t\t\t --- ADMINISTRATOR MENU --- \n";
			cout << "\n\n\t\t\t\t\t\t\t1. Add details of Trains\n";
			cout << "\t\t\t\t\t\t\t2. Display details \n";
			cout << "\t\t\t\t\t\t\t3. User Management \n";
			cout << "\t\t\t\t\t\t\t4. Diplay Passenger details \n";
			cout << "\t\t\t\t\t\t\t5. Return to Main Menu \n";
			cout << "\t\t\t\t\t\t\tEnter your choice: ";
			cin >> ch;

			switch(ch)
			{
				case 1:
					f.open("t.dat",ios::out|ios::binary| ios::app);
					do
					{
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					cout << "\n\t\t\t\t\t\t\t\tDo you want to add one more record?\n";
					cout << "\t\t\t\t\t\t\t\ty-for Yes\n\t\t\t\t\t\t\t\tn-for No\n";
					cin >> c;
					}
                    while(c=='y');
					f.close();
					break;
				case 2:
					f.open("t.dat",ios::in|ios::out|ios::binary|ios::app);
					f.seekg(0);
					while(f.read((char *) & a,sizeof(a)))
					{
					a.displaydetail();
					}
					f.close();
					break;
				case 3:
					manage();
					break;
				case 4:
					displaypassdetail();
					break;
			}
		}while(ch<=4);
	}
}

void res()
{
    Detail a;
    reser b;
    fstream f1, f2;
    time_t t;
    f1.open("t.dat", ios::in | ios::out | ios::binary);
    f2.open("p.dat", ios::in | ios::out | ios::binary | ios::app);
    int ch;
    b.getresdet();
    while (f1.read((char *)&a, sizeof(a)))
    {
        if (a.tno == b.tno)
        {
            if (strcmp(b.clas, f) == 0)
            {
                if (a.c1 >= b.nosr)
                {
                    amt = a.c1fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c1);
                    f1.seekp(addr - (7 * ad));
                    a.c1 = a.c1 - b.nosr;
                    f1.write((char *)&a.c1, sizeof(a.c1));
                    if (b.con == 1)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:DEFENCE PERSONNEL\n";
                        b.amc = b.nosr * ((amt * 50) / 100);
                    }
                    else if (b.con == 2)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:SENIOR CITIZEN\n";
                        b.amc = b.nosr * ((amt * 60) / 100);
                    }
                    else if (b.con == 3)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:CHILDERN BELOW FIVE\n";
                        b.amc = 0.0;
                    }
                    else if (b.con == 4)
                    {
                        cout << "\t\t\t\t\t\t\t\tYou cannot get any concession\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout<<b.pnr;
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "\t\t\t\t\t\t\t**Sorry req seats not available**\n";
                }
            }
            else if (strcmp(b.clas, s) == 0)
            {
                if (a.c2 >= b.nosr)
                {
                    amt = a.c2fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c2);
                    f1.seekp(addr - (5 * ad));
                    a.c2 = a.c2 - b.nosr;
                    f1.write((char *)&a.c2, sizeof(a.c2));
                    if (b.con == 1)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:MILITARY PRESONNEL\n";
                        b.amc = b.nosr * ((amt * 50) / 100);
                    }
                    else if (b.con == 2)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:SENIOR CITIZEN\n";
                        b.amc = b.nosr * ((amt * 60) / 100);
                    }
                    else if (b.con == 3)
                    {
                        cout << "\t\t\t\t\t\t\t\tConcession category:CHILDERN BELOW FIVE\n";
                        b.amc = 0.0;
                    }
                    else if (b.con == 4)
                    {
                        cout << "\t\t\t\t\t\t\t\tYou cannot get any concession\n";
                        b.amc = b.nosr * amt;
                    }
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n\t\t\t\t\t-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "\t\t\t\t\t\t\t**Sorry req no of seats not available*\n";
                }
            }
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "!\n";
    }
    f1.close();
    f2.close();
}

void displaypassdetail()
{
system("Color 09");
	cout << "\n\n\t\t\t\t\t\t\t--------Passenger Details--------\n";
	fstream f;
	reser b;
	f.open("p.dat",ios::in|ios::out|ios::binary);
	f.seekp(0);
	while(f.read((char *) & b,sizeof(b)))
	{
		b.displayresdet();
	}
	f.close();
}
void enquiry()
{ system("cls");
system("Color 09");
    fstream f;
    f.open("t.dat",ios::in|ios::out|ios::binary);
    Detail a; //class
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displaydetail();
    }
}
void cancell()

{ system("cls");
system("Color 0A");
    Detail a;
    reser b;
    canc c;
    fstream f1, f2, f3;
    f1.open("t.dat",ios::in|ios::out|ios::binary);
    f2.open("p.dat",ios::in|ios::out|ios::binary);
    f3.open("cn.dat",ios::in|ios::out|ios::binary);
    cout<<"\n\t\t\t\t\t\t\t\t**CANCELLATION MENU***\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if (b.pnr == c.pnr)
        {
            c.tno = b.tno;
            strcpy(c.tname, b.tname);
            strcpy(c.bp, b.bp);
            strcpy(c.dest, b.dest);
            c.nosc = b.nosr;
            for (int j = 0; j < c.nosc; j++)
            {
                strcpy(c.pname[j], b.pname[j]);
                c.age[j] = b.age[j];
            }
            strcpy(c.clas, b.clas);
            if (strcmp(c.clas, f) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c1 = a.c1 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c1);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.c1, sizeof(a.c1));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling at the date of departure\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling at the month of departure\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling one month before the date of departure\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "\t\t\t\t\t\t\t\tCancelling after the departure\n";
                            cout << "\t\t\t\t\t\t\t\tYour request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, s) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c2 = a.c2 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c2);
                        f1.seekp(addr - (5 * ad));
                        f1.write((char *)&a.c2, sizeof(a.c2));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling at the date of departure\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling at the month of departure\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "\t\t\t\t\t\t\t\tYou are cancelling one month before the date of departure\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "\t\t\t\t\t\t\t\tCancelling after the departure\n";
                            cout << "\t\t\t\t\t\t\t\tYour request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag = 0;
        }
    }
    h:
    if(flag==0)
    {
            cout << "\t\t\t\t\t\t\t\tEnter the correct pnr no\n";
    }
    f1.close();
    f2.close();
    f3.close();
}
void can()
{ system("cls");
system("Color 0C");
    int ch;
    do
    {
        cout << "\t\t\t\t\t\t\t\t ..CANCELLATION MENU   \n";
        cout << "\t\t\t\t\t\t\t\t1.Cancel\n\t\t\t\t\t\t\t\t2.Return to the main menu\n";
        cout << "\t\t\t\t\t\t\t\tEnter your choice:";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            cancell();
            break;
        }
    } while (ch == 1);
}
void user()
{ system("cls");
system("Color 0E");
	login a;
	int ch;
	cout<<"\n\n\t\t\t\t\t\t\t\t-----Login User-----\n";
	fstream f;
	f.open("id.txt",ios::in|ios::out|ios::binary);
	while(f.read((char *) & a,sizeof(a)))
	{
		do
			{
				cout<<"\n\t\t\t\t\t\t\t\t1.Reserve\n\t\t\t\t\t\t\t\t2.Cancel\n\t\t\t\t\t\t\t\t3.Enquiry\n\t\t\t\t\t\t\t\t4.Return to the main menu\n";
				cout<<"\t\t\t\t\t\t\t\tEnter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:
						res();
						break;
					case 2:
						cancell();
						break;
					case 3:
						enquiry();
						break;
                    case 4:
						main();
						break;
				}
		}while(ch<=3);
	}
}

void manage()
{ system("cls");
system("Color 0E");
	int ch;
	fstream f;
	char c;
	login a;
	cout<<"\n\n\t\t\t\t\t\t---WELCOME TO THE USER MANAGEMENT MENU---\n";
	do
	{
		cout << "\n\t\t\t\t\t\t\t1. Create id database\n";
		cout << "\t\t\t\t\t\t\t2. Display details\n";
		cout << "\t\t\t\t\t\t\t3. Return to the main menu\n";
		cout << "\t\t\t\t\t\t\tEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				f.open("id.txt",ios::out|ios::binary|ios::app);
				do
				{
					a.getid();
					f.write((char *) & a,sizeof(a));
					cout << "\t\t\t\t\t\t\tDo you want to add one more record\n";
					cout << "\t\t\t\t\t\t\ty-Yes\n\t\t\t\t\t\t\tn-No\n\t\t\t\t\t\t\t";
					cin>>c;
				}while(c == 'y');
				f.close();
				break;
			case 2:
				f.open("id.txt",ios::in|ios::out|ios::binary);
				f.seekg(0);
				while(f.read((char *) & a,sizeof(a)))
				{
					a.displayid();
				}
				f.close();
				break;
			}
		}while(ch<=2);
}