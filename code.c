#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct passengers
{
char name[100];
char gb;
int age;
int dod,dom,doy;
};
struct Book_Sum
{
char name[30];
int pass_age;
char tk_name[13];
char pass_cat[13];
int pass_seat;
};
int leapYearFeb(int,int);
int pass_age(int,int,int);
int verify_date(int,int,int);
void complaint();
void Cancel_Ticket();
void display_docs();
void Mid_drop();
void main()
{
time_t t = time(NULL);
FILE *fe,*fz,*fy,*fb,*f1,*f2;
struct passengers p1[20];
struct Book_Sum p2[20];
int s3,zz,ax,k,uu1,uu2,wt,tk1,bs1,age,t1,t2,t3,t4,day,n,i,l,k1,k2,k3,x,a,b,f,j,c,day1,mon1,year1;
double seat,z1,bag,ux,u1,Final_Amount,z;
static char ticket[15],bs_name[15];
char e5[100],c5[100],rev[15],fl_name[20],class[20],fl1[20],fl2[2],y,w,z2[50],c1[30],c2[5],e1[30],e2[10],ha[10],hb[100],ho[100],ja[100],jb[10],jo[20];
textcolor(15);
a=1;
clrscr();
dashboard:
printf("--------------------------------------------------------------------------------\n\t\t\tFLIGHT MANAGEMENT SYSTEM\n________________________________________________________________________________");
printf("\n\n\n\t\t1. Booking\n\n\t\t2. Display DOCS\n\n\t\t3. Complaint\n\n\t\t4. Cancel Ticket\n\n\t\t5. Exit");
printf("\n\n\n\t Press the number beside for desired Options - ");
scanf("%d",&x);
if((x<0)||(x>5))
{
 clrscr();
	  printf("\t\t\t\t");
	  textcolor(12);
	  cprintf("option ERROR - try again");
	  printf("\n\n");
	  textcolor(15);
	  goto dashboard;
}
switch(x)
{
case 1: goto start; break;
case 2: display_docs(); break;
case 3: complaint(); break;
case 4: Cancel_Ticket(); break;
case 5: exit(0);
}
clrscr();
goto dashboard;
start:
clrscr();
from:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
printf("\n\n\t\tDeparture Place ( FROM )\n\n\t\t\t\t1. Hyderabad ( HYD )\n\n\t\t\t\t2. Delhi ( DEL )\n\n\t\t\t\t3. Chennai ( MAA )\n\n\t\t\t\t4. kolkata ( CCU )\n\n\t\t\t\t5. Mumbai ( BOM )");
    printf("\n\n\t\t\tType the Serial Number of Departure place -     ");
 scanf("%d",&b);
flushall();
 switch(b)
  {
 case 1:strcpy(c1,"Hyderabad");
	strcpy(c2,"HYD");
       break;
 case 2:strcpy(c1,"Delhi");
	strcpy(c2,"DEL");
       break;
 case 3:strcpy(c1,"Chennai");
	strcpy(c2,"MAA");
       break;
 case 4:strcpy(c1,"Kolkata");
	strcpy(c2,"CCU");
       break;
 case 5:strcpy(c1,"Mumbai");
	strcpy(c2,"BOM");
       break;
 default:
	  clrscr();
	  printf("\t\t\t");
	  textcolor(12);
	  cprintf("Departure place ERROR - try again...");
	  printf("\n\n\t");
	  textcolor(15);
	  goto from;
  }
switch(b)
{
case 1:strcpy(c5,"Rajiv Gandhi International Airport");
break;
case 2:strcpy(c5,"Indira Gandhi International Airport");
break;
case 3:strcpy(c5,"Chennai Internation Airport");
break;
case 4:strcpy(c5,"Netaji Subhash Chandra Bose International Airport");
break;
case 5:strcpy(c5,"Chhatrapati Shivaji Maharaj Internation Airport");
break;
}
flushall();
clrscr();
to:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
printf("\n   Destination ( TO )");
    printf("\n\n\t1. Washington D.C. ( WAS )\t\t2. New York City ( NYC )");
    printf("\n\n\t3. Toronto ( TOR )        \t\t4. Sydney ( SYD )");
    printf("\n\n\t5. Dubai ( DXB )          \t\t6. Stockholm ( STO )");
    printf("\n\n\t7. Oslo ( OSL )           \t\t8. Paris ( PAR )");
    printf("\n\n\t9. London ( LON )         \t\t10. Tokyo ( TYO )");
    printf("\n\n\t\tType the Serial Number of Destination -     ");
    scanf("%d",&f);
  switch(f)
  {
 case 1:strcpy(e1,"Washington D.C.");
	strcpy(e2,"WAS");
       break;
 case 2:strcpy(e1,"NewYork city");
	strcpy(e2,"NYC");
       break;
 case 3:strcpy(e1,"Toronto");
	strcpy(e2,"TOR");
       break;
 case 4:strcpy(e1,"Sydney");
	strcpy(e2,"SYD");
       break;
 case 5:strcpy(e1,"Dubai");
	strcpy(e2,"DXB");
       break;
 case 6:strcpy(e1,"stockholm");
	strcpy(e2,"STO");
       break;
 case 7:strcpy(e1,"Oslo");
	strcpy(e2,"OSL");
       break;
 case 8:strcpy(e1,"Paris");
	strcpy(e2,"PAR");
       break;
 case 9:strcpy(e1,"London");
	strcpy(e2,"LON");
       break;
 case 10:strcpy(e1,"Tokyo");
	strcpy(e2,"TYO");
       break;
 default:
	 clrscr();
	  printf("\t\t\t");
	  textcolor(12);
	  cprintf("Destination ERROR - try again");
	  printf("\n\n\t");
	  textcolor(15);
	  goto to;
  }
switch(f)
{
case 1:strcpy(e5,"Dulles International Airport");
break;
case 2:strcpy(e5,"John F.Kennedy International Airport");
break;
case 3:strcpy(e5,"Toronto Pearson International Airport");
break;
case 4:strcpy(e5,"Sydney Kingsford Smith International Airport");
break;
case 5:strcpy(e5,"Dubai International Airport");
break;
case 6:strcpy(e5,"Stockholm Arlanda International Airport");
break;
case 7:strcpy(e5,"Oslo Gardermoen International Airport");
break;
case 8:strcpy(e5,"Paris Charles de Gaulle International Airport");
break;
case 9:strcpy(e5,"Heathrow International Airport");
break;
case 10:strcpy(e5,"Narita International Airport");
break;
}
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
printf("\n\t\tYou Selected \n\n\n\t\t\tFrom :: %s [ %s ]",c1,c2);
printf("\n\n\t\t\tTo   :: %s [ %s ]\n\n\n\t\tDo you want to continue ( y , n ) -   ",e1,e2);
togo:
flushall();
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto from;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto togo;
    }
