

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>
#include<alloc.h>
#include<dos.h>
#include<string.h>
int ins=0;

class dbl     //doubly linked list class
{
	struct Node
	{
	  int data;
	  struct Node *next,*prev;
	};
	struct Node *head;
public:
	dbl() //default constructor
	{
		head=NULL;                 //intilization of head
	}
	void create();
	void insert();
	void display();
	void del();
	void rev();
	void sum();
	void sort();
	void search();
	void password();
	void welcome();
	void siom();
	void menu();
	void warning();
	int  count();
	int count1();
	int  occr();

};

void dbl::password()      // function for authentication
{
	int b,c,c1,c2,c3;
	static int tm=0;
	char s[20];
	char ch,pass[20],n1[20]={"1234"};
	clearviewport();
	setfillstyle(SOLID_FILL,GREEN);
	settextstyle(8,0,2);
	setcolor(BLUE);
	outtextxy(150,127,"Login ID");
	bar(150,160,500,350);
	setfillstyle(SOLID_FILL,BLACK);
	bar(300,190,470,210);
	bar(300,240,470,260);
	settextstyle(0,0,2);
	outtextxy(165,190,"Name");
	outtextxy(165,240,"Passward");
	setcolor(WHITE);
	gotoxy(39,13);
	cin>>s;
	gotoxy(39,16);

	for(int i=0;;i++)
	{
		ch=getch();
		if(ch==13)
		{
			pass[i]='\0';
			break;
		}
		else if(ch==27)
			exit(-1);
		else
		{ 	cout<<"*";
			pass[i]=ch;
			pass[i+1]='\0';
		}
	}

	b=strcmp(pass,n1);
	c=strcmp("vinay",s);
	c1=strcmp("ritesh",s);
	c2=strcmp("sunny",s);
	c3=strcmp("siom",s);

	if(b==0&&c==0 || b==0&&c1==0 || b==0&&c2==0 ||b==0&&c3==0)
	menu();
	else
	{
		warning();
		outtextxy(280,240,"Wrong Passward");
		outtextxy(290,260,"Try Again");
		delay(2000);
		tm++;
		if(tm>=3)
		exit(0);
		password();
	}
}

void dbl::welcome()           // function for welcome window
{
	int x=250,y=200;
	int a=145,b=10,j=500;
	clearviewport();
	setcolor(4);
	settextstyle(7,0,6);
	outtextxy(x,y,"ome");
	delay(2000);

	for(int i=0;i<20;i++)
	{
		clearviewport();
		outtextxy(250,200,"ome");
		outtextxy(a,b,"Wel");
		b=b+10;
		delay(50);
	}
	for(i=0;i<15;i++)
	{
		clearviewport();
		setcolor(BLUE);
		outtextxy(250,200,"ome");
		outtextxy(145,200,"Wel");
		outtextxy(j,200,"c");
		j=j-20;
		delay(100);
	}
	delay(1000);
	int s=0;
	j=j+20;
	for(i=0;i<25;i++)
	{
		clearviewport();
		if(i<10)
		{
			outtextxy(250+s,200+s,"ome");
			outtextxy(145+s,200+s,"Wel");
			outtextxy(j+s,200+s,"c");
			s=s+20;
		}
		if(i>10)
		{
			outtextxy(250+s,200,"ome");
			outtextxy(145+s,200,"Wel");
			outtextxy(j+s,200,"c");
			s=s+20;
		}
		delay(100);
	}
	siom();
}

