#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
void add();
void insert();
void del();
void modify();
void ser();
void dispall();
//void createfile();
class hotel
{
 int roomno,fmem,age;
 float rent;
 char name[20],status[10],gender;
 long mob;
 void calrent()
 {
  rent=fmem*1700;
 }
 public:
 hotel()
 {
  strcpy(status,"empty");
 }
 void enter()
 {
  cout<<"Enter the room no = ";
  cin>>roomno;
  cout<<"Enter the no. of family members = ";
  cin>>fmem;
  cout<<"Enter the details" <<endl;
   cout<<"name = ";
   gets(name);
   cout<<"age = ";
   cin>>age;
   cout<<"gender = ";
   cin>>gender;
   cout<<"MOBILE NO. = ";
   cin>>mob;
   calrent();
 }
 void display()
 {
  cout<<"room no = "<<roomno<<endl
      <<"no. of family members = "<<fmem<<endl
      <<"details  "<<endl;
   cout<<"name = ";
   puts(name);
   cout<<"age = "<<age<<endl;
   cout<<"gender = "<<gender<<endl;
   cout<<"mobile no. = "<<mob<<endl;
   cout<<"total RENT = "<<rent;

 }
 int r()
 {
 return roomno;
 }
 void mod()
 {   cout<<"PREVIOUS DETAILS ARE =";
  cout<<"room no = "<<roomno<<endl
      <<"name = ";puts(name);
 cout<<"age = "<<age<<endl
     <<"gender = "<<gender<<endl
     <<"mobile no.  = "<<mob<<endl;
     cout<<"ENTER THE NEW DETAILS TO MODIFY PREVIOUS ONE = "<<endl;
     char na[20],gen;
     int a;
     long m;
     cout<<"new name (press 'n' for no change)= ";gets(na);
     cout<<"new age(press 0 for no change) = " ;cin>>a;
     cout<<"gender(press 'n' for no change)  = ";cin>>gen;
     cout<<"new mobile no.(press 0 for no change) = ";cin>>m;
     if(strcmp(na,"n")!=0)
     strcpy(name,na);
     if(a!=0)
       age=a;
     if(gen!='n')
      gender=gen;
     if(m!=0)
     mob=m;
   }
}h1,h2;
int main()
{
 clrscr();
 cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
 cout<<"     ********************************************************************"<<endl;
 cout<<"     *                                                                  *"<<endl;
 cout<<"     *                  =============================                   *"<<endl;
 cout<<"     *                 * WELCOME TO HOTEL-MANAGEMENT *	                *"<<endl;
 cout<<"     *                  =============================                   *"<<endl;
 cout<<"     *                                                                  *"<<endl;
 cout<<"     *                                                                  *"<<endl;
 cout<<"     *            [ HERE YOU CAN MANAGE YOUR HOTEL DETAILS ]            *"<<endl;
 cout<<"     *                                                                  *"<<endl;
 cout<<"     *                                                                  *"<<endl;
 cout<<"     ********************************************************************"<<endl;
   getch(); clrscr();
 cout<<endl<<endl<<endl<<endl;
 cout<<"     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
 cout<<"     !                                                                  !"<<endl;
 cout<<"     !                 PREPARED BY -> PRINCE SHARMA                     !"<<endl;
 cout<<"     !                    ROLL NO. -> 10                                !"<<endl;
 cout<<"     !                                                                  !"<<endl;
 cout<<"     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
 cout<<endl<<endl<<endl;
 cout<<"     ********************************************************************"<<endl;
 cout<<"     *           HERE YOU CAN PERFORM VEARIOUS FUNCTIONS                * "<<endl
     <<"     *   Like :                                                         *"<<endl
     <<"     *   1.ADD A NEW RECORD                                             * "<<endl
     <<"     *   2.INSERT A NEW RECORD [IN A SORTED LIST]                       * "<<endl
     <<"     *   3.DELETE A PREVIOUS/OLD RECORD                                 * "<<endl
     <<"     *   4.SEARCH A RECORD                                              * "<<endl
     <<"     *   5.MODIFY/UPDATE A RECORD                                       * "<<endl;
 cout<<"     ******************************************************************** "<<endl;
     cout<<endl<<endl<<endl;

     cout<<"PRESS THE ENTER THE KEY TO CONTINUE ";
     getch();
    // clrscr();
    // createfile();
     char ch;
     int p;
 do
 {
 clrscr();
  cout<<endl<<endl<<endl<<endl;
  cout<<"#####################################################################"<<endl;
  cout<<"#                                                                   #"<<endl
      <<"#                 ||||   MAIN  MENU   |||||||                       #"<<endl
      <<"#                                                                   #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 1 TO ADD A NEW RECORD                             #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 2 TO INSERT A NEW RECORD (SORTING)                #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 3 TO DELETE AN EXISTING RECORD                    #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 4 TO SEARCH A RECORD                              #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 5 TO MODIFY A RECORD                              #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 6 TO DISPLAY ALL THE RECORDS IN THE FILE          #"<<endl
      <<"#                                                                   #"<<endl
      <<"#           PRESS 7 TO EXIT                                         #"<<endl
      <<"#                                                                   #"<<endl
      <<"#####################################################################"<<endl<<endl<<endl;
      cout<<"ENTER YOUR CHOICE  = ";
    cin>>p;
    switch(p)
    {
     case 1 :add();break;
     case 2 :insert();break;
     case 3 :del();break;
     case 4 :ser();break;
     case 5 :modify();break;
     case 6 :dispall();break;
     case 7 :cout<<"\nTHANKS FOR VISITING US ::::::PLEASE SEND US FEEDBACK";getch();exit(0);
     default :cout<<":::::::ERROR:::::INVALID OPTION CHOOSEN::::: ";
    }
    cout<<"\n \n DO YOU WANT TO CONTINUE IN THE SOFTWARE (MAIN MENU) (Y/N)"<<endl<<endl;
    cout<<"ENTER YOUR CHOICE  = ";
    cin>>ch;
    if(ch=='n'||ch=='N')
     cout<<"\n::::::::::::::::::::: THANKS FOR VISITING US  ::::::::::::::::";getch();
 }while(ch=='y'||ch=='Y');
 return 0;
}
/*void createfile()
{        int n;
 ofstream fout;
 fout.open("hotel.dat",ios::binary);
 cout<<"\n     ENTER how many records u want to enter initially = "<<endl;
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"\n   ENTER RECORD "<<i+1<<endl;
  h1.enter();
  fout.write((char*)&h1,sizeof(h1));
 }
 cout<<"\n    FILE CREATED";getch();clrscr();
 fout.close();
}*/
void add()
{ char ch='y';
  ofstream fout;
  fout.open("hotel.dat",ios::binary|ios::app);
  do
  {
   cout<<"\n    Enter the new record which u want to add  "<<endl<<endl;
   h1.enter();
   fout.write((char*)&h1,sizeof(h1));
   cout<<"\n   RECORD ADDED";getch();
   cout<<"\n \n DO U WANT TO ADD MORE (Y/N) = ";
   cin>>ch;
  }while(ch=='y'||ch=='Y');
  fout.close();
}
void ser()
{  char ch='y';
int rno,k=1;
 do
 {
 ifstream fin;
 fin.open("hotel.dat",ios::binary);
 if(!fin)
 {
  cout<<"FILE NOT FOUND ";getch();exit(0);
 }
  cout<<"\n    ENTER THE ROOM NO. WHOSE RECORD U WANT TO SEARCH = ";
  cin>>rno;
  while(!fin.eof())
  {
   fin.read((char*)&h1,sizeof(h1));
   if(rno==h1.r())
   {  k=0;
    cout<<"\n \n  RECORD FOUND\n "<<endl;
    h1.display();
   }
  }
 if(k==1)
     cout<<"\nRECORD NOT FOUND ";
     fin.close();
     cout<<"\n\nDO U WANT TO SEARCH MORE ANOTHER RECORD (Y/N) = ";
     cin>>ch;
   }while(ch=='y'||ch=='Y');
}
void modify()
{
 int rno;
 long pos;char found='f',ch='y';
 do
 {
 fstream fio("hotel.dat",ios::in|ios::out|ios::binary);
 cout<<"Enter the room no. of whose record u want to modify = ";
 cin>>rno;
 while(!fio.eof())
 {
  pos=fio.tellg();
  fio.read((char*)&h1,sizeof(h1));
  if(h1.r()==rno)
  {
   h1.mod();
   fio.seekp(pos);
   fio.write((char*)&h1,sizeof(h1));
   found='t'; break;
  }
 }
 if(found=='f')
   cout<<"\n \nrecord not found"<<endl;
  fio.seekg(0);
   cout<<endl<<endl;
    fio.close();
  cout<<"\n\nRECORD MODIFIED";
  cout<<"\n \n DO YOU WANT TO MODIFY ANOTHER RECORD (Y/N) = ";
  cin>>ch;
  }while(ch=='Y'||ch=='y');
}
void insert()
{ char last='y',ch='y';
 do
  {
   ifstream fin("hotel.dat",ios::binary);
 ofstream fout("temp.dat",ios::binary);
    cout<<"  ENTER THE DETAILS OF STUDENT WHOSE RECORD IS TO BE INSERTED "<<endl;
  h1.enter();
  while(!fin.eof())
  {
   fin.read((char*)&h2,sizeof(h2));
   if(h1.r()<=h2.r())
   {
    fout.write((char*)&h1,sizeof(h1));
    last='n';
    break;
   }
   else
   fout.write((char*)&h2,sizeof(h2));
  }
  if(last=='y')
   fout.write((char*)&h1,sizeof(h1));
   else if(!fin.eof())
   {
    while(!fin.eof())
    {
     fin.read((char*)&h2,sizeof(h2));
     fout.write((char*)&h2,sizeof(h2));
    }
   }

   fin.close();
   fout.close();
   remove("hotel.dat");
   rename("temp.dat","hotel.dat");
   cout<<"\n \n   DATA INSERTED IN FILE IN SORTED MANNER " ;
   cout<<"\n \n DO U WANT TO INSERT MORE ?(Y/N) = ";
   cin>>ch;
   }while(ch=='y'||ch=='Y');

 }