clrscr();
class:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________");
printf("\n\n\n\t\t\tEnter your Class \n\n\t\t\t\t1.Economy \n\n\t\t\t\t2.Business \n\n\t\t\t\t3.First\n\n");
printf("\n\t\tType the Serial Number of Type of CLASS -     ");
scanf("%d",&l);
if((l!=1)&&(l!=2)&&(l!=3))
{
	  clrscr();
	  printf("\t\t\t");
	  textcolor(4);
	  cprintf("Class ERROR - try again");
	  printf("\n\n\t");
	  textcolor(15);
	  goto class;
}
switch(l)
{
case 1: strcpy(class,"Economy"); break;
case 2: strcpy(class,"Business"); break;
case 3: strcpy(class,"First"); break;
}
printf("\n\n\t\tSelected Class - %s\n\n\t\tDo you want to continue ( y , n ) -   ",class);
classgo:
flushall();
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto class;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto classgo;
    }
clrscr();
doj:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
printf("\n\t\tDate of Jounrney in DD/MM/YYYY \n\n\n\t\t\t");
stdt:
flushall();
scanf("%d/%d/%d", &day1, &mon1, &year1);
x=verify_date(day1,mon1,year1);
ax=Journey_day_Test(day1,mon1,year1);
if((x!=1)||(ax==0))
{
textcolor(4);
printf("\n\t");
cprintf("Invalid date! Try Again");
printf("\t\t");
textcolor(15);
goto stdt;
}

printf("\n\n\t\tDo you want to continue ( y , n ) -   ");
dojgo:
flushall();
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto doj;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto dojgo;
    }
clrscr();
pass:
flushall();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
printf("\n\n\t\tNumber of Passengers");
    printf("\n\n");
printf("\t\t\tNumber of Infants  :: ");
scanf("%d",&k1);
printf("\n\t\t\tNumber of Children :: ");
scanf("%d",&k2);
printf("\n\t\t\tNumber of Adults   :: ");
scanf("%d",&k3);
flushall();
n=k1+k2+k3;
if(k3==0)
{
clrscr();
printf("\t\t\t");
textcolor(12);
cprintf("Minimum ONE Adult needed - Try Again !");
textcolor(15);
printf("\n");
goto pass;
}
printf("\n\n\t\tDo you want to continue ( y , n ) -   ");
passgo:
flushall();
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto pass;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto passgo;
    }
switch(f)
{
case 1:z=70000;
break;
case 2:z=67000;
break;
case 3:z=70000;
break;
case 4:z=67000;
break;
case 5:z=70000;
break;
case 6:z=67000;
break;
case 7:z=70000;
break;
case 8:z=67000;
break;
case 9:z=70000;
break;
case 0:z=67000;
break;
}
z1=z*((0.1*k1)+(0.75*k2)+(k3));
if(l==2)
z1=2.5*z1;
if(l==3)
z1=4.5*z1;
clrscr();
flight:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(9);
    cprintf("      1. Flight");
    textcolor(7);
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
flushall();
printf("\n\tChoose Outbound Flight   %s --->--- %s\n",c2,e2);
    for(i=0;i<5;i++)
    {
u1=z1;
    day=0;
printf("\n\t");
	switch(i)
	{
	    case 0: printf("1. Emirates");
	    break;
	    case 1: printf("2. Qatar Airways");
	    break;
	    case 2: printf("3. Air India");
	    break;
	    case 3: printf("4. Etihad Airways");
	    break;
	    case 4: printf("5. Lufthansa");
	    break;
	}
switch(i)
{
            case 0: ux=u1*0.8;
	    break;
	    case 1: ux=u1*0.9;
	    break;
	    case 2: ux=u1*1.05;
	    break;
	    case 3: ux=u1*1.1;
	    break;
	    case 4: ux=u1*1.2;
	    break;
}
switch(i)
{
case 0:t1=2;
       t2=10;
       break;
case 1:t1=4;
       t2=20;
       break;
case 2:t1=6;
       t2=30;
       break;
case 3:t1=8;
       t2=40;
       break;
case 4:t1=10;
       t2=50;
       break;
}
switch(f)
{
case 1:t1=t1+1;
       t2=t2+5;
       break;
case 2:t1=t1+2;
       t2=t2+10;
       break;
case 3:t1=t1+3;
       t2=t2+15;
       break;
case 4:t1=t1+4;
       t2=t2+20;
       break;
case 5:t1=t1+5;
       t2=t2+25;
       break;
case 6:t1=t1+6;
       t2=t2+30;
       break;
case 7:t1=t1+7;
       t2=t2+35;
       break;
case 8:t1=t1+8;
       t2=t2+40;
       break;
case 9:t1=t1+9;
       t2=t2+45;
       break;
case 10:t1=t1+10;
        t2=t2+50;
        break;
}
while(t2>=60)
	{
	t2=t2-60;
	t1--;
	}
switch(f)
{
case 1:t3=t1+20;
       t4=t2+50;
       break;
case 2:t3=t1+19;
       t4=t2+30;
       break;
case 3:t3=t1+19;
       t4=t2+15;
       break;
case 4:t3=t1+13;
       t4=t2+5;
       break;
case 5:t3=t1+3;
       t4=t2+35;
       break;
case 6:t1=6+t1;
       t2=35+t2;
       t3=t1+12;
       t4=t2+5;
       break;
case 7:t3=t1+14;
       t4=t2+5;
       break;
case 8:t3=t1+12;
       t4=t2+25;
       break;
case 9:t3=t1+10;
       t4=t2+25;
       break;
case 10:t3=t1+13;
       t4=t2+5;
       break;
}
	while(t4>=60)
	{
	t4=t4-60;
	t1++;
	}
	while(t3>=24)
	{
	t3=t3-24;
	day++;
	}
	printf("\n\t\t\t   %.2d:%.2d --->--- %.2d:%.2d",t1,t2,t3,t4);
	if(day==1)
	printf(" Next day",day);
        else if(day>1)
        printf(" + %d Day",day-1);
        else
        printf("         ");
        printf("   -- INR %.2lf",ux);
flushall();
}
printf("\n\n\tType the Serial Number of your preferred flight -  ");
flushall();
scanf("%d",&x);
if((x>5)||(x<0))
{
clrscr();
printf("\t\t\t");
textcolor(12);
cprintf("Flight Selection ERROR - Try Again !");
textcolor(15);
printf("\n");
goto flight;
}
i=x-1;
u1=z1;
day=0;
switch(i)
{
case 0:t1=2;
       t2=10;
       break;
case 1:t1=4;
       t2=20;
       break;
case 2:t1=6;
       t2=30;
       break;
case 3:t1=8;
       t2=40;
       break;
case 4:t1=10;
       t2=50;
       break;
}
switch(i)
{
            case 0: z1=u1*0.8;
	    break;
	    case 1: z1=u1*0.9;
	    break;
	    case 2: z1=u1*1.05;
	    break;
	    case 3: z1=u1*1.1;
	    break;
	    case 4: z1=u1*1.2;
	    break;
}
switch(i)
	{
	    case 0: printf("Emirates");
	    break;
	    case 1: printf("Qatar Airways");
	    break;
	    case 2: printf("Air India");
	    break;
	    case 3: printf("Etihad Airways");
	    break;
	    case 4: printf("Lufthansa");
	    break;
	}