void dbl::siom()         // function for college name
{
	int sou=0,sou1=0;
	int i,a=140,b=50,c=150,d=60,p=500,q=412,r=490,s=402,t,u,v,w,x,y,z,g;
	clearviewport();
	setbkcolor(BLACK);
	for(i=0;i<35;i++)
	{
		sound(sou);
		setfillstyle(SOLID_FILL,10);
		circle(a,b,c);
		delay(99);
		a=a+10;
		c=a+10;
		sou=sou+100;
	}
	for(i=0;i<35;i++)
	{
		sound(sou1);
		setfillstyle(SOLID_FILL,2);
		delay(99);
		p=p-10;
		r=p-10;
		q=q-10;
		circle(p,q,r);
		sou1=sou1+100;
	}
		nosound();
		setcolor(RED);
		settextstyle(7,0,5);
		outtextxy(290,80,"Sinhgad");
		delay(100);
		settextstyle(7,0,3);
		outtextxy(320,135,"Institue of");
		delay(120);
		outtextxy(310,165,"Management");
		delay(150);
		outtextxy(390,220,"(M.C.A)");
		delay(500);

		setcolor(GREEN);
		settextstyle(7,0,3);
		outtextxy(130,250,"Submitted By :");
		line(130,275,300,275);
		delay(100);
		settextstyle(7,0,3);
		outtextxy(140,275,"Sunny Choudhary   10");
		delay(120);
		outtextxy(140,300,"Vinay Shah        47");
		delay(150);
		outtextxy(140,325,"Ritesh Wattyani   65");
		delay(10000);
		clearviewport();

}
void dbl::warning()           // warning menu
{
	setfillstyle(SOLID_FILL,BLUE);
	bar(200,200,450,325);
	setfillstyle(SOLID_FILL,YELLOW);
	bar(203,215,447,322);
	setcolor(WHITE);
	settextstyle(0,0,0);
	outtextxy(210,205,"WARNING");
	setfillstyle(SOLID_FILL,RED);
	bar(435,200,448,213);
	rectangle(419,200,432,213);
	rectangle(404,200,417,213);
	line(407,209,414,209);
	rectangle(421,203,429,210);
	line(438,203,445,210);
	line(438,210,445,203);
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,266,25);
	floodfill(240,266,RED);
	setcolor(WHITE);
	line(227,279,253,253);
	line(253,279,227,253);
	setcolor(RED);

}

void dbl::create()     //creation of a new doubly linked list
{
	 Node *newnode,*temp;
	 char ch='y';
	 settextstyle(0,0,0);
	 clearviewport();
	 setcolor(10);
	 do
	 {
		setfillstyle(SOLID_FILL,GREEN);
		bar(120,0,455,180);
		setfillstyle(SOLID_FILL,BLUE);
		bar(125,5,450,175);
		outtextxy(130,65,"Element For Link List");
		line(130,80,240,80);
		lbl:
		setfillstyle(SOLID_FILL,BLACK);
		bar(375,60,425,80);
		newnode=new Node;
		gotoxy(50,5);
		cin>>newnode->data;

		while(!cin)
		{
			cin.clear();
			cin.ignore();
			goto lbl;
		}
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
			newnode->next=NULL;
			newnode->prev=NULL;
			display();
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			display();
		}
		outtextxy(130,100,"Press  'Y'  to Add More Node");
		bar(375,95,425,115);
		line(130,115,290,115);
		gotoxy(50,7);
		cin>>ch;
		clearviewport();
		display();
	}while(ch=='y');
	ins++;
	menu();


}
void dbl::insert() //insertion of a new node at desired postion
{

	settextstyle(0,0,0);
	setcolor(10);
	  Node *newnode,*temp,*temp1;
	  temp=head;
	  temp1=temp->next;
	  clearviewport();
	  display();
	  setfillstyle(SOLID_FILL,RED);
	  bar(120,0,455,180);
	  setfillstyle(SOLID_FILL,GREEN);
	  bar(125,5,450,175);
	A:
	  setfillstyle(SOLID_FILL,BLACK);
	  bar(375,65,425,80);
	  int pos,nt=1;
	  outtextxy(130,70,"Index Number :");
	  line(130,80,200,80);
	  gotoxy(50,5);
	  cin>>pos;

	  while(!cin)
	  {
		cin.clear();
		cin.ignore();

		goto A;
	  }
	  outtextxy(130,100,"New Element");
	lbl:

	  bar(375,95,425,115);
	  line(130,115,260,115);
	  newnode= new Node;
	  gotoxy(50,7);
	  cin>>newnode->data;
	  while(!cin)
	  {
		cin.clear();
		cin.ignore();

		goto lbl;
	  }

	  if(pos>count1()+1)
	  {
		warning();
		outtextxy(280,240,"Wrong Input");
		getch();
		return;
	  }

	  int index=2;

	  if(pos==1)    //if the element inserted at first position
	  {
		newnode->prev=NULL;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
		clearviewport();
		display();
		return;

	  }
	  else if(pos==index)
	  {
		newnode->prev=temp;
		newnode->next=temp1;
		temp1->prev=newnode;
		temp->next=newnode;
		nt=0;
		clearviewport();
		display();
		return;

	  }

	  else
	  {
		while(temp)
		{
			temp=temp->next;
			temp1=temp->next;
			index++;
			if(pos==index)
			{
				newnode->prev=temp;
				newnode->next=temp1;
				temp1->prev=newnode;  //intialization of temp next elments pre link as newnode
				temp->next=newnode;
				nt=0;
				clearviewport();
				display();
				return;

			}
		}
	 }
	 warning();
	 outtextxy(320,240,"No Match Found");
	 outtextxy(320,260,"Wrong Input");
	 delay(400);
	 menu();
}

