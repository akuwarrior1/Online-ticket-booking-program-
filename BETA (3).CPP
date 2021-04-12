#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
void main();
void homepage();
void bookingmenu();
void adminmenus();
void start(int loc);
void rectangle(int k);
class userdetail
{
	private:
	int id;
	char name[30];
	char usrname[30];
	char password[30];
	char password1[30];
	int cap;
	int money;
	char seattype[30];
	char stand[10];
	public:
	void set_password()
	{
		char ch,ch1;
		cout<<"Enter password : ";
		gets(password);
		cout<<"Confirm password : ";
		gets(password1);
	}
	void set_name()
	{
		cout<<"Enter name"<<" : ";
		gets(name);
	}

	void set_usrname()
	{
		cout<<"Enter username"<<" : ";
		gets(usrname);
	}
	void setno_seats3(int x)
	{
		cap=x;
	}
	void set_cap()
	{
		cin>>cap;
	}
	void displaytickets()
	{
		cout <<"Name"<<" : "<<name<<endl;
		cout <<"Username"<<" : "<<usrname<<endl;
		cout <<"Booking Id"<<" : "<<id<<endl;
		cout <<"Seat type"<<" : "<<seattype<<endl;
		cout <<"Capacity"<<" : "<<cap<<endl;
		cout <<"Total amount paid"<<" : "<<money<<endl;
	}
	void show()
	{
		cout<<"Username"<<":"<<usrname<<endl;
		cout<<"Account name"<<":"<<name<<endl;
		cout<<"Password"<<":"<<password<<endl;
	}
	void display()
	{
		cout <<"Logged in as "<<usrname;
	}
	void set_money_gold()
	{
		money = cap * 500;
	}
	void set_money_silver()
	{
		money = cap * 250;
	}
	void set_money_platinum()
	{
		money = cap * 750;
	}
	void setname(char x[10])
	{
		strcpy(name,x);
	}
	void setpassword(char y[10])
	{
		strcpy(password,y);
	}
	int get_money()
	{
		return money;
	}
	int get_cap()
	{
		return cap;
	}
	char *get_seattype()
	{
		return seattype;
	}
	char* get_stand()
	{
		return stand;
	}
	char* get_usrname()
	{
		return usrname;
	}
	char* get_name()
	{
		return name;
	}
	char* get_password()
	{
		return password;
	}
	char* get_password1()
	{
		return password1;
	}
	void set_bookingid()
	{
		randomize();
		id = random(1000);
	}
	int get_bookingid()
	{
		return id;
	}
} s,fs;
class seat
{
	char stand[10];
	char type[10];
	int no_seats;
	public:
	void enter()
	{
		cout<<"  Enter the type of stand: ";
		gets(type);
		cout<<endl;
		cout<<"  Enter the name of the stand: ";
		gets(stand);
		cout<<endl;
		cout<<"  Enter the no of seats: ";
		cin>>no_seats;
	}
	void display()
	{
		cout<<"  "<<type<<"  \t\t\t"<<stand<<"\t\t\t"<<no_seats<<endl;
	}
	char* getstand()
	{
		return stand;
	}
	int getno_seats()
	{
		return no_seats;
	}
	int setno_seats(int x)
	{
		no_seats=no_seats-x;
		return no_seats;
	}
	void setno3_seats(int x)
	{
		no_seats = no_seats + x;
	}
	void setno4_seats(int x)
	{
		no_seats = no_seats - x;
	}
	int setno1_seats(int x)
	{
		no_seats=no_seats+x;
		return no_seats;
	}
	int setno_seats1(int x)
	{
		no_seats=x;
		return no_seats;
	}
}j,fj;
//------------------------------Graphics begin--------------------------------------
//starting page
void clouds()
{
	settextstyle(7,0,5);
	outtextxy(145,160,"CLOUD TICKETS");
	setcolor(9);
	{                                       //cloud 1
		arc(50,50,70,170,20);
		arc(70,40,40,150,20);
		arc(95,40,40,130,20);
		arc(120,40,40,130,20);
		arc(140,45,15,120,20);
		arc(40,65,100,200,20);
		arc(40,80,140,275,20);
		arc(60,90,190,300,20);
		arc(85,95,210,320,20);
		arc(110,95,230,300,20);
		arc(155,60,30,90,20);
	}
	{       				//cloud 2
		arc(150,80,70,170,20);
		arc(170,70,40,150,20);
		arc(195,70,40,130,20);
		arc(220,70,40,130,20);
		arc(240,75,15,120,20);
		arc(140,95,100,200,20);
		arc(140,110,140,275,20);
		arc(160,120,190,300,20);
		arc(185,125,210,320,20);
		arc(210,125,230,330,20);
		arc(240,120,220,350,20);
		arc(250,105,280,20,20);
		arc(255,90,320,90,20);
	}
	{                                       //cloud 3
		arc(390,80,70,170,20);
		arc(410,70,40,150,20);
		arc(435,70,40,130,20);
		arc(460,70,40,130,20);
		arc(480,75,15,120,20);
		arc(380,95,100,200,20);
		arc(380,110,140,275,20);
		arc(400,120,190,300,20);
		arc(425,125,210,320,20);
		arc(450,125,230,330,20);
		arc(480,120,220,350,20);
		arc(490,105,280,20,20);
		arc(495,90,320,90,20);
	}
	{                                       //cloud 4
		arc(490,50,70,170,20);
		arc(510,40,40,150,20);
		arc(535,40,40,130,20);
		arc(560,40,40,130,20);
		arc(580,45,15,120,20);
		arc(480,65,100,130,20);
		arc(525,95,220,320,20);
		arc(550,95,230,330,20);
		arc(580,90,220,350,20);
		arc(590,75,280,20,20);
		arc(595,60,320,90,20);
	}
	{                                       //cloud 1`
		arc(45,235,70,170,20);
		arc(65,225,40,150,20);
		arc(90,225,40,130,20);
		arc(115,225,40,130,20);
		arc(135,230,15,120,20);
		arc(35,250,100,200,20);
		arc(35,265,140,275,20);
		arc(55,275,190,300,20);
		arc(80,280,210,320,20);
		arc(105,280,230,330,20);
		arc(135,275,220,350,20);
		arc(145,260,280,20,20);
		arc(150,245,320,90,20);
	}
	{       				//cloud 2`
		arc(190,265,70,170,20);
		arc(210,255,40,150,20);
		arc(235,255,40,130,20);
		arc(260,255,40,130,20);
		arc(280,260,15,120,20);
		arc(180,280,100,200,20);
		arc(180,295,140,275,20);
		arc(200,305,190,300,20);
		arc(225,310,210,320,20);
		arc(250,310,230,330,20);
		arc(280,305,220,350,20);
		arc(290,290,280,20,20);
		arc(295,275,320,90,20);
	}
	{                                       //cloud 3`
		arc(350,265,70,170,20);
		arc(370,255,40,150,20);
		arc(395,255,40,130,20);
		arc(420,255,40,130,20);
		arc(440,260,15,120,20);
		arc(340,280,100,200,20);
		arc(340,295,140,275,20);
		arc(360,305,190,300,20);
		arc(385,310,210,320,20);
		arc(410,310,230,330,20);
		arc(440,305,220,350,20);
		arc(450,290,280,20,20);
		arc(455,275,320,90,20);
	}
	{                                       //cloud 4`
		arc(505,235,70,170,20);
		arc(525,225,40,150,20);
		arc(550,225,40,130,20);
		arc(575,230,40,130,20);
		arc(595,230,15,120,20);
		arc(495,250,100,200,20);
		arc(495,265,140,275,20);
		arc(515,275,190,300,20);
		arc(540,280,210,320,20);
		arc(565,280,230,330,20);
		arc(595,275,220,350,20);
		arc(605,260,280,20,20);
		arc(610,245,320,90,20);
	}
}
void start1()
{
	clouds();
	setbkcolor(3);
	setcolor(15);
	gotoxy(35,25);
	printf("Loading...");
	for(int j=0;j<30;j++)
	{
		circle(200+j,350,15);
		delay(2);
	}
	for(int i=30;i<=225;i++)
	{
		circle(200+i,350,15);
		delay(40);
	}
	gotoxy(28,25);
	printf("Press 'Enter' to continue");
	getch();
}
//stadium part
void field()
{
	ellipse(332,237,0,360,150,135);
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(332,237,150,135);
}
void top()
{
	line(150,25,525,25);
	line(245,100,450,100);
}
void stand()
{
	line(265,25,235,100);   //topleft1
	line(421,25,451,100);   //topright1
	line(626,200,525,170); //leftup1
	line(626,280,525,310); //leftdown
	line(220,378,275,470); //bottomleft
	line(450,380,410,470); //bottomright
	line(50,200,157,170);
	line(50,280,157,310);
}
void name()
{
	ifstream fin("seatr.dat",ios::binary);
	while(fin.read((char*)&j,sizeof(j)))
	{
		if(strcmp(j.getstand(),"P1")==0)
		{
			gotoxy(36,5);
			cout<<"PLATINUM SEATS";
			gotoxy(36,6);
			cout<<"P1"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"P2")==0)
		{
			gotoxy(34,25);
			cout<<"PLATINUM SEATS";
			gotoxy(34,27);
			cout<<" P2"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"G1")==0)
		{
			gotoxy(10,15);
			cout<<"GOLD SEATS";
			gotoxy(10,16);
			cout<<"G1"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"G2")==0)
		{
			gotoxy(67,15);
			cout<<"GOLD SEATS";
			gotoxy(67,16);
			cout<<"G2"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"S1")==0)
		{
			gotoxy(14,5);
			cout<<"SILVER SEATS";
			gotoxy(16,6);
			cout<<"S1"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"S2")==0)
		{
			gotoxy(63,6);
			cout<<"SILVER SEATS";
			gotoxy(65,7);
			cout<<"S2"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"S4")==0)
		{
			gotoxy(13,24);
			cout<<"SILVER SEATS";
			gotoxy(16,25);
			cout<<"S4"<<"("<<j.getno_seats()<<")";
		}
		if(strcmp(j.getstand(),"S3")==0)
		{
			gotoxy(63,24);
			cout<<"SILVER SEATS";
			gotoxy(65,25);
			cout<<"S3"<<"("<<j.getno_seats()<<")";
		}
	}
	fin.close();
}
void stadium()
{
	int gd=DETECT, gmode;
	initgraph(&gd,&gmode,"C:/TURBOC3/BGI");
	field();
	line(155,183,155,300); //  left 2
	line(50,125,50,370);     //left 1
	line(221,380,445,380);       //bottom 1
	line(151,470,524,470);         //bottom2
	line(626,125,626,370);   //right2
	line(525,173,525,300);   //right1
	arc(150,125,90,180,100); // topl1
	arc(245,190,90,175,90); //   topl2
	arc(525,125,0,90,100);   //topr1
	arc(435,190,0,90,90);//topr2  90.5
	arc(235,300,180,264,80); // bottoml1
	arc(150,370,180,270,100);// bottoml2
	arc(445,300,270,0,80);   //bottomr1
	arc(525,370,270,0,100);  //bottomr2
	top();
	stand();
	name();
	line(285,200,285,270);
	line(375,200,375,270);
	rectangle(275,210,385,260);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(278,230,getmaxcolor());
	floodfill(287,230,getmaxcolor());
	floodfill(378,230,getmaxcolor());
	getch();
}
//---------------------------login----------------------------------------------------
void signup()
{
	char tempname[30]; // get name
	clrscr();
	cleardevice();
	settextstyle(7,HORIZ_DIR,6);
	setcolor(RED);
	outtextxy(120,20,"CREATE ACCOUNT");
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	s.set_name();
	s.set_usrname();
	label:
	strcpy(tempname,s.get_usrname());
	ofstream fout("login1.dat",ios::binary|ios::app);
	ifstream fin("login1.dat",ios::binary);
	if(!fin)
	{
		cout <<"Error in opening file!!";
		return;
	}
	while(fin.read((char*)&fs,sizeof(fs)))
	{
		if(strcmp(tempname,fs.get_usrname())==0)
		{
			cout << "Name already taken, try again !!\n";
			s.set_usrname();
			getch();
			fin.close();     // need to close as it is re-opened
			goto label;
		}
	}
	s.set_password();
	if(strlen(s.get_usrname())==0||strlen(s.get_name())==0||strlen(s.get_password())==0)
	{
		cout<<"You cannot leave any details blank"<<endl;
		getch();
	}
	else if(strcmp(s.get_password(),s.get_password1())!=0)
	{
		cout<<"Passwords do not match"<<endl;
		cout<<"Re-enter the details"<<endl;
		getch();
		signup();
	}
	else
	{
		fout.write((char*)&s,sizeof(s));
		cout <<"\nAccount created successfully"<<endl;
		getch();
	}
	fout.close();
	fin.close();
}
//--------------------------------BOOKING PART---------------------------------
void ticketloading()
{
	clrscr();
	cleardevice();
	gotoxy(35,10);
	cout<<"TICKET";
	line(200,85,400,85);
	line(200,215,400,215);
	for(int r=85,l=0;l<3;r+=52,l++)
	{
		line(200,r,200,r+26);
		line(400,r,400,r+26);

	}
	for(int f=85,d=0;d<5;f+=26,d++)
	{
		line(200,f,215,f);
		line(385,f,400,f);
	}
	for(int g=111,s=0;s<2;s++,g+=52)
	{
		line(215,g,215,g+26);
		line(385,g,385,g+26);
	}
	rectangle(230,100,370,200);
	setbkcolor(9);
	gotoxy(33,22);
	printf("Booking ticket...");
	for(int j=0;j<=29;j++)
	{
		circle(200+j,300,15);
		delay(2);
	}
	for(int i=0;i<=225;i++)
	{
		circle(200+i,300,15);
		delay(20);
	}
	gotoxy(25,22);
	printf("Press 'Enter' to continue..");
	getch();
}
void ticket()
{
	cout<<"DETAILS OF TICKET"<<endl;
	cout<<"\t\t-------------------------------------------------------" <<endl;
	cout<<"\t\t\tNAME :"<<s.get_name();
	cout<<"\t\t\tTIME :10:30AM"<<endl;
	cout<<"\t\t\tUSERNAME :"<<s.get_usrname();
	cout<<"\t\tNO OF SEATS:"<<s.get_cap()<<endl;
	cout<<"\t\t\tSTAND :"<<s.get_stand();
	cout<<"\t\tTYPE OF SEAT :"<<s.get_seattype()<<endl;
	cout<<"\t\t\tNAME OF STADIUM :LORDS"<<endl;
	cout<<"\t\t-------------------------------------------------------" <<endl;
	cout<<"PLEASE MAINTAIN THE TICKET FOR FUTURE REFERENCE"<<endl;
}
int money(int m)
{
	clrscr();
	cleardevice();
	int gd1=DETECT,gm1;
	initgraph(&gd1,&gm1,"C:\\TURBOC3\\BGI ");
	int n[5], flag=0,x;
	setbkcolor(9);
	ifstream fin("booking.dat ",ios::binary);
	if(!fin)
	{
		cout <<"No bookings till now!!!";
		getch();
		return 1;
	}
	flag++;
	cout<<"\n\t\t\tMoney to be paid through pytm only.";
	if(m==1)
	{
		s.set_money_gold();
	}
	if(m==2)
	{
		s.set_money_silver();
	}
	if(m==3)
	{
		s.set_money_platinum();
	}
	cout<<"\n\n\nEnter your pytm pin:";
	cout<<"\t\t\t\t(press enter after every digit)";
	for(int i=0;i<4;i++)
	{
		line(162+23*i,60,162+23*i,80);
		line(162+23*i,80,182+23*i,80);
		line(182+23*i,80,182+23*i,60);
		line(162+23*i,60,182+23*i,60);
	}
	for(int j=0;j<4;j++)
	{
		gotoxy(22+3*j,5);
		cin>>n[j];
	}
	cout<<"\nTotal amount to be paid: ";
	if(m==1)
	{
		cout << s.get_money();
	}
	if(m==2)
	{
		cout << s.get_money();
	}
	if(m==3)
	{
		cout << s.get_money();
	}
	int k;
	cout<<"\n\nDo you want complete the transaction: ";
	cout<<"\n\t1. Yes\n\t2. No";
	lbl:
	cout<<"\n\nEnter your choice: ";
	cin>>k;
	switch(k)
	{
		case 1: for(int i=30;i<=225;i++)
			{
				delay(5);
			}
			cout<<"\n\nTransaction completed.";
			cout<<"\nBill settled";
			getch();
			x=0;
			break;
		case 2: cout<<"\n\nMoney not paid.\n\tPlease book again.";
			x=1;
			break;
		default : cout<<"\nInvalid Choice";
			goto lbl;
	}
	getch();  // no need to continue further
	clrscr();
	fin.close();
	return x;
}
void booktickets(char name1[10],char password1[10])
{
	char ch,ch1;
	int choice,n;
	ofstream fout1("booking.dat",ios::binary|ios::app);
	ifstream fin1("booking.dat",ios::binary);
	ifstream fin("seatr.dat",ios::binary);
	fstream fio("seatr.dat",ios::binary|ios::in|ios::out);

	if(!fout1||!fio||!fin||!fin1)
	{
		cout <<"Error in opening file!";
		return;
	}
	while(fin1.read((char*)&fs,sizeof(fs)))
	{

		if(strcmp(name1,fs.get_usrname())==0)
		{
			gotoxy(7,10);
			cout <<"You already have a booking!"<<endl;
			gotoxy(7,12);
			cout <<"If you wish to change your booking kindly delete your previous booking."<<endl;
			getch();
			main();
		}
	}
	gotoxy(10,10);
	cout<<"Showing stadium..."<<endl;
	gotoxy(10,12);
	cout<<"This will take a moment.."<<endl;
	for(int i=30;i<=225;i++)
	{
			delay(10);
	}
	stadium();
	getch();
	clrscr();
	cleardevice();
	setbkcolor(9);
	int z=0;
	int y=1;
	cout<<"\n  Sno\t\tType of the stand\t\tStand\t\t\tSeats"<<endl;
	while(fin.read((char*)&j,sizeof(j)))
	{
		cout<<"  "<<y<<"\t\t";
		{
			j.display();
			y++;
		}
	}
	cout <<"\nENTER YOUR CHOICE OF STAND"<<" : ";
	cin >> choice;
	switch(choice)
	{
		case 1: while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"G1")==0)
				{
					if(j.getno_seats()==0)
					{
						cout<<"NO SEATS LEFT FOR GOLD!";
						break;
					}
					cout<<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10) : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"GOLD SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=1;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						s.setname(name1);
						s.setpassword(password1);
						strcpy(s.get_seattype(),"GOLD");
						strcpy(s.get_stand(),"G1");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_gold();
						clrscr();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		case 2: while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"G2")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR GOLD STAND(G2)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"GOLD SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=1;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"GOLD");
						strcpy(s.get_stand(),"G2");
						j.setno_seats(s.get_cap());
						s.set_money_gold();
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		case 3: while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"S1")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR SILVER(S1)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"SIlVER SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=2;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"SILVER");
						strcpy(s.get_stand(),"S1");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_silver();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		  case 4:while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"S2")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR SILVER(S2)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"SILVER(S2) SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=2;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"SILVER");
						strcpy(s.get_stand(),"S2");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_silver();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		  case 5:while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"S3")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR SILVER(S3)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"SILVER SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=2;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"SILVER");
						strcpy(s.get_stand(),"S3");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_silver();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		 case 6:while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"S4")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR SILVER(S4)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"SILVER(S4) SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=2;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"SILVER");
						strcpy(s.get_stand(),"S4");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_silver();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;


						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		 case 7:while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"P1")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR PLATINUM(P1)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"PLATINUM SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=3;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"PLATINUM");
						strcpy(s.get_stand(),"P1");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_platinum();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
							cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		case 8:while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),"P2")==0)
				{
					if(j.getno_seats()==0)
					{
						cout <<"NO SEATS LEFT FOR PLATINUM(P2)!";
						break;
					}
					cout <<"ENTER NUMBER OF SEATS YOU WANT TO BOOK(MAX=10)"<<" : ";
					s.set_cap();
					if(s.get_cap()>10)
					{
						cout <<"MAX = 10 !";
						break;
					}
					if(j.getno_seats()-s.get_cap()<0)
					{
						cout <<"PLATINUM SEATS ARE FULL!"<<endl;
						cout <<s.get_cap()<< "SEATS CANNOT BE FILLED!"<<endl;
						break;
					}
					n=3;
					z=money(n);
					if(z==0)
					{
						ticketloading();
						strcpy(s.get_seattype(),"PLATINUM");
						strcpy(s.get_stand(),"P2");
						j.setno_seats(s.get_cap());
						fio.seekp(fio.tellp()-sizeof(j),ios::beg);
						fio.write((char*)&j,sizeof(j));
						s.set_money_platinum();
						cleardevice();
						gotoxy(30,2);
						cout <<"YOUR BOOKING HAS BEEN CONFIRMED!"<<endl;
						ticket();
						getch();
						s.set_bookingid();
						fout1.write((char*)&s,sizeof(s));
						cout <<endl;
						cout <<"ENJOY THE MATCH";
					}
				}
			}
			break;
		case 9: stadium();
			break;
		default : cout <<"Enter valid choice!"<<endl;
	}
	fout1.close();
	fin1.close();
	fio.close();
	fin.close();
}
void modifybooking(char name1[30])
{
	int no_seats;
	userdetail s1;
	int fl1=0;
	char check;
	char stand[40];
	char seattype[30];
	int choice;
	fstream fio("booking.dat",ios::binary|ios::in|ios::out);
	fstream fio1("seatr.dat",ios::binary|ios::in|ios::out);
	while(fio.read((char*)&s,sizeof(s)))
	{
		if(strcmp(name1,s.get_usrname())==0)
		{
			fl1=1;
			s1=s;
			cout<<"\nThe details of user being modified"<<endl;
			s.displaytickets();
			cout<<"\nDo you want to change number of seats?(y/n): ";
			cin>>check;
			if(check=='y'||check=='Y')
			{
				cout<<"Enter the change in seat number: ";
				cin>>no_seats;
				if(no_seats==0)
				{
					cout <<"You cannot make seats zero as it is the equivalent of cancelling you booking";
					getch();
					break;
				}
				if(no_seats>10)
				{
					cout <<"\nConnot book more than 10 seats.";
					getch();
					break;
				}
				if(no_seats<0)
				{
					cout <<"enter valid no of seats.";
					getch();
					break;
				}
				if(no_seats<s.get_cap())
				{
					if(strcmp(s.get_seattype(),"GOLD")==0)
					{
						cout << "Money refunded"<<" : "<<(s.get_cap()-no_seats)*500;
						s.setno_seats3(no_seats);
						s.set_money_gold();
						getch();
					}
					if(strcmp(s.get_seattype(),"SILVER")==0)
					{
						cout << "Money refunded"<<" : "<<(s.get_cap()-no_seats)*250;
						s.setno_seats3(no_seats);
						s.set_money_silver();
						getch();
					}
					if(strcmp(s.get_seattype(),"PLATINUM")==0)
					{
						cout << "Money refunded"<<" : "<<(s.get_cap()-no_seats)*750;
						s.setno_seats3(no_seats);
						s.set_money_platinum();
						getch();
					}
					while(fio1.read((char*)&j,sizeof(j)))
					{
						if(strcmp(j.getstand(),s1.get_stand())==0)
						{
							j.setno3_seats(s1.get_cap()-no_seats);
							fio1.seekp(fio1.tellp()-sizeof(j));
							fio1.write((char*)&j,sizeof(j));
						}
					}
					fio.seekg(fio.tellp()-sizeof(s));
					fio.write((char*)&s,sizeof(s));
					if(check=='y')
					{
						cout<<"\nModification done..";
					}
					fio.close();
					fio1.close();
					getch();
					break;//no need to check the next if-statement as the cap is changing*.
				}
				if(no_seats>s.get_cap())
				{
					if(strcmp(s.get_seattype(),"GOLD")==0)
					{
						cout <<"Money to be given"<<" : "<<(-s.get_cap()+no_seats)*500;
						s.setno_seats3(no_seats);
						s.set_money_gold();
						getch();
					}
					if(strcmp(s.get_seattype(),"SILVER")==0)
					{
						cout <<"Money to be given"<<" : "<<(-s.get_cap()+no_seats)*250;
						s.setno_seats3(no_seats);
						s.set_money_silver();
						getch();
					}
					if(strcmp(s.get_seattype(),"PLATINUM")==0)
					{
						cout <<"Money to be given"<<" : "<<(-s.get_cap()+no_seats)*750;
						s.setno_seats3(no_seats);
						s.set_money_platinum();
						getch();
					}
					fio.seekg(fio.tellp()-sizeof(s));
					fio.write((char*)&s,sizeof(s));
					if(check=='y'||check=='Y')
					{
						cout<<"\nModification done..";
					}
					while(fio1.read((char*)&j,sizeof(j)))
					{
						if(strcmp(j.getstand(),s1.get_stand())==0)
						{
							j.setno4_seats(-s1.get_cap()+no_seats);
							fio1.seekp(fio1.tellp()-sizeof(j),ios::beg);
							fio1.write((char*)&j,sizeof(j));
						}
					}
					fio.close();
					fio1.close();
					getch();
				}
			}
		}
	}
	if(fl1==0)
	{
		gotoxy(10,10);
		cout<<"You have not booked any tickets,Please book.."<<endl;
		getch();
	}
}
void viewbooking(char name1[30],char password1[30])
{
	int temp = 0;
	ifstream fin("booking.dat",ios::binary);
	if(!fin)
	{
		cout <<"Error in opening file!!";
		return;
	}
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(strcmp(name1, s.get_usrname())==0 && strcmp(password1, s.get_password())==0)
		{
			gotoxy(1,1);
			cout <<"\n\t\t\t\t   BOOKING DETAILS"<<endl;
			s.displaytickets();
			temp = 1;
			break; // no need to continue further
		}
	}
	if(temp==0)
	{
		gotoxy(10,10);
		cout<<"You have not booked any tickets,Please book.."<<endl;
	}
	fin.close();
	getch();
}
void deletebooking(char name1[30],char password1[30])
{
	clrscr();
	cleardevice();
	int flag=0;
	fstream fin("booking.dat",ios::binary|ios::in);
	fstream fout1("temp.dat",ios::binary|ios::out);
	fstream fio("seatr.dat",ios::binary|ios::in|ios::out);
	if(!fin||!fout1)
	{
		gotoxy(10,10);
		cout <<"No bookings till now!!!";
		getch();
		return;
	}
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(strcmp(s.get_password(),password1)==0 || strcmp(s.get_usrname(),name1)==0)
		{
			cout <<"DELETED BOOKING DETAILS"<< endl;
			s.displaytickets();
			while(fio.read((char*)&j,sizeof(j)))
			{

				if(strcmp(j.getstand(),s.get_stand())==0)
				{
					j.setno1_seats(s.get_cap());
				}
				fio.seekp(fio.tellp()-sizeof(j),ios::beg);
				fio.write((char*)&j,sizeof(j));
				flag = 1;
			}
			continue;
		}
	}
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"You have no bookings,Please book.."<<endl;
	}
	fin.close();
	fout1.close();
	fio.close();
	remove("booking.dat");
	rename("temp.dat","booking.dat");
	getch();
}
void bookingmenu()
{
	clrscr();
	cleardevice();
	int temp=0,loc=2,i=0;
	char name1[30],password1[30],ch;
	settextstyle(1,HORIZ_DIR,6);
	setcolor(RED);
	outtextxy(180,20,"LOGIN");
	cout <<"\n\n\n\n\n\nEnter username"<<" : ";
	gets(name1);
	cout <<"Enter password"<<" : ";
	while(ch != '\n' && ch!= '\r')
	{
		ch = getch();
		password1[i++] = ch;
		cout <<"*";
	}
	password1[--i]='\0';
	ifstream fin("login1.dat",ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(strcmp(name1, s.get_usrname())==0 && strcmp(password1, s.get_password())==0)
		{
			lbl:
			clrscr();
			cleardevice();
			setbkcolor(9);
			temp=1;
			rectangle(0);
			start(loc);
			char a='\0',b=0;
			int k=0;
			while(a!=13)
			{
				a=getch();
				if(a=='\0')
				{
					b=getch();
					if(b==72)
					{
						if(k!=0)
						{
							k-=2;
							rectangle(k);
							start(loc);
						}
					}
					else if (b==80)
					{
						if(k<10)
						{
							 k+=2;
							 rectangle(k);
							 start(loc);
						}
					}
				}
			}
			if(k==0)
			{
				fin.close();
				clrscr();
				cleardevice();
				stadium();
				goto lbl;
			}
			if(k==2)
			{
				fin.close();
				clrscr();
				cleardevice();
				booktickets(name1,password1);
				goto lbl;
			}
			else if(k==4)
			{
				fin.close();
				clrscr();
				cleardevice();
				viewbooking(name1,password1);
				goto lbl;
			}
			else if(k==6)
			{
				fin.close();
				clrscr();
				cleardevice();
				deletebooking(name1,password1);
				goto lbl;
			}
			else if(k==8)
			{
				fin.close();
				clrscr();
				cleardevice();
				modifybooking(name1);
				goto lbl;
			}
			else
			{
				fin.close();
				clrscr();
				cleardevice();
				homepage();
				exit(0);
			}
		}
	}
	if(strcmp(name1,s.get_usrname())==0 && strcmp(password1,s.get_password())!=0)
	{
		cout<<"Password is incorrect!";
		getch();
		temp = 1;
	}
	if(temp==0)
	{
		cout<<"\nUsername not found! "<<endl;
		cout<<"Create account.."<<endl;
		getch();
	}

}