switch(i)
{
case 0:strcpy(fl1,"Emirates");
       strcpy(fl2,"EK");
       break;
case 1:strcpy(fl1,"Qatar Airways");
       strcpy(fl2,"QR");
       break;
case 2:strcpy(fl1,"Air India");
       strcpy(fl2,"AI");
       break;
case 3:strcpy(fl1,"Etihad Airways");
       strcpy(fl2,"EY");
       break;
case 4:strcpy(fl1,"Lufthansa");
       strcpy(fl2,"LH");
       break;
}
switch(f)
{
case 1:t1=t1+1;
       t2=t2+5;
       break;
case 2:t1=t1+2;
       t2=t2+10;
       break;
case 3:t1=t1+3;
       t2=t2+15;
       break;
case 4:t1=t1+4;
       t2=t2+20;
       break;
case 5:t1=t1+5;
       t2=t2+25;
       break;
case 6:t1=t1+6;
       t2=t2+30;
       break;
case 7:t1=t1+7;
       t2=t2+35;
       break;
case 8:t1=t1+8;
       t2=t2+40;
       break;
case 9:t1=t1+9;
       t2=t2+45;
       break;
case 10:t1=t1+10;
        t2=t2+50;
        break;
}
while(t2>=60)
	{
	t2=t2-60;
	t1--;
	}
switch(f)
{
case 1:t3=t1+20;
       t4=t2+50;
       break;
case 2:t3=t1+19;
       t4=t2+30;
       break;
case 3:t3=t1+19;
       t4=t2+15;
       break;
case 4:t3=t1+13;
       t4=t2+5;
       break;
case 5:t3=t1+3;
       t4=t2+35;
       break;
case 6:t3=t1+12;
       t4=t2+5;
       break;
case 7:t3=t1+14;
       t4=t2+5;
       break;
case 8:t3=t1+12;
       t4=t2+25;
       break;
case 9:t3=t1+10;
       t4=t2+25;
       break;
case 10:t3=t1+13;
       t4=t2+5;
       break;
}
	while(t4>=60)
	{
	t4=t4-60;
	t3++;
	}
	while(t3>=24)
	{
	t3=t3-24;
        day++;
	}

clrscr();
flight2:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(14);
    cprintf("      1. Flight");
    textcolor(7);
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t\tYour Preferences");
flushall();
printf("\n\n\t\t%s [ %s%d%d%d ]",fl1,fl2,a,b,f);
sprintf(fl_name,"%s%d%d%d",fl2,a,b,f);
printf("\n\n\t\t\t\t %s           %s",c2,e2);
printf("\n\t\t\t\t%.2d:%.2d --->--- %.2d:%.2d",t1,t2,t3,t4);
printf("\n\n\t\tDo you want to continue ( y , n ) -   ");
flight2go:
flushall();
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto flight2;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto flight2go;
    }