void del()
{
 int rno;
 char found='f',confirm='n',ch='y';
 do
 {
 ifstream fin("hotel.dat",ios::binary);
 ofstream fout("temp.dat",ios::binary);

 cout<<"\n ENTER THE ROOM NO. WHOSE RECORD YOU WANT TO BE DELETED = ";
 cin>>rno;
 while(!fin.eof())
 {
  fin.read((char*)&h1,sizeof(h1));
  if(rno==h1.r())
  {
   h1.display();
   found='t';
   cout<<"\n  ARE YOU SURE , DO YOU WANT TO DELETE THIS RECORD ? (Y/N) = ";
   cin>>confirm;
   if(confirm=='n'||confirm=='N')
   fout.write((char*)&h1,sizeof(h1));
  }
  else
   fout.write((char*)&h1,sizeof(h1));
  }
  if(found=='f')
  cout<<"RECORD NOT FOUND !!";
  else
  cout<<"\n \n    YOUR DESIRED RECORD IS DELETED FROM THE FILE "<<endl;
  fin.close();
  fout.close();
  remove("hotel.dat");
  rename("temp.dat","hotel.dat");

  cout<<"\nDO U WANT TO DELETE ANOTHER RECORD?(Y/N) = ";
  cin>>ch;
  }while(ch=='y'||ch=='Y');
 }
void dispall()
{
 ifstream fin;
 fin.open("hotel.dat",ios::binary);
 if(!fin)
 {
  cout<<"FILE NOT FOUND ";getch();exit(0);
 }
 while(!fin.eof())
 {
  fin.read((char*)&h1,sizeof(h1));
  if(!fin.eof())
  h1.display();
  cout<<endl<<endl;
 }
 fin.close();
}