int dbl::count1()   // counts the number of elements in linklist
{
	int cnt=0;
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		return cnt;
	}

	while(temp)
	{

		cnt++;
		temp=temp->next;
	}
	return cnt;

}


int dbl::count()   // graphics implimentation of count.
{
	int cnt=0;
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(300,240,"NO Nodes in Linked List");
		return cnt;
	}

	display();

	while(temp)
	{

		cnt++;
		temp=temp->next;
	}
			setfillstyle(SOLID_FILL,GREEN);
			bar(120,0,455,180);
			setfillstyle(SOLID_FILL,BLUE);
			bar(125,5,450,175);
			outtextxy(130,65,"Total Nodes in Linked List");
			line(130,80,240,80);
			gotoxy(50,5);
			cout<<cnt;
	return cnt;

}

int dbl::occr()
{
	int cnt=0;
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		warning();
		outtextxy(280,240,"No Nodes in the Linklist");
		return cnt;
	}
	settextstyle(0,0,0);
	setcolor(10);
	clearviewport();
	display();
	setfillstyle(SOLID_FILL,GREEN);
	bar(120,0,455,180);
	setfillstyle(SOLID_FILL,BLUE);
	bar(125,5,450,175);
	setfillstyle(SOLID_FILL,BLACK);
	lab:
	int no;
	bar(375,60,425,80);
	outtextxy(130,65,"Enter Number to find Occurance");
	line(130,80,200,80);
	gotoxy(50,5);
	cin>>no;

	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			cnt++;
		}
		temp=temp->next;
	}
			bar(375,90,425,110);
			outtextxy(130,95,"Occruance of element");
			line(130,80,240,80);
			gotoxy(50,7);
			cout<<cnt;
	return cnt;
}


void dbl::display()      // displays linklist
{
	int a=35,b=210,c=75,d=250,x=6,y=15,e=25,f=210,g=65,h=250,lin=0;
	Node *temp;
	settextstyle(0,0,0);
	temp=head;

	if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(290,240,"Linked List is Empty");
		return;

	}
	setcolor(14);
	while(temp)
	{
		rectangle(a,b,c,d);
		rectangle(e,f,g,h);
		if(lin!=0)
		{
			line(c-80,230,c-50,230);
			line(c-80,228,c-50,228);
		}
		lin++;
		gotoxy(x,y);
		cout<<temp->data;
		temp=temp->next;
		a=c+40;
		c=a+40;
		x=x+10;
		e=g+40;
		g=e+40;
	}
}

void dbl::del()        // deletion of a node from a derired position
{
	Node *temp,*temp1;
	temp=head;
	temp=head;
	if(temp==NULL)
	{
		warning();
		outtextxy(280,240,"No Nodes in the Linklist");
		return;
	}
	settextstyle(0,0,0);
	setcolor(10);
	clearviewport();
	display();
	setfillstyle(SOLID_FILL,GREEN);
	bar(120,0,455,180);
	setfillstyle(SOLID_FILL,BLUE);
	bar(125,5,450,175);
	setfillstyle(SOLID_FILL,BLACK);
	lab:
	int no;
	bar(375,60,425,80);
	outtextxy(130,65,"Enter POSITION to delete Node");
	line(130,80,200,80);
	gotoxy(50,5);
	cin>>no;
	while(!cin)
	{
		cin.clear();
		cin.ignore();
		goto lab;
	}
	if(no>count1())
	{
		warning();
		outtextxy(280,250,"Wrong Input");
		getch();
		return;
	}

	int index=1,count=0,qqq=0,j,ll=0,bm;
	temp=head;
	if(no==1)
	{
		for(int j=155;j<173;j=j+5)
		{
			for(int i=1;i<7;i++)
			{
				clearviewport();
				display();
				setcolor(RED);
				setfillstyle(SOLID_FILL,RED);
				bar(50,175,60,185);
				circle((35+40/2),225,40);
				floodfill((35+40/2),225,RED);
				setcolor(WHITE);
				line(55,155-ll,55,175);
				setcolor(YELLOW);
				circle(55,j,i);
				delay(200);
				ll=ll-1;
			}
		}
		for(int bm=0;bm<40;bm++)
		{
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);
			circle(55,225,bm);
			floodfill(55,225,YELLOW);
			delay(10);
		}
		clearviewport();
		if(head->next==NULL)
		{
			cout<<"/_\  you r deleting last node";
			ins=0;
		}
		head=temp->next;
		delete temp;
		display();
		outtextxy(150,350,"Node numberis deleted");
		return;
	}
		while(index<no)
		{
			temp1=temp;
			temp=temp->next;
			index++;
			qqq=qqq+80;
			ll=0;
			if(temp==NULL)
			{
				warning();
				outtextxy(260,240,"Wrong input");
				getch();
				return;
			}
		}

		for(j=155;j<173;j=j+5)
		{
			for(int i=1;i<7;i++)
			{
				clearviewport();
				display();
				setcolor(RED);
				setfillstyle(SOLID_FILL,RED);
				bar(50+qqq,175,60+qqq,185);
				circle(55+qqq,225,40);
				floodfill(55+qqq,225,RED);
				setcolor(WHITE);
				line(55+qqq,155-ll,55+qqq,175);
				setcolor(YELLOW);
				circle(55+qqq,j,i);
				delay(200);
				ll=ll-1;
			}
		}
		for(bm=0;bm<40;bm++)
		{
			 setcolor(YELLOW);
			 setfillstyle(SOLID_FILL,YELLOW);
			 circle(55+qqq,225,bm);
			 floodfill(55+qqq,225,YELLOW);
			 delay(10);
		}
		clearviewport();
		temp1->next=temp->next;
		temp->next->prev=temp1;
		delete temp;
		display();
		outtextxy(100,400,"node deleted");

}