for(i=0;i<n;i++)
 {
clrscr();
passinfo:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    textcolor(9);
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(7);
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\tPassenger %d Information\n\n",i+1);
flushall();
printf("\t\tEnter the passenger %d name [ put _ of space ]\n\t\t\t\t\t\t",i+1);
scanf("%s",&p1[i].name);
strcpy(p2[i].name,p1[i].name);
printf("\n\t\tEnter the passenger %d Gender\n\t\t\t\t\t\t",i+1);
gen:
flushall();
scanf("%c",&p1[i].gb);
if((p1[i].gb!='M')&&(p1[i].gb!='F')&&(p1[i].gb!='m')&&(p1[i].gb!='f'))
{
	  printf("\n\t");
	  textcolor(4);
	  cprintf("Gender Input ERROR - try again");
	  printf("\t");
	  textcolor(15);
	  goto gen;
}
if(p1[i].gb=='m')
p1[i].gb='M';
if(p1[i].gb=='f')
p1[i].gb='F';
flushall();
printf("\n\t\tEnter passanger %d date of birth \n\t\t\t\t\t\t",i+1);
birth:
scanf("%d/%d/%d",&p1[i].dod,&p1[i].dom,&p1[i].doy);
x=verify_date(p1[i].dod,p1[i].dom,p1[i].doy);
p1[i].age=pass_age(p1[i].dod,p1[i].dom,p1[i].doy);
if((x!=1)||(p1[i].age<0))
{
textcolor(4);
printf("\n\t");
cprintf("Invalid date! Try Again");
printf("\t\t");
textcolor(15);
goto birth;
}
p2[i].pass_age=p1[i].age;
printf("\n\t\tPassenger %d Age - %d",i+1,p1[i].age);
if((p1[i].age>=0)&&(p1[i].age<=2))
strcpy(p2[i].pass_cat,"Infant");
else if((p1[i].age>2)&&(p1[i].age<18))
strcpy(p2[i].pass_cat,"Child");
else if((p1[i].age>=18))
strcpy(p2[i].pass_cat,"Adult");
printf(" [ %s ]",p2[i].pass_cat);
getch();
}
clrscr();
cont:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    textcolor(9);
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(7);
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\t\tContact Information\n");
printf("\n\t\t\tName: ");
scanf("%s",&ho);
printf("\n\t\tPhone number: "); 
scanf("%s",&ha); 
printf("\n\t\tEmail ID: "); 
scanf("%s",&hb); 
printf("\n\tContact info you provided: ");
printf("\n\n\tName: %s\n\tPhone Number: %s\n\tEmail ID: %s",ho,ha,hb);
printf("\n\n\t\tDo you want to continue ( y ,n ) -   ");
       contgo:
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto cont;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto contgo;
    }
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    textcolor(14);
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(7);
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n   Your Passengers Details\n\n");
printf("\tName  \t\t\tGender\t\tdob\t\tage\n\n");
for(i=0;i<n;i++)
{
printf("\t%s\t\t\t  %c\t\t%.2d/%.2d/%.4d\t%d\n",p1[i].name,p1[i].gb,p1[i].dod,p1[i].dom,p1[i].doy,p1[i].age);
}
printf("\n\n\t\tDo you want to continue ( y ,n ) -   ");
       passoutgo:
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto passinfo;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto passoutgo;
    }
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t\t\t\tYour Benefits\n\n\n");
       if(l==1)
       printf("\t\t 1. Baggage allowance - 25kg \n\n\t\t 2. Inflight entertainment \n\n\t\t 3. Economy class dining \n\n\t\t 4. Stay Wifi connected \n\n\t\t 5. Award winning service");
       else if(l==2)
       printf("\t\t 1. Baggage allowance - 40kg \n\n\t\t 2. Lie-flat seats \n\n\t\t 3. Business class dining \n\n\t\t 4. Award winning service \n\n\t\t 5. Stay Wifi connected");
       else if(l==3)
       printf("\t\t 1. Baggage allowance - 50kg \n\n\t\t 2. Chauffeur-drive Service \n\n\t\t 3. Onboard Shower Spa \n\n\t\t 4. Onboard Lounge \n\n\t\t 5. Private suites");       
getch();
clrscr();
Recommended:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t\t\t\tRecommended for you\n\n\n");
       printf("\t\t 1. Baggage Allowance\n\n\t\t 2. Choose your Seat\n\n\t\t 3. ALL of the above\n\n\t\t 4. NONE of the above\n\n\n");
       printf("\t\tType the serial no. for Benefits - ");