//admin part
void userbookingdetails()
{
		clrscr();
		cleardevice();
		int fl1=0,temp=0;
		ifstream fin1("booking.dat",ios::binary);
		if(!fin1)
		{
			cout <<"Error in opening file!!";
			return;
		}
		cout <<"BOOKING DETAILS OF CUSTOMERS(Press any key to view the next record)"<<endl<<endl;
		while(fin1.read((char*)&fs,sizeof(fs)))
		{
			fl1=1;
			cout <<"User Details "<<++temp<<endl;
			fs.displaytickets();
			cout << endl;
			getch();
			clrscr();
			cleardevice();
		}
		if(fl1==0)
		{
			gotoxy(10,10);
			cout<<"No one has booked yet!!!"<<endl;
		}
		getch();
}
void disp()
{
	clrscr();
	cleardevice();
	gotoxy(1,1);
	cout<<"\n  SEAT TYPE\t\t\tSTAND\t\t\tSEATS\n\n";
	ifstream fin("seatr.dat",ios::binary);
	if(!fin)
	{
		cout<<"\nNo stand has been given seats";
		return;
	}
	while(fin.read((char*)&j,sizeof(j)))
	{
		j.display();
	}
}
void admin_seat()
{
	clrscr();
	cleardevice();
	gotoxy(30,2);
	cout<<"ADD SEATS\n\n";
	int flag=0;
	ofstream fout("seatr.dat",ios::binary|ios::app);
	ifstream fin("seatr.dat",ios::binary);
	if(!fin||!fout)
	{
		cout <<"Error in opening file!!";
		return;
	}
	j.enter();
	while(fin.read((char*)&fj,sizeof(fj)))
	{
		if(strcmp(j.getstand(), fj.getstand())==0)
		{
			cout << "  Stand has already been reserved no of seats,pls modify";
			fin.close(); // closing file
			fout.close();
			flag++;
		}
	}
	if(flag==0)
	{
		fout.write((char*)&j,sizeof(j));
		cout <<"\n\n  Stand has been given seats successfully"<<endl;
		fin.close();
		fout.close();    //closing file
	}
	getch();
}
void modifyw()                     // modifiying without temporary file
{
	char stand[10],stand1[10];
	lbl:
	clrscr();
	cleardevice();
	int no_seats,choice;
	int flag=0;
	fstream fio("seatr.dat",ios::binary|ios::in|ios::out);
	cout<<"MENU"<<endl;
	cout<<"1>Modify the name of stand"<<endl;
	cout<<"2>Number of seats"<<endl;
	cout<<"3>Return to admin menu"<<endl;
	cout<<"Enter your choice";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1: cout<<"Enter the name of the stand you want to modify: ";
			gets(stand);
			cout<<endl;
			char check;
			if(!fio)
			{
				cout<<"\n  Error in opening file!!!!"<<endl;
				return;
			}
			while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),stand)==0)
				{
					cout<<"\n  The stand being modified is: ";
					cout<<"\n  Id\t\t\t\tName\n";
					j.display();

					cout<<"\n  Do you want to modify the stand(y/n): ";
					cin>>check;
					if(check=='y'||check=='Y')
					{
						cout<<"Enter the name of new stand"<<endl;
						gets(stand1);
						strcpy(j.getstand(),stand1);
						fio.seekg(fio.tellp()-sizeof(j));
						fio.write((char*)&j,sizeof(j));
						cout<<"\n  Stand Modified";
						flag++;
					}
					else
					{
						cout<<"\n  Stand not modified!!!!";
					}
				}
			}
			break;
		case 2: cout<<"Enter the name of the stand you want to modify: ";
			gets(stand);
			cout<<endl;
			if(!fio)
			{
				cout<<"\n  Error in opening file!!!!"<<endl;
				return;
			}
			while(fio.read((char*)&j,sizeof(j)))
			{
				if(strcmp(j.getstand(),stand)==0)
				{
					cout<<"\n  The stand being modified is: ";
					cout<<"\n  Id\t\t\t\tName\n";
					j.display();
					cout<<"\n  Do you want to modify the stand(y/n): ";
					cin>>check;
					if(check=='y'||check=='Y')
					{
						cout<<"Enter the change in seat number: ";
						cin>>no_seats;
						j.setno_seats1(no_seats);
						fio.seekg(fio.tellp()-sizeof(j));
						fio.write((char*)&j,sizeof(j));
						cout<<"\n  Stand Modified";
						flag++;
					}
					else
					{
						cout<<"\n  Stand not modified!!!!";
					}
				}
			}
			break;
		case 3: adminmenus();
			break;
		default:cout<<"Invalid choice"<<endl;
	}
	if(flag==0)
	{
		cout<<"\n  Stand not found";
	}
	fio.close();
	goto lbl;
}
void alluserdetails()
{
	clrscr();
	cleardevice();
	ifstream fin("login1.dat",ios::binary);
	if(!fin)
	{
		cout <<"Error in opening file!!";
		return;
	}
	cout<<"DETAILS OF ALL USERS(Press enter the next record)"<<endl<<endl;
	while(fin.read((char*)&s,sizeof(s)))
	{
		s.show();
		getch();
	}
}
void adminmenus()
{
	clrscr();
	cleardevice();
	int loc=3;
	setbkcolor(9);
	rectangle(0);
	start(loc);
	char a=0,b;
	int k=0;
	while(a!=13)
	{
		a=getch();
		if(a=='\0')
		{
			b=getch();
			if(b==72)
			{
				if(k!=0)
				{
					k-=2;
					rectangle(k);
					start(loc);
				}
			}
			else if (b==80)
			{
				if(k<12)
				{
					 k+=2;
					 rectangle(k);
					 start(loc);
				}
			}
		}
	}
	if(k==0)
	{
		userbookingdetails();
		adminmenus();
		exit(0);

	}
	else if(k==2)
	{
		alluserdetails();
		adminmenus();
		exit(0);
	}
	else if(k==4)
	{
		clrscr();
		cleardevice();
		char username[10],password[10];
		cout<<"Enter the username of the user:";
		gets(username);
		cout<<endl;
		cout<<"Enter the password:";
		gets(password);
		cout<<endl;
		deletebooking(username,password);
		adminmenus();
		exit(0);
	}
	else if(k==6)
	{
		disp();
		getch();
		adminmenus();
		exit(0);
	}
	else if(k==8)
	{
		admin_seat();
		adminmenus();
		exit(0);
	}
	else if(k==10)
	{
		modifyw();
		adminmenus();
		exit(0);
	}
	else
	{
		homepage();
		exit(0);
	}
}
void adminlogin()
{
	clrscr();
	cleardevice();
	settextstyle(1,HORIZ_DIR,6);
	setcolor(RED);
	outtextxy(120,20,"ADMIN LOGIN");
	cout<<endl<<endl<<endl<<endl<<endl;;
	char username[30];
	cout <<"\nEnter admin username"<<" : ";
	gets(username);
	char password[30];
	char ch=' ';
	int i=0;
	cout<<"Enter password"<<" : ";
	while(ch != '\n' && ch!= '\r')
	{
		ch = getch();
		password[i++] = ch;
		cout <<"*";
	}
	password[--i]='\0';
	if(strcmp(username,"ajs")==0 && strcmp(password,"ajs123")==0)
	{
		cout <<"\n\nLogged in as admin"<<endl;
		getch();
		adminmenus();
	}
	else
	{
		cout<<"\nAdmin details incorrect!";
		getch();
		clrscr();
	}
}
void rectangle(int k)
{
	cleardevice();
	gotoxy(30,9+k);
	cout<<"--------------------------";
	gotoxy(30,11+k);
	cout<<"--------------------------";
	gotoxy(29,10+k);
	cout<<"|";
	gotoxy(56,10+k);
	cout<<"|";

}
void start(int loc)
{
	if(loc==1)
	{
		settextstyle(1,HORIZ_DIR,6);
		setcolor(RED);
		outtextxy(120,20,"CLOUD TICKETS");
		gotoxy(35,10);
		cout<<"CREATE CLOUD ACCOUNT";
		gotoxy(35,12);
		cout<<"LOGIN TO ACCOUNT";
		gotoxy(35,14);
		cout<<"LOGIN AS ADMIN";
		gotoxy(35,16);
		cout<<"EXIT";
	}
	else if(loc==2)
	{
		settextstyle(1,HORIZ_DIR,6);
		setcolor(RED);
		outtextxy(120,20,"BOOKING MENU");
		gotoxy(35,10);
		cout<<"VIEW STADIUM";
		gotoxy(35,12);
		cout<<"BOOK TICKETS";
		gotoxy(35,14);
		cout<<"VIEW BOOKING";
		gotoxy(35,16);
		cout<<"DELETE BOOKING ";
		gotoxy(35,18);
		cout<<"ALTER BOOKING";
		gotoxy(35,20);
		cout<<"EXIT";
	}
	else if(loc==3)
	{
		settextstyle(1,HORIZ_DIR,6);
		setcolor(RED);
		outtextxy(120,20,"ADMIN MENU");
		gotoxy(35,10);
		cout<<"VIEW USER BOOKING";
		gotoxy(35,12);
		cout<<"VIEW ALL USERS";
		gotoxy(35,14);
		cout<<"DELETE USER BOOKING ";
		gotoxy(35,16);
		cout<<"DISPLAY ALL STANDS";
		gotoxy(35,18);
		cout<<"ADD SEATS";
		gotoxy(35,20);
		cout<<"MODIFY SEATS";
		gotoxy(35,22);
		cout<<"EXIT";
	}
}
void credits()
{
	clrscr();
	cleardevice();
	setbkcolor(WHITE);
	setcolor(BLUE);
	settextstyle(3,0,4);
	outtextxy(110,80,"COMPUTER SCIENCE PROJECT");
	line(110,120,260,120);
	line(278,120,393,120);
	line(411,120,528,120);
	outtextxy(200,130,"DONE BY :");
	setcolor(RED);
	settextstyle(3,0,3);
	outtextxy(200,230,"SOHANKUMAR TR");
	outtextxy(200,270,"AKASHDEEP GOPINATH");
	outtextxy(200,310,"JOEL THOMAS");
	getch();
}

void homepage()
{
	clrscr();
	cleardevice();
	int loc=1;
	setbkcolor(9);
	rectangle(0);
	start(loc);
	char a=0,b;
	int k=0;
	while(a!=13)
	{
		a=getch();
		if(a=='\0')
		{
			b=getch();
			if(b==72)
			{
				if(k!=0)
				{
					k-=2;
					rectangle(k);
					start(loc);
				}
			}
			else if (b==80)
			{
				if(k<6)
				{
					 k+=2;
					 rectangle(k);
					 start(loc);
				}
			}
		}
	}
	if(k==0)
	{
		signup();
		homepage();
		exit(0);
	}
	else if(k==2)
	{
		bookingmenu();
		homepage();
		exit(0);
	}
	else if(k==4)
	{
		adminlogin();
		homepage();
		exit(0);
	}
	else
	{
		credits();
		exit(0);
	}
}
void main()
{
	int gd1=DETECT,gm1;
	initgraph(&gd1,&gm1,"C:\\TURBOC3\\BGI ");
	start1();
	homepage();
	closegraph();
}