void dbl::sum() //Summation of all elements in Linked List
{
	Node *temp=head;
	int sum=0;
	if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(300,240,"NO Numbers in list");
		return;
	}
	else
	{
		settextstyle(0,0,0);
		setcolor(15);
		clearviewport();
		setfillstyle(SOLID_FILL,GREEN);
		bar(120,0,455,180);
		setfillstyle(SOLID_FILL,BLUE);
		bar(125,5,450,175);
		display();
		do
		{
			sum=sum+temp->data;
			temp=temp->next;
		}while(temp!=NULL);
			setfillstyle(SOLID_FILL,GREEN);
			bar(120,0,455,180);
			setfillstyle(SOLID_FILL,BLUE);
			bar(125,5,450,175);
			outtextxy(130,65,"SUM of all elements is");
			line(130,80,240,80);
			gotoxy(50,5);
			cout<<sum;

	}
}
void dbl::search() //searching of an Element in The Doubly LInked List
{

	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(300,240,"Nothing to Search");
		return;
	}
	int flag=0;
	settextstyle(0,0,0);
	setcolor(10);
	clearviewport();
	setfillstyle(SOLID_FILL,GREEN);
	bar(120,0,455,180);
	setfillstyle(SOLID_FILL,BLUE);
	bar(125,5,450,175);
	lbl:
	setfillstyle(SOLID_FILL,BLACK);
	bar(375,60,425,80);
	outtextxy(130,65,"Enter number to search");
	line(130,80,200,80);
	gotoxy(50,5);
	int no;
	cin>>no;
	while(!cin)
	{
		cin.clear();
		cin.ignore();
		goto lbl;

	}
	int cm=0;         //variable for move circle
	clearviewport();
	while(temp)
	{
		display();
		setcolor(9);
		circle(50+cm,230,20);
		setcolor(8);
		circle(50+cm,230,21);
		setcolor(7);
		circle(50+cm,230,22);
		setcolor(6);
		circle(50+cm,230,19);
		delay(700);
		if(no==temp->data)
		{
			outtextxy(150,350,"Number Found");
			display();
			flag++;
			break;
		}
		temp=temp->next;
		cm=cm+80;
		clearviewport();
	}
	if(flag==0)
	{
			outtextxy(150,350,"Number NOT Found");
			sound(200);
			delay(400);
			nosound();
			display();
	}
}

void dbl::sort()     // function for sorting the Linked List
{
	clearviewport();
	Node *temp,*temp1;
	int no,a=35,b=210,c=75,d=250,x=6,y=15,e=25,f=210,g=65,h=250,lin=0;
	settextstyle(0,0,0);
	temp=head;

	if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(290,240,"No Elements in List");
		return;
	}

	else
	{

		for(temp=head;temp!=NULL;temp=temp->next)
		{
		  for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
		  {

			if(temp->data > temp1->data) //swapping the greater element
			{

			setcolor(10);
			rectangle(a,b+50,c,d+50);
			rectangle(e,f+50,g,h+50);
			if(lin!=0)
			{
				line(c-80,280,c-50,280);
				line(c-80,278,c-50,278);
			}
			lin++;

				no=temp->data;
				temp->data=temp1->data;
				temp1->data=no;
				gotoxy(x,y+3);
				cout<<temp->data;
				a=c+40;
				c=a+40;
				x=x+10;
				e=g+40;
				g=e+40;
			}
		  }
		}
	}
}