scanf("%d",&c);
if((c==1)||(c==3))
{
clrscr();
bagallow:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t\tExtra Baggage information\n\n");
printf("\t 1. 5kg  - INR 3,140 \t  2.  10kg - INR 6,279\n\n");
printf("\t 3. 15kg - INR 7,529 \t  4.  20kg - INR 10,049\n\n");
printf("\t 5. 25kg - INR 12,558\t  6.  30kg - INR 15,068\n\n");
printf("\t 7. 35kg - INR 17,577\t  8.  40kg - INR 20,087\n\n");
printf("\t 9. 45kg - INR 22,596\t  10. 50kg - INR 25,106\n\n\n");
printf("\t\tType the serial no. for Extra Baggage - ");
bagallowgo:
scanf("%d",&wt);
switch(wt)
{
case 1:bag=3140;
       break;
case 2:bag=6279;
       break;
case 3:bag=7529;
       break;
case 4:bag=10049;
       break;
case 5:bag=12558;
       break;
case 6:bag=15068;
       break;
case 7:bag=17577;
       break;
case 8:bag=20087;
       break;
case 9:bag=22596;
       break;
case 10:bag=25106;
       break;
default: clrscr();
	  printf("\t\t");
	  textcolor(12);
	  cprintf("Baggage Allowance Input ERROR - try again...");
	  printf("\n\n\t");
	  textcolor(15);
	  goto bagallow;
       }
flushall();
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
       printf("\n\n\t\tYou selected \n\n\t\tExtra Baggage - %d kg - [ INR %.2lf /- ]",wt*5,bag);
       printf("\n\n\t\tDo you want to continue ( y / n ) -   ");
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto bagallow;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto bagallowgo;
    }
}
if((c==2)||(c==3))
{
Seat_Alloc:
sprintf(rev,"%d%s.txt",l,fl_name);
flushall();
switch(l)
{
case 1: uu1=90; break;
case 2: uu1=60; break;
case 3: uu1=30; break;
}
uu2=uu1/10;
clrscr();
Check_Seat_Alloc:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\tSELECT your Seats - \n\n\t\t");
flushall();
for(i=1;i<=uu1;i++)
{
f1=fopen(rev,"r");
while((k=getw(f1))!=EOF)
{
s3=0;
if(k==i)
{
s3++;
break;
}
}
if(s3==1)
{
textcolor(12);
cprintf("  %.2d",i);
textcolor(15);
}
else
{
textcolor(15);
cprintf("  %.2d",i);
textcolor(15);
}
if(l==3)
printf("\t");
if(((l==2)||(l==1))&&(i%3==0))
printf("  ");
if(i%uu2==0)
printf("\n\t\t");
fclose(f1);
}
printf("\n\t\tNumber of seats - %d",n);
printf("\n\t\tEnter seat ");
if(n>1)
printf("numbers - ");
else
printf("number - ");
f2=fopen("toreserv.txt","w");
for(i=0;i<n;i++)
{
scanf("%d",&k);
putw(k,f2);
}
fclose(f2);
zz=0;
f2=fopen("toreserv.txt","r");
while((k=getw(f2))!=EOF)
{
if((k<=0)||(k>uu1))
{
zz++;
}
}
fclose(f2);
if(zz>0)
{
          clrscr();
	  printf("\t\t\t");
	  textcolor(12);
	  cprintf("Seat Selection ERROR - try again");
	  printf("\n\n\t");
	  textcolor(15);
	  goto Check_Seat_Alloc;
}
seat=2000*n;
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(9);
    cprintf("3. Options");
    textcolor(7);
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
flushall();
printf("\n\tYour SELECTED ");
if(n==1)
printf("Seat - ");
else
printf("Seats - ");
printf("\n\n\t\t");
flushall();
f2=fopen("toreserv.txt","r");
while((k=getw(f2))!=EOF)
{
printf("  %d",k);
}
fclose(f2);
printf("\n\n\t\tDo you want to continue ( y / n ) - ");
       Seat_Allocgo:
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto Seat_Alloc;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto Seat_Allocgo;
    }
}
fcloseall();
if((c==1)||(c==2)||(c==3))
{
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    textcolor(14);
    cprintf("3. Options");
    printf("\t");
    textcolor(7);
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n   \tYour ADDED Benefits - \n\n");
if((c==1)||(c==3))
{
printf("\t\tExtra Baggage - \n\n\t\t\t%d kg - [ INR %.2lf /- ]",wt*5,bag);
}
if((c==2)||(c==3))
{
printf("\n\n\t\tYour SELECTED Seats - \n\n\t\t\t");
flushall();
f2=fopen("toreserv.txt","r");
while((k=getw(f2))!=EOF)
{
printf("  %d",k);
}
fcloseall();
}
printf("\n\n\t\tDo you want to continue ( y ,n ) -   ");
       Recommendedgo:
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto Recommended;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto Recommendedgo;
    }
}
clrscr();
paysum:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    textcolor(9);
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\n\t\t\tYou Payment Summary\n\n");
printf("\tPrice\t\t\t\t:: %.2lf\n",z1);
if((c==1)||(c==3))
printf("\tExtra Baggage    \t\t:: %.2lf\n",bag);
if((c==2)||(c==3))
printf("\tSeat selection   \t\t:: %.2lf\n",seat);
Final_Amount=(z1*1.07)+bag+seat;
printf("\tTax  \t\t\t\t:: %.2lf\n\tTotal Price\t\t\t:: %.2lf \n",z1*0.07,Final_Amount);
printf("\n\n\n   Do you want to continue to pay OR Cancel your Booking ( c , x ) - ");
       go_topaygo:
       flushall();
       scanf("%c",&w);
    if((w=='X')||(w=='x'))
    {
    clrscr();
    Mid_drop();
    goto dashboard;
    }
    else if((w!='c')&&(w!='C')&&(w!='x')&&(w!='X'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto go_topaygo;
    }
clrscr();
pay:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    textcolor(9);
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
    printf("\n\n\t\tMode of Payment");
    printf("\n\n\t\t\t1. Google Pay\n\t\t\t2. Credit Card\n\t\t\t3. Debit Card\n\t\t\t4. Visa\n\n\n\t\tType the Serial Number of Type of TRIP -     ");
    scanf("%d",&j);
switch(j)
{
case 1:
strcpy(jo,"Google Pay");
printf("\n\t\t\tEnter Google Pay ID   :: ");
break;
case 2:
strcpy(jo,"Credit Card");
printf("\n\t\t\tEnter Credit Card no. :: ");
break;
case 3:
strcpy(jo,"Dedit Card");
printf("\n\t\t\tEnter Debit Card no.  :: ");
break;
case 4: 
strcpy(jo,"Visa Card");
printf("\n\t\t\tEnter Visa Card no.   :: ");
break;
default:
          clrscr();
          printf("\t\t\t\t");
          textcolor(4);
          cprintf("ERROR - try again");
          printf("\n\n\t");
          textcolor(15);
          goto pay;
}
scanf("%s",ja);
if((j==2)||(j==3)||(j==4))
{
printf("\n\t\t\tEnter Date of Expire   :: ");
scanf("%s",&jb);
}
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    textcolor(14);
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t\tYour Preferances and Credentials");
printf("\n\n\n\t\t\tMode of Payment :: %s\n\n\t\t\t%s ID :: %s",jo,jo,ja);
if((j==2)||(j==3)||(j==4))
printf("\n\n\t\t\tDate of Expire ::  %s",jb);
printf("\n\n\n\t\tDo you want to continue ( y ,n ) -   ");
paygo:
       flushall();
       scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto pay;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto paygo;
    }
clrscr();
Confirm_1:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(4);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t  >> Passenger Information\n\n");
printf("\tName\t\t\tAge\tSeat no.");
f2=fopen("toreserv.txt","r");
for(i=0;i<n;i++)
{
k=getw(f2);
p2[i].tk_name[strlen(p2[i].tk_name)-4] = '\0';
printf("\n\t%s\t\t\t%d\t",p2[i].name,p2[i].pass_age);
if(f2==NULL)
printf("-");
else
printf("%d",k);
}
fclose(f2);
printf("\n\n\t[1 of 3] Do you want to Confirm you Booking ( y ,n ) -   ");
 flushall();
    Confirm_1go:
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto Confirm_1;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto Confirm_1go;
    }