void dbl::rev()    // reversing a linked list
{
	clearviewport();
	int a=35,b=210,c=75,d=250,x=6,y=15,e=25,f=210,g=65,h=250,lin=0;
	Node *temp;
	temp=head;
	settextstyle(0,0,0);
	if(count1()==1)
	{
			 rectangle(a,b+50,c,d+50);
			 rectangle(e,f+50,g,h+50);
			 if(lin!=0)
			 {
				line(c-80,280,c-50,280);
				line(c-80,278,c-50,278);
			 }
			 lin++;
			 gotoxy(x,y+3);
			 cout<<temp->data;
			 return;
	}
	else if(temp==NULL)
	{
		clearviewport();
		warning();
		outtextxy(290,240,"Nothing to Reverse");
		return;
	}
	else
	{
		clearviewport();
		setcolor(10);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		do
		{
			 rectangle(a,b+50,c,d+50);
			 rectangle(e,f+50,g,h+50);
			 if(lin!=0)
			 {
				line(c-80,280,c-50,280);
				line(c-80,278,c-50,278);
			 }
			 lin++;
			 gotoxy(x,y+3);
			 a=c+40;
			 c=a+40;
			 x=x+10;
			 e=g+40;
			 g=e+40;
			 cout<<temp->data;
			 temp=temp->prev;
		} while(temp->prev!=NULL);
			 rectangle(a,b+50,c,d+50);
			 rectangle(e,f+50,g,h+50);
			 line(c-80,280,c-50,280);
			 line(c-80,278,c-50,278);
		gotoxy(x,y+3);
		cout<<temp->data;



	}

}


void dbl::menu()   // displays main menu
{
	int i,a=260,b=25,c=390,d=50;
	char ch;
	clearviewport();
	setbkcolor(BLACK);
	settextstyle(7,0,2);
	outtextxy(430,330,"Enter Your Choice");
	setfillstyle(SOLID_FILL,8);
	bar(250,15,400,430);
	 /*	for(i=0;i<10;i++)
	{
		setfillstyle(SOLID_FILL,i+2);
		bar(a,b,c,d);
		b=d+10;
		d=b+35;
	}       */
	setcolor(BLACK);
	settextstyle(5,0,1);
	if(ins==0)
	outtextxy(275,30,"1.CREATE");
	else
	outtextxy(275,30,"1.INSERT");
	outtextxy(275,70,"2.DELETE");
	outtextxy(275,110,"3.DISPLAY");
	outtextxy(275,150,"4.SEARCH");
	outtextxy(275,190,"5.SORT");
	outtextxy(275,230,"6.SUM");
	outtextxy(275,270,"7.REVERSE");
	outtextxy(275,310,"8.OCCURANCE");
	outtextxy(275,350,"9.COUNT");
	outtextxy(275,390,"0.EXIT");
	setcolor(10);
	rectangle(230,0,420,440);
	rectangle(235,5,415,435);
	rectangle(430,360,495,420);
	rectangle(435,365,490,415);

	A:
	gotoxy(58,25);
	cin>>ch;
	while(!cin)
	{
		cin.clear();
		cin.ignore();
		goto A;
	}

	switch(ch)
	{
		case '1':
			if(ins==0)
			{
				clearviewport();
				create();
				ins++;
			}
			else
			{
				insert();
			}
				break;
		case '2':
				clearviewport();
				del();
				break;
		case '3':
				clearviewport();
				display();
				break;
		case '4':
				clearviewport();
				search();
				break;

		case '5':
				clearviewport();
				//	sort();
				display();
				break;
		case '6':
				clearviewport();
				sum();
				break;
		case '7':
				clearviewport();
				rev();
				display();
				break;
		case '8':
				clearviewport();
				occr();
				break;
		case '9':
				clearviewport();
				count();
				break;

		case '0':
				clearviewport();
				exit(0);
				break;


		default:
				warning();
				outtextxy(320,240,"Wrong input");
				break;
	}
}



void main()        // main function   // Mudde Ki BaaT
{
	clrscr();
	int gdriver = DETECT, gmode, errorcode;
	int index,q,add;
	int ch=0,sr;
	dbl a;
	initgraph(&gdriver, &gmode, "");
	a.welcome();
	a.password();
q:
	clearviewport();
	a.display();
	a.menu();
	setcolor(10);
	delay(400);
	outtextxy(240,400,"Press any key to continue....");
	getch();
	goto q;
	getch();
	closegraph();
}       // End of main function
	// BaaT Khatam.