clrscr();
Confirm_2:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(12);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
flushall();
 switch(f)
  {
 case 1:strcpy(e2,"WAS");
       break;
 case 2:strcpy(e2,"NYC");
       break;
 case 3:strcpy(e2,"TOR");
       break;
 case 4:strcpy(e2,"SYD");
       break;
 case 5:strcpy(e2,"DXB");
       break;
 case 6:strcpy(e2,"STO");
       break;
 case 7:strcpy(e2,"OSL");
       break;
 case 8:strcpy(e2,"PAR");
       break;
 case 9:strcpy(e2,"LON");
       break;
 case 10:strcpy(e2,"TYO");
       break;
}
printf("\n\n\t  >> Your Itinerary");
printf("\n\n\t\t%.2d/%.2d/%.4d - %s [ %s ] \n\n\t\t- %s Class\n\n\n\t\t\t %s --------->--------- %s\n\t\t\t%.2d:%.2d\t\t\t%.2d:%.2d\n\n\n",day1,mon1,year1,fl1,fl_name,class,c2,e2,t1,t2,t3,t4);
printf("\t[2 of 3] Do you want to Confirm you Booking ( y ,n ) -   ");
flushall();
    Confirm_2go:
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto Confirm_2;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto Confirm_2go;
    }
clrscr();
Confirm_3:
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(14);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\t  >> Total price of your Booking\n\n");
printf("\tPrice\t\t\t\t:: %.2lf\n",z1);
if((c==1)||(c==3))
printf("\tExtra Baggage    \t\t:: %.2lf\n",bag);
if((c==2)||(c==3))
printf("\tSeat selection   \t\t:: %.2lf\n",seat);
Final_Amount=(z1*1.07)+bag+seat;
printf("\tTax  \t\t\t\t:: %.2lf\n\tTotal Price\t\t\t:: %.2lf \n",z1*0.07,Final_Amount);
printf("\n\t\t\tPaid through - %s",jo);
printf("\n\n\n\t[3 of 3] Do you want to Confirm you Booking ( y ,n ) -   ");
flushall();
    Confirm_3go:
    scanf("%c",&w);
    if((w=='n')||(w=='N'))
    {
    clrscr();
    goto Confirm_3;
    }
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto Confirm_3go;
    }
fz=fopen("bscount.txt","r");
fy=fopen("tkcount.txt","r");
if(fz==NULL)
bs1=0;
else
bs1=getw(fz);
if(fz==NULL)
tk1=0;
else
tk1=getw(fy);
fcloseall();
bs1++;
tk1++;
f2=fopen("toreserv.txt","r");
for(i=0;i<n;i++)
{
flushall();
sprintf(ticket,"TK%.4d.txt",tk1);
strcpy(p2[i].tk_name,ticket);
k=getw(f2);
fe=fopen(ticket,"w");
fprintf(fe,"\t\t\tIndividual Passenger Ticket");
ticket[strlen(ticket)-4]='\0';
fprintf(fe,"\n\n\tName ::  %s\n\tAge :: %d\n\tCategory :: %s\n\n\t\tFROM :: %s [ %s ]\n\n\t\t\tAirport - %s \n\n\t\t TO :: %s [ %s ]\n\t\t\tAirport - %s \n\n\t\t flight :: %s [ %s ]",p1[i].name,p1[i].age,p2[i].pass_cat,c1,c2,c5,e1,e2,e5,fl1,fl_name);
fprintf(fe,"\n\n\n\tDOJ :: %d / %d / %d \t Seat :: %d\n\n\n\tBoarding time :: %.2d:%.2d\tArrival time :: %.2d:%.2d",day1,mon1,year1,k,t1,t2,t3,t4);
fclose(fe);
tk1++;
}
sprintf(bs_name,"BS%.4d.txt",bs1);
fclose(f2);
fb=fopen(bs_name,"w");
fprintf(fb,"\t\t\t\tBooking Details\n\n\tBooking code::%s\t\tTime :: %s\n",bs_name,ctime(&t));
fprintf(fb,"\t  >> Passenger Information\n\n");
fprintf(fb,"\tName\t\tAge\tTicket no.\tSeat no.");
f2=fopen("toreserv.txt","r");
for(i=0;i<n;i++)
{
k=getw(f2);
p2[i].tk_name[strlen(p2[i].tk_name)-4] = '\0';
fprintf(fb,"\n\t%s\t\t%d\t%s\t\t",p2[i].name,p2[i].pass_age,p2[i].tk_name);
if(f2==NULL)
fprintf(fb,"-");
else
fprintf(fb,"%d",k);
}
fclose(f2);
fprintf(fb,"\n________________________________________________________________________________\n");
fprintf(fb,"\t  >> Your Itinerary");
fprintf(fb,"\t%.2d/%.2d/%.4d - %s [ %s ] - %s Class\n\n\t\t\t %s --------->--------- %s\n\t\t\t%.2d:%.2d\t\t\t%.2d:%.2d",day1,mon1,year1,fl1,fl_name,class,c2,e2,t1,t2,t3,t4);
fprintf(fb,"\n________________________________________________________________________________\n");
fprintf(fb,"\t  >> Total price of your Tickets\n\n");
fprintf(fb,"\tPrice\t\t\t\t:: %.2lf\n",z1);
if((c==1)||(c==3))
fprintf(fb,"\tExtra Baggage    \t\t:: %.2lf\n",bag);
if((c==2)||(c==3))
fprintf(fb,"\tSeat selection   \t\t:: %.2lf\n",seat);
fprintf(fb,"\tTax  \t\t\t\t:: %.2lf\n\tTotal Price\t\t\t:: %.2lf \n",z1*0.07,Final_Amount);
fprintf(fb,"\n\t\t\tPaid through - %s",jo);
fcloseall();
fz=fopen("bscount.txt","w");
putw(bs1,fz);
fclose(fz);
fy=fopen("tkcount.txt","w");
putw(tk1,fz);
f2=fopen("toreserv.txt","r");
f1=fopen(rev,"a+");
while((k=getw(f2))!=EOF)
{
putw(k,f1);
}
fcloseall();
f2=fopen("toreserv.txt","w");
fcloseall();
clrscr();
textcolor(15);
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(10);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\n\t\t  Your Booking is\n\n\t\t  ");
textcolor(10);
cprintf("C O N F I R M E D");
textcolor(15);
bs_name[strlen(bs_name)-4]='\0';
printf("\n\n\t\tYour Booking Summary no. - %s\n\n\t\tCheck your Booking Summary and Individual Tickets \n\n\t\t\t\t from Dashboard > Display DOCS",bs_name);
getch();
clrscr();
goto dashboard;
exit:
}
void complaint()
{
FILE *fb,*ft,*fu;
int i,q,com1;
 char n[50],p[50],l[50],com_name[20];
 char comment[200],behalf[30];
 clrscr();
printf("\n\t\t\t\tC O M P L A I N T\n________________________________________________________________________________\n\n");
 printf("\n\n\t\tYour Personal Details\n\n\t\t");
gets(n);
 printf("First name: ");
scanf("%[^\n]",n);
gets(p);
 printf("\n\t\tTicket number: ");
 scanf("%[^\n]",&p);
clrscr();
printf("\n\t\t\t\tC O M P L A I N T\n________________________________________________________________________________\n\n");
printf("\n\t\tFormal complaint type\n\n\n\t\t\t1. Airport Handling\n\n\t\t\t2. Baggage Delivery\n\n\t\t\t3. Booking & Ticketing\n\n\t\t\t4. Inflight Services\n\n\t\t\t5. Other");
printf("\n\n\n\t Press the number beside for desired Options\n\n\t");
scanf("%d",&i);
 switch(i)
   {
 case 1:strcpy(l,"Airport Handling");
 break;
 case 2:strcpy(l,"Baggage Delivery");
 break;
 case 3:strcpy(l,"Booking & Ticketing");
 break;
 case 4:strcpy(l,"Inflight Services");
 break;
 case 5:break;
  }
clrscr();
printf("\n\t\t\t\tC O M P L A I N T\n________________________________________________________________________________\n\n");
if(i==5)
{
	gets(l);
	printf("\n\n\t\tComplaint in 2 words::");
	scanf("%[^\n]",l);
}
if(i!=5)
printf("\n");
gets(comment);
 printf("\n\t\tYour comment:%s",comment);
 scanf("%[^\n]",comment);
 printf("\n\n\n\t\t1. I confirm that i was a passenger on the flight mentioned.\n\n\t\t2. I am writing on behalf of the passenger\n\n\t\t\t\t");
 scanf("%d",&q);
 if(q==1)
strcpy(behalf,"Passenger");
 if(q==2)
strcpy(behalf,"Relative");
clrscr();
ft=fopen("comcot.txt","r");
if(ft==NULL)
com1=0;
else
com1=getw(ft);
fclose(ft);
sprintf(com_name,"com%.4d.txt",com1);
fb=fopen(com_name,"w");
fprintf(fb,"\n\t\t\t\tC O M P L A I N T\n________________________________________________________________________________\n\n");
fprintf(fb,"\n\t\t\t\tYour COMPLAINT\n\n");
fprintf(fb,"\n\t\tName               :: ");
fputs(n,fb);
fprintf(fb,"\n\t\tTicket number      :: ");
fputs(p,fb);
fprintf(fb,"\n\t\tType of Complaint  :: ");
fputs(l,fb);
fprintf(fb,"\n\t\tYour Comments      :: ");
fputs(comment,fb);
fprintf(fb,"\n\t\tComplaint filed by :: %s",behalf);
fcloseall();
clrscr();
printf("\n\t\t\t\tC O M P L A I N T\n________________________________________________________________________________\n\n");
printf("\n\n\n\t\t  Your Complaint is\n\n\t\t\t  ");
textcolor(10);
cprintf("F I L E D");
textcolor(15);
com_name[strlen(com_name)-4]='\0';
printf("\n\n\t\tYour Complaint no. - %s",com_name);
fu=fopen("complain.txt","a+");
fprintf(fu,"\n\n\t\t%s",com_name);
com1++;
ft=fopen("comcot.txt","w");
putw(com1,ft);
fclose(ft);
getch();
clrscr();
}
int verify_date(day,mon,year)
{
    int is_leap = 0, is_valid = 1;
    if (year >= 1800 && year <= 9999)
    {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	    is_leap = 1;
	if(mon >= 1 && mon <= 12)
	{
            if (mon == 2)
            {
                if (is_leap && day == 29) 
                    is_valid = 1;
                else if (day > 28) 
                    is_valid = 0;
            }
            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) 
            {
                if (day > 30)
                    is_valid = 0;
            }
            else if(day > 31)            
                is_valid = 0;        
        }
        else
            is_valid = 0;
    }
    else
        is_valid = 0;
    if(is_valid)
	return 1;
    else
	return -1;
}
int leapYearFeb(int year4, int mon4)
{
    int flag = 0;
    if (year4 % 100 == 0)
    {
	if (year4 % 400 == 0)
	{
	    if (mon4 == 2)
	    {
		flag = 1;
	    }
	}
    }
    else if (year4 % 4 == 0)
    {
	if (mon4 == 2)
	{
	    flag = 1;
	}
    }
    return (flag);
}
int pass_age(days4, month4, year4)
{
    int daysInMon4[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    char dob[100];
    time_t ts;
    struct tm *ct;
    ts = time(NULL);
    ct = localtime(&ts);
    days4 = daysInMon4[month4 - 1] - days4 + 1;
    if (leapYearFeb(year4, month4))
    {
	days4 = days4 + 1;
    }
    days4 = days4 + ct->tm_mday;
    month4 = (12 - month4) + (ct->tm_mon);
    year4 = (ct->tm_year + 1900) - year4 - 1;
    if (leapYearFeb((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
	if (days4 >= (daysInMon4[ct->tm_mon] + 1))
	{
	    days4 = days4 - (daysInMon4[ct->tm_mon] + 1);
	    month4 = month4 + 1;
	}
    }
    else if (days4 >= daysInMon4[ct->tm_mon])
    {
	days4 = days4 - (daysInMon4[ct->tm_mon]);
	month4 = month4 + 1;
    }
    if (month4 >= 12)
    {
	year4 = year4 + 1;
	month4 = month4 - 12;
    }
    return year4;
  }
int Journey_day_Test(days4, month4, year4)
{
    int daysInMon4[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    char dob[100];
    time_t ts;
    struct tm *ct;
    ts = time(NULL);
    ct = localtime(&ts);
    days4 = daysInMon4[month4 - 1] - days4 + 1;
    if (leapYearFeb(year4, month4))
    {
	days4 = days4 + 1;
    }
    days4 = days4 + ct->tm_mday;
    month4 = (12 - month4) + (ct->tm_mon);
    year4 = (ct->tm_year + 1900) - year4 - 1;
    if (leapYearFeb((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
	if (days4 >= (daysInMon4[ct->tm_mon] + 1))
	{
	    days4 = days4 - (daysInMon4[ct->tm_mon] + 1);
	    month4 = month4 + 1;
	}
    }
    else if (days4 >= daysInMon4[ct->tm_mon])
    {
	days4 = days4 - (daysInMon4[ct->tm_mon]);
	month4 = month4 + 1;
    }
    if (month4 >= 12)
    {
	year4 = year4 + 1;
	month4 = month4 - 12;
    }
    if((year4<0)||(month4<0)||(days4<0))
    return -1;
    else 
    return 0;
  }
void display_docs()
{
FILE *f7;
int pp; 
char dis[20],r;
clrscr();
display:
printf("\n\t\t\t\tDISPLAY DOCUMENTS\n________________________________________________________________________________\n\n");
printf("\tType of document\n\n\n\t\t1. Booking Summary\n\n\t\t2. Individual Ticket\n\n\tType serial no. of Type of document - ");
scanf("%d",&pp);
clrscr();
printf("\n\t\t\t\tDISPLAY DOCUMENTS\n________________________________________________________________________________\n\n\n");
if(pp==1)
printf("\t\tEnter Booking Summary Number\n\n\t\t\t\t-  ");
else if(pp==2)
printf("\t\tEnter Individual Ticket Number\n\n\t\t\t\t-  ");
else
{
clrscr();
	  printf("\t\t\t\t");
	  textcolor(12);
	  cprintf("option ERROR - try again");
	  printf("\n\n\t");
	  textcolor(15);
	  goto display;
}
scanf("%s",&dis);
strcat(dis,".txt");
f7=fopen(dis,"r");
if(f7==NULL)
{
printf("\n\n\t\t\t\tDATA NOT FOUND");
}
else
{
clrscr();
while((r=getc(f7))!=EOF)
{
printf("%c",r);
}
}
fclose(f7);
getch();
}
void Mid_drop()
{
char w;
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(14);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\n\tAre you sure about \n\n\t\t\tCancelling your Booking process ( y , n ) -   ");
pass2go:
flushall();
    scanf("%c",&w);
    if((w=='y')||(w=='Y'))
    goto Confirm_cancel;
    else if((w=='n')||(w=='N'))
    goto passnext;
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto pass2go;
    }
Confirm_cancel:
clrscr();
printf("\n\t\t\t\tB O O K I N G\n________________________________________________________________________________\n");
textcolor(12);
    cprintf("      1. Flight");
    printf("\t");
    cprintf("    2. Passenger");
    printf("\t");
    cprintf("3. Options");
    printf("\t");
    cprintf("    4. Payment");
    textcolor(15);
printf("\n________________________________________________________________________________");
printf("\n\n\n\t\t  Your Booking Process is\n\n\t\t\t  ");
textcolor(12);
cprintf("C A N C E L L E D");
textcolor(15);
getch();
exit(0);
passnext:
}
void Cancel_Ticket()
{
time_t t = time(NULL);
FILE *f7;
char dis[20],r,w;
clrscr();
printf("\n\t\t\tC A N C E L  T I C K E T\n________________________________________________________________________________\n");
printf("\n\n\n\t\tEnter Individual Ticket Number\n\n\t\t\t\t-  ");
scanf("%s",&dis);
clrscr();
printf("\n\t\t\tC A N C E L  T I C K E T\n________________________________________________________________________________\n");
strcat(dis,".txt");
f7=fopen(dis,"r");
if(f7==NULL)
{
printf("\n\n\t\t\t\tDATA NOT FOUND");
getch();
goto exit_cancel;
}
else
{
while((r=getc(f7))!=EOF)
{
printf("%c",r);
}
}
fclose(f7);
printf("\n\n\t\tDo you want to cancel your ticket - ");
cango:
flushall();
    scanf("%c",&w);
    if((w=='y')||(w=='Y'))
    goto cancel_out;
    else if((w=='n')||(w=='N'))
    goto can_req_striked;
    else if((w!='y')&&(w!='Y')&&(w!='n')&&(w!='N'))
    {
    textcolor(4);
    printf("\n\t");
    cprintf("Invalid Character! Try Again");
    printf("\t\t");
    textcolor(15);
    goto cango;
    }
cancel_out:
f7=fopen(dis,"w");
fprintf(f7,"\n\n\n\n\t\t\tThis ticket is Cancelled at\n\t\t\t  %s",ctime(&t));
fclose(f7);
clrscr();
printf("\n\t\t\tC A N C E L  T I C K E T\n________________________________________________________________________________\n");
printf("\n\n\n\t\t\tYour Ticket stands \n\n\t\t\t");
textcolor(10);
cprintf("C A N C E L L E D");
textcolor(15);
printf("\n\n\t\t\tRefund based on Eligiblity will be done soon");
getch();
goto exit_cancel;
can_req_striked:
clrscr();
printf("\n\t\t\tC A N C E L  T I C K E T\n________________________________________________________________________________\n");
printf("\n\n\n\t\t\tYour cancel request is \n\n\t\t\t");
textcolor(12);
cprintf("C A L L E D   O F F");
textcolor(15);
getch();
exit_cancel:
fcloseall();
}
