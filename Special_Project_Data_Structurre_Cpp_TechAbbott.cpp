//Author Mubashir Ali
//
// ---TechAbbott---//
//version Beta//
//These Heaser files are included for using Standard Templet Libaray //
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>
#include<windows.h>
#include<stack>         
#include<queue>
using namespace std;
//**********************************************************************************************//
//****************************gotoxyFUnction***************************************************//
//**********************************************************************************************//
void gotoxy(int x,int y)
{
COORD c;//------------------------------------>Structure(struct) Type of Data Type Defined in Windows.h Library Functions///
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);	
};
//-----------------------For Moving Cursour Across Console-------------------------------//   
//==================================================================//  
//===========================Menu Driven Function===================//
//==================================================================// 
void Linear_DS();  
void Non_Linear_DS(); 
void G_menu();  
void notic();
//====================================================================//
//=============================================================================//
//============================Functions For User Interface Designing ==========//
    void Above()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)201 << setw(60) << "" << (char)187 << endl;
		cout.fill(prev);
	}
	void below()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)200 << setw(60) << "" << (char)188 << endl;
		cout.fill(prev);
	}
	void lines()
	{
		 cout << (char)208;
	}
//=============================================================================//
//=============================================================================//
class array
{
private:
int A[6],i,position,element;
int n=sizeof(*A)/sizeof(A);
public:
void input();
void print();
void AddE();
void Remove();
void Linear_Search();
void sort();	
void a_menu();
void about();
};
void array::about()
{
	cout<<"\n\n";
	char det [] = "ARRAY ADT \n\n An Array is a variable which can store multiple values of same data type  at a  time Collection of similar data items stored in continuous memory locations \n with single name Index are the keys for obtains values stored in Array.\n\n INSERTION AND DELETIONS CASES\n\n \4The Insertion Deletion From Last is Best case. \n \4Deletion Insertion in Start is Worset case.\n \4Insertion Deletion in Middle is Avarge case.\n\n  APPLICATIONS OF ARRAYS:-\n\n \4Arrays Can be use for storing recoreds of a limited entities.\n \4Array Can Perform Matrix Operation \n \4Array Can be Used for Sorting Elements.\n\n DISADVANTAGES \n\n  \4The Biggest Drawback of Array is fixed size";
	int n=strlen(det);
	for(int i=0;i<n;i++)
	{
		Sleep(10);
		cout<<det[i];
	}
}
void array::a_menu()
{
int option;
while(1)
{
	system("cls");
	cout<<"\n\t\t\t-----------------------------"<<endl;
	cout<<"\t\t\t     ARRAY DATA STRUCTURE    "<<endl;
	cout<<"\t\t\t-----------------------------"<<endl;
	cout<<"\t\t\t1:INPUT"<<endl;
	cout<<"\t\t\t2:PRINT"<<endl;
	cout<<"\t\t\t3:INSERT_ELEMENT"<<endl;
	cout<<"\t\t\t4:REMOVE_ELEMENT"<<endl;
	cout<<"\t\t\t5:LINEAR SEARCH"<<endl;
	cout<<"\t\t\t6:SORT"<<endl;
	cout<<"\t\t\t7:ABOUT ARRAY"<<endl;
	cout<<"\t\t\t8:BACK TO LINEAR DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\tENTER YOUR OPTION"<<endl;
	gotoxy(43,13);
	cin>>option;
	switch(option)
	{
		case 1:
		input();
		break;
		case 2:
		print();
		break;
		case 3:
		AddE();
		break;
		case 4:
		Remove();
		break;
		case 5:
		Linear_Search();
		break;
		case 6:
		sort();
		break;
		case 7:
			about();
			break;
		case 8:
			Linear_DS();
			break;
		default:
			cout<<"Invalid Choice"<<endl;
		
	}
	getch();
	system("cls");

}
}
void array::input()
{
	int y=15;
	cout<<"\t\t\tEnter the Size of Array"<<endl;
	gotoxy(48,14);
	cin>>n;
	cout<<"\t\t\tEnter the Memebers of Array : ";
	for(i=0;i<n;i++)
	{
	gotoxy(54,y);
	y++;
	cin>>A[i];
	}
	cout<<"\t\t\tValues Inserted At Array"<<endl;
}
void array::AddE()
{
	cout<<"\n\t\t\tEnter the Element Want To Store in Array : ";
	gotoxy(66,15);
	cin>>element;
	cout<<"\n\t\t\tEnter the Position Where U Want to store : "<<endl;
	gotoxy(66,17);
	cin>>position;
	if(position>n)
	{
		cout<<"\n\t\t\tInsertion Unsuccessfull"<<endl; 
		//Because position  is Greater then size"<<endl;
		
	}
	else
	{
	for(i=n;i>position;i--)
	{
	A[i]=A[i-1];
	cout<<"\n\t\t\tValues Shifting:"<<">"<<A[i-1]<<endl;}
	}
}
void array:: print()
{
	cout<<"\n\t\t\tELEMENT OF ARRAY"<<endl;
	cout<<"\n\t\t\t";
	for(int i=0;i<n;i++)
	{
	//gotoxy(50,15);
	cout<<A[i]<<" ";
	}
}
void array::Remove()
{
	cout<<"\n\t\t\tEnter the Indix To Remove Store Value"<<endl;
	gotoxy(62,15);
	cin>>position;
	if(position>n)
	{
		cout<<"\n\t\t\tDeletion Unsuccessfull"<<endl; 
		//Because Of position is Greater then size"<<endl;
	}
	else
	{
	
	for(i=position;i<=n;i++)
	A[i-1]=A[i];	
	}
	n--;
}
void array:: sort()
{
int flag=0;
for(int i=0;i<n;i++)
{
	for(i=0;i<n;i++)
	{
	
	if(A[i]>A[i+1])
	{	
		//cout<<"Value Swapped"<<" : "<<A[i]<< A[i+1]<<endl;
		int temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
		flag++;
		
	}
	
}
if(flag!=0)
{
	cout<<"\n\t\t\tArray is Sorted Now"<<endl;
}
else
{
	cout<<"\n\t\t\tArray is not Sorted"<<endl;
}
}
}
void array::Linear_Search()
{	int flag=0;
	cout<<"\n\t\t\tEnter the Value for Searching : "<<endl;
	gotoxy(56,15);
	cin>>position;
	for(i=0;i<n;i++)
	{
		flag++;
		if(A[i]==position)
		{
			cout<<"\n\t\t\t"<<position<<"Value Found At "<<A[i]<<endl;
			return ;
		}
	}
	if(flag==0)
	cout<<"\n\t\t\tValue Not Found In Array"<<endl;
}
//Array Data Structure Class End Here//
//Linked List Data Structure Start From Here//
struct node               //Becase We Dont have any permitive Data Type inWhich We store Two fileds values like data and address so that way we make a structure that holds multipal fileds like address and data//
{
int data;
node* next;	

};
class Linked_List
{
node * Head,*temp,*tail;
int nodes;
public:
Linked_List()
{
	Head=NULL;
	temp=NULL;
	tail=NULL;
	nodes=1;
}
void AddEnd(int x);
void Addbeg(int x);
void Inset_Loc(int loc,int x);
void Delete_Start();
void Delete_End();
void Delete_Loc(int loc);
void disp();
void search(int key);
void Reverse();
void Sort();
void menu();
int return_nodes()
{
	return nodes;
}
};
void Linked_List::menu()
{
int option;
while(1)
{
		system("cls");

	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t     SINGLY LINKED LIST       "<<endl;
	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t1:ADD NODE"<<endl;
	cout<<"\t\t\t2:ADD NODE LAST"<<endl;
	cout<<"\t\t\t3:ADD NODE AFTER"<<endl;
	cout<<"\t\t\t4:DELETE START"<<endl;
	cout<<"\t\t\t5:DELETE LAST"<<endl;
	cout<<"\t\t\t6:DELETE AFTER"<<endl;
	cout<<"\t\t\t7:LINEAR SEARCH"<<endl;
	cout<<"\t\t\t8:REVERSE LINKED LIST"<<endl;
	cout<<"\t\t\t9:SORT"<<endl;
	cout<<"\t\t\t10:DISPLAY"<<endl;
	cout<<"\t\t\t11:TOTOAL  NODES"<<endl;
	cout<<"\t\t\t12:BACK TO LINEAR DS MENU"<<endl;
	cout<<"\n\t\t\tENTER YOUR OPTION"<<endl;
			gotoxy(43,16);
	cin>>option;
	switch(option)
	{
	//	case 0:
	//		{
	//			break;
	//		}
		case 1:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
		gotoxy(56,18);
		cin>>value;
		Addbeg(value);
		break;
		}
		case 2:
		{
		int x;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
		gotoxy(56,18);
		cin>>x;
		AddEnd(x);
		break;
		}
		case 3:
		{int x,loc;
		cout<<"\t\t\tEnter the Location Where You Want To Store This Data : "<<endl;
		gotoxy(56,18);
		cin>>loc;
		cout<<"\t\t\tEnter The Data Want To Store"<<endl;
		gotoxy(56,19);
		cin>>x;
		Inset_Loc(loc,x);
		break;
		}
		case 4:
		{	
		Delete_Start();
		break;
		}
		case 5:
		{
		Delete_End();
		break;
		}
		case 6:
		{
		int loc;
		cout<<"\t\t\tEnter the Location Where You Want To Delete Node"<<endl;
		gotoxy(56,18);
		cin>>loc;
		Delete_Loc(loc);	
		break;
		}
		case 7:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want to Search in LInked List : "<<endl;
		gotoxy(72,18);
		cin>>value;
		search(value);
		break;
		}
		case 8:
		Reverse();
		break;
		case 9:
		Sort();
		break;
		case 10:
		disp();
		break;
		case 11:
		{
		int total=return_nodes();
		cout<<"\t\t\tTotal Nodes In Linked List:-"<<total<<endl;
		break;
		}
		case 12:
			Linear_DS();
			break;
		default:
			cout<<"\t\t\tInvalid Choice"<<endl;
		
	}
	getch();
	system("cls");
}	
}
void Linked_List::Sort()         //Use Bubble Sort Alogrithm For Sorting But If u have heavy Data Use Quick Sort 
{
	if(Head==NULL)
	{
		cout<<"\t\t\tLinked List is Empty"<<endl;
	}
	else
	{
		node *i,*j;
		int count=0;
	//	i=Head;
		for(i=Head;i->next!=NULL;i=i->next)
		{
			for(j=i->next;j->next!=NULL;j=j->next)
			{
				if(i->data>j->data)
				{
					int temp=i->data;
					i->data=j->data;
					j->data=temp;
					count++;
				//	cout<<"Values Swipped:"<<j->data<<endl;
				}
				//cout<<"Values Not Swipped:"<<i->data<<endl;
			}
		}
		if(count>0)
		{
			cout<<"\t\t\tLinked List is Sorted Now"<<endl;
		}
		else
		{
			cout<<"\t\t\tLinked List is Not Sorted"<<endl;
		}
	//	disp();
	}
}
void Linked_List::AddEnd(int x)
{
	
if(Head==NULL)
{
	Head=new node;
	Head->data=x;
	Head->next=NULL;
	nodes++;
}
else
{
tail=Head;
while(tail->next!=NULL)
tail=tail->next;
temp =new node;
temp->data=x;
temp->next=NULL;
tail->next=temp;
nodes++;
}
};
void Linked_List::disp()
{
node *traverse;
if(Head==NULL)
cout<<"\t\t\tLinked List is Empty"<<endl;
traverse=Head;
while(traverse!=NULL)
{
	cout<<traverse->data<<"  ";
	traverse=traverse->next;

}
}
void Linked_List::Addbeg(int x)
{
node *Add=new node;
Add->data=x;
Add->next=Head;
Head=Add;
nodes++;
};
void Linked_List::Delete_Start()         //Remove Node From Start Or Head Of Linked Linked_List//
{
if(Head==NULL)	
{
cout<<"\t\t\tLinked_List is Empty"<<endl;
}
else
{
node *temp=Head;
Head=Head->next;
nodes--;
delete temp;
cout<<" \t\t\t"<<temp->data<<" has been deleted"<<endl;	
}
}
void Linked_List::Inset_Loc(int loc,int x)               // Insert Node In A Given Position//
{
int flag=0;
node *current,*temp,*ptr;
temp=new node;
temp->data=x;
temp->next=NULL;
if(Head==NULL)
{
	cout<<"\t\t\tLinked_List is Empty"<<endl;
	
}
else if(loc>nodes)
{
	cout<<"\t\t\tLocation Outof Range"<<endl;
}
else if(loc==1)
{
Head=temp;
flag++;	
nodes++;
}
else
{
current=Head;
int i;
for(i=1;i<loc;i++)
current=current->next;
ptr=current->next;
current->next=temp;
temp->next=ptr;
nodes++;
}	
if(flag==0)
cout<<"\t\t\tData Not Added To Linked_List"<<endl;
else
cout<<"\t\t\tData Successfully Added To Linked_List"<<endl;
}
void Linked_List::Delete_Loc(int loc)										//Delete Node From Given Position//
{
node *temp,*ptr,*current,*ptr2 =NULL;
temp=Head;
if(Head==NULL)
{
	cout<<"\t\t\tLinked_List is Empty"<<endl;
}
else if(loc>nodes)
{
	cout<<"\t\t\tLocation OutOf Range"<<endl;
}
else if(loc==1)
{	
Head=Head->next;
delete temp;
}	
else
{
for(int i=1;i<loc;i++)
temp=temp->next;
current=temp->next;
temp->next=current;
nodes--;	
cout<<"\t\t\tDeledted Element is:"<<temp->data<<endl;
delete temp;
}
}
void Linked_List::Delete_End()
{
node *temp,*temp2;

if(Head==NULL)
{
cout<<"\t\t\tLinked List is Empty"<<endl;
}
else
{
temp=Head;
while(temp->next!=NULL)
{
temp2=temp;
temp=temp->next;
}
temp2->next=NULL;
//Head=Head->next=NULL;
cout<<"\n\t\t\tDleted Elemnt is:-"<<temp->data<<endl;
delete temp;	
}
}
void Linked_List::search(int key)                       //Here We Used Linear Search Tecnique For Searchign Beacuse initialY Linked_Linked_List is not sorted if sorted than we use binary or other technique.../
{
int i=1;
int flag=0;
node*curr=Head;
while(curr!=NULL)
{
if(curr->data==key)
{
flag++;
break;	
}
else
curr=curr->next;	
i++;
}
if(flag==0)
cout<<"\t\t\tNot Found In Linked_List\n"<<endl;
else
cout<<"\t\t\t"<<curr->data<<"  Found at Location "<<i<<endl;

}
void Linked_List::Reverse()						//In this Linked Linked_List Class We Use This Function Becuse This is Hot interview Question //
{
if(Head==NULL)

{
	cout<<"\n\t\t\tLInked List is Empty"<<endl;
}
else
{node *curr;
node *next,*pre=NULL;
while(curr!=NULL)
{
next=curr->next;
curr->next=pre;
pre=curr;
curr=next;	
}	
cout<<"\t\t\tLinked Linked_List is Reversed"<<endl;
}
}
///--------------------------------------------------//
//----------Singly Linked List Class End Here------//
//-------------------------------------------------//




//==============================================================//
//-----------Doubly Linked List Class Start Form Here--------//
//==============================================================//
//Structure For Doubly Linked List////	
struct Dnode
{
Dnode *next;
Dnode *pre;
int data;
};
class D_Link_List
{	
private:
Dnode *start,*temp;
int count;
public:
D_Link_List()
{
	start=NULL;
	temp=NULL;
	count=0;
}
void Addnode(int);
void Add_start(int);
void Add_pos(int);
void Delete_Start();
void Delete_Last();
void Delete_Pos(int);
void search(int key);
void Display();
void size();
void menu();
void Sort();
};
void D_Link_List::Sort()
{       //Use Bubble Sort Alogrithm For Sorting But If u have heavy Data Use Quick Sort 
{
	int count=0;
	if(start==NULL)
	{
		cout<<"\n\t\t\tLinked List is Empty"<<endl;
	}
	else
	{
		Dnode *i,*j;
		for(i=start;i->next!=NULL;i=i->next)
		{
			for(j=i->next;j->next!=NULL;j=j->next)
			{
				if(i->data>j->data)
				{
					int temp=i->data;
					i->data=j->data;
					j->data=temp;
				//	cout<<"Values Swipped:"<<j->data<<endl;
				}
				//cout<<"Values Not Swipped:"<<i->data<<endl;
			}
		}
			if(count>0)
		{
			cout<<"\t\t\tLinked List is Sorted Now"<<endl;
		}
		else
		{
			cout<<"\t\t\tLinked List is Not Sorted"<<endl;
		}
	}
}
}
void D_Link_List::Delete_Pos(int pos)
{
	Dnode*curr=start;
if(start==NULL)
cout<<"\t\t\tDoubly Linked List is Empty"<<endl;
else if(pos==1)
{
Delete_Start();
count--;
}
else
{
count--;
int i=1;
for(i=1;i<pos;i++)
curr=curr->next;
curr->pre->next=curr->next;
curr->next->pre=curr->pre;
cout<<"\t\t\tDeleted Element is:-"<<curr->data<<endl;
delete curr;
}	

}
void D_Link_List::Add_pos(int x)
{
	Dnode *temp=new Dnode;
temp->pre=NULL;
temp->data=x;
temp->next=NULL;
if(start==NULL)
{
	cout<<"\n\t\tLink List is Empty Go and Add Some Node Than Perform This Function"<<endl;
}
int pos;
cout<<"\t\t\tEnter The Position To Insrt The Node"<<endl;
gotoxy(48,15);
cin>>pos;
 if(pos==1)
{
	Addnode(x);
}
else if(pos>count)
cout<<"Position is Out OF Range"<<endl;
else
{
	Dnode *curr=start;
	int i=1;
	for(i=1;i<pos;i++)
		curr=curr->next;
		temp->next=curr->next;
		temp->next->pre=temp;
		curr->next=curr;
		temp->pre=curr;
		count++;
}

}
void D_Link_List::menu()
{
int option;
while(1)
{
		system("cls");

	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t     DOUBLY LINKED LIST       "<<endl;
	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t1:ADD NODE"<<endl;
	cout<<"\t\t\t2:ADD NODE LAST"<<endl;
	cout<<"\t\t\t3:ADD NODE AFTER"<<endl;
	cout<<"\t\t\t4:DELETE START"<<endl;
	cout<<"\t\t\t5:DELETE LAST"<<endl;
	cout<<"\t\t\t6:DELETE AFTER"<<endl;
	cout<<"\t\t\t7:LINEAR SEARCH"<<endl;
	cout<<"\t\t\t8:SORT"<<endl;
	cout<<"\t\t\t9:DISPLAY"<<endl;
	cout<<"\t\t\t10:TOTAL NODES"<<endl;
	cout<<"\t\t\t11:BACK TO LINEAR DS MENU"<<endl;
	cout<<"\n\t\t\tENTER YOUR OPTION :"<<endl;
		gotoxy(43,15);
	cin>>option;
	switch(option)
	{
	//	case 0:
	//		{
	//			break;
	//		}
		case 1:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
		gotoxy(56,17);
		cin>>value;
		Add_start(value);
		break;
		}
		case 2:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
				gotoxy(56,17);
		cin>>value;
		Addnode(value);
		break;
		}
		case 3:
		{int x;	
		cout<<"\n\t\t\tEnter The Data Want To Store : "<<endl;
				gotoxy(56,17);
		cin>>x;
		Add_pos(x);
		break;
		}
		case 4:
		{	
		Delete_Start();
		break;
		}
		case 5:
		{
		Delete_Last();
		break;
		}
		case 6:
		{
		int loc;
		cout<<"\n\t\t\tEnter the Location Where You Want To Delete Node : "<<endl;
		gotoxy(56,17);
		cin>>loc;
		Delete_Pos(loc);	
		break;
		}
		case 7:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want to Search in LInked List : "<<endl;
		gotoxy(72,17);
		cin>>value;
		search(value);
		break;
		}
		case 8:
			Sort();
			break;
		case 9:
			Display();
			break;
		case 10:
		size();
		break;
		case 11:
			Linear_DS();
			break;
		default:
			cout<<"\t\t\tInvalid Choice"<<endl;
		
	}
	getch();
	system("cls");
}	
}
void D_Link_List::Delete_Last()
{
if(start==NULL)	
{
	cout<<"\t\t\tList is Empty"<<endl;
}
if(start->next==NULL)
{
	start=NULL;
}
else
{
Dnode* curr=start;
while(curr->next!=NULL)
curr=curr->next;
curr->pre->next=NULL;
curr->pre=NULL;
cout<<"\t\t\tDeleted Element is:-"<<curr<<endl;
		count--;
delete curr;
}
}
void D_Link_List::Add_start(int x)
{
	temp=new Dnode;
	temp->data=x;
	temp->next=NULL;
	temp->pre=NULL;
	if(start==NULL)
	{
		start=temp;
				count++;

	}
	else
	{
		
		temp->next=start;
		start->pre=temp;
		start=temp;
				count++;

		
	}
}
void D_Link_List::Addnode(int x)
{
temp = new Dnode;
temp->data=x;
temp->pre=NULL;
temp->next=NULL;
if(start==NULL)
{
start=temp;	
count++;
}
else
{
	Dnode *curr=start;
	while(curr->next!=NULL)
	curr=curr->next;
	curr->next=temp;
	temp->pre=curr;
	temp->next=NULL;
	count++;
}
}
void D_Link_List::Display()
{
if(start==NULL)
{
	cout<<"\t\t\tList is Empty"<<endl;
	return ;

}
else
{
Dnode *mar=start;
while(mar!=NULL)
{
	cout<<mar->data<<" ";
	mar=mar->next;
}
}	
}
void D_Link_List::Delete_Start()
{
if(start==NULL)
{cout<<"\t\t\tList is Empty"<<endl;
return ;
}
else
{
temp=start;
start=start->next;
start->pre=NULL;
delete temp;
count--;
}
cout<<"\n\t\t\t"<<temp->data<<"  has been deleted\n"<<endl;
}
void D_Link_List::search(int key)
{

int flag=0;
int i=1;
if(start==NULL)
{
	cout<<"\n\t\t\tDoubly Linked List is Empty"<<endl;
}
else
{
Dnode *temp=start;
while(temp->next!=NULL)
{

if(temp->data==key)
{
flag++;		
cout<<"\n\t\t\t"<<temp->data<<":Value Found At Location "<<i<<endl;
}
else
temp=temp->next;
i++;
}
}
if(flag==0)
cout<<"\n\t\t\tData Not In List"<<endl;
}
void D_Link_List::size()
{
	cout<<"\n\t\t\tTotal Nodes:"<<count<<endl;
}
//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//---------------Doubly Linked List Class End Here----------------------//
//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//------------------------------------------------------------------------//



//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//----------------------Circular Linked List----------------------------//
//----------------------------------------------------------------------//
//----------------------------------------------------------------------//
//---------------------------------//
//I bulid Circullar Linked List Using Singly Linked List So No need to define other structure for this use singly linked list strcture for this as well//
//---------------------------------//
class C_Link_List
{
node *head,*last;
int counter;
public:
	C_Link_List()
	{
		head=NULL;
		last=NULL;
		counter=0;
	}
	void Add_Front(int);
	void Add_last(int x);
	void Add_pos(int);
	void remove();
	void remove_last();
//	void remove_pos(int);
	void display();
	void Total_Node();
	void search(int);
	void menu();
};
void C_Link_List::menu()
{
int option;
while(1)
{
		system("cls");

	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t    CIRCULLARY LINKED LIST    "<<endl;
	cout<<"\t\t\t------------------------------"<<endl;
	cout<<"\t\t\t1:ADD NODE"<<endl;
	cout<<"\t\t\t2:ADD NODE LAST"<<endl;
	cout<<"\t\t\t3:ADD NODE AFTER"<<endl;
	cout<<"\t\t\t4:DELETE START"<<endl;
	cout<<"\t\t\t5:DELETE LAST"<<endl;
	cout<<"\t\t\t6:DELETE AFTER"<<endl;
	cout<<"\t\t\t7:LINEAR SEARCH"<<endl;
	cout<<"\t\t\t8:DISPLAY"<<endl;
	cout<<"\t\t\t9:TOTAL NODES"<<endl;
	cout<<"\t\t\t10:BACK TO LINEAR DS MENU"<<endl;
	cout<<"\n\t\t\tENTER YOUR OPTION :"<<endl;
		gotoxy(43,14);
	cin>>option;
	switch(option)
	{
	//	case 0:
	//		{
	//			break;
	//		}
		case 1:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
		gotoxy(56,16);
		cin>>value;
		Add_Front(value);
		break;
		}
		case 2:
		{
		int x;
		cout<<"\n\t\t\tEnter the Value Want To Store : "<<endl;
		gotoxy(56,16);
		cin>>x;
		Add_last(x);
		break;
		}
		case 3:
		{int x;
		cout<<"\n\t\t\tEnter The Data Want To Store : "<<endl;
		gotoxy(56,16);
		cin>>x;
		Add_pos(x);
		break;
		}
		case 4:
		{	
		remove();
		break;
		}
		case 5:
		{
		remove_last();
		break;
		}
		case 6:
		{
		int loc;
		cout<<"\n\t\t\tEnter the Location Where You Want To Delete Node : "<<endl;
		gotoxy(74,16);
		cin>>loc;
	///	remove_pos(loc);	
		break;
		}
		case 7:
		{
		int value;
		cout<<"\n\t\t\tEnter the Value Want to Search in LInked List : "<<endl;
		gotoxy(64,16);
		cin>>value;
		search(value);
		break;
		}
		case 8:
		display();
		break;
		case 9:
		{
		Total_Node();
		break;
		}
		case 10:
			Linear_DS();
			break;
		case 11:
			exit(0);
		default:
			cout<<"\t\t\tInvalid Choice"<<endl;
		
	}
	getch();
	system("cls");
}	
}
void C_Link_List::Add_pos(int x)
{
	node *temp=new node;
		int pos;
	temp->data=x;
	//temp->next=NULL;
	if(head==NULL)
	{
		temp->next=head;
		head=temp;
		last=head;
	}
	else
	{
	cout<<"\n\t\t\tEnter the Index Between 1-"<<counter<<" for Insertion : "<<endl;
	//gotoxy(68,18);
	cin>>pos;
	if(pos==1)
	{
		Add_Front(x);
	}	
	else if(pos>counter)
	{
		cout<<"\t\t\tPosition Index is Out of Range"<<endl;
	}
	else if(pos==counter)
	{
		Add_last(x);
	}
	else
	{
		node *ptr;
		int i=0;
		node *curr=head;
		while(i<pos)
		curr=curr->next;
		temp->next=curr->next;
		curr->next=temp;
		//temp->next=ptr;
		counter++;
	}}
	
}
void C_Link_List::search(int s)
{
	if(head==NULL)
	{
		cout<<"\t\t\tList is Empty"<<endl;
	}
	else
	{
	node *curr=head;
	while(curr!=last)
	{
	if(curr->data==s)
	{
	cout<<"\t\t\t"<<curr->data <<" has Found in List"<<endl;
	return ;	
	}	
	else 
	curr=curr->next;
	}	
		
		
	}
}
void C_Link_List::remove_last()
{
	if(head==NULL)
	{
		cout<<"\t\t\tList is Empty"<<endl;
	}
	else
	{
		node *temp;
		node *curr=head;
		while(curr!=last)
		curr=curr->next;
		curr->next=head;
		cout<<"\t\t\t"<<last->data<<" has been Deleted"<<endl;
			delete last;
		last=curr;
		
	
	}
}
void C_Link_List::Add_last(int x)
{
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
temp->next=head;
head=temp;
last=head;
}
else
{
node *curr=head;
while(curr!=last)
curr=curr->next;
last->next=temp;
temp->next=head;
last=temp;
}	
}
void C_Link_List::Add_Front(int x)
{
counter++;
node *temp=new node;
temp->data=x;
temp->next=NULL;
if(head==NULL)
{
	temp->next=head;
	head=temp;
	last=head;
}
else
{
temp->next=head;
head=temp;	
}
}
void C_Link_List::display()
{
if(head==NULL)
{
	cout<<"\t\t\tNothing In The List"<<endl;
}
else
{
node *curr=head;
cout<<"\n\t\t\tHEAD"<<"-->";
while(curr!=last)
{
	cout<<curr->data<<"-->";
	curr=curr->next;
}	
cout<<curr->data<<"-->";
cout<<"HEAD";
}
}
void C_Link_List::remove()
{
if(head==NULL)
cout<<"\t\t\tList is Empty"<<endl;
else
{
node *curr=head;
head=head->next;
cout<<"\t\t\t"<<curr->data<<"  has been Deleted"<<endl;
delete curr;
}
}
void C_Link_List::Total_Node()
{
	cout<<"\n\t\t\tTotal Number of Nodes In List Are:-"<<counter<<endl;
}
//---------------------------Class End Here------------------------------//
//-----------------------------------------------------------------------//
//=======================================================================//
//==========================Stack using Linked List=====================//
//======================================================================//
class Stack
{
node *top;
int counter;
public:
	Stack()
	{
		top=NULL;
		counter=0;
	}
void push(int x);
void pop();
void reverse();
void peek();
void Stacksize();
void traverse();
void menu();
};
void Stack::menu()
{
	int choice;
while(1)
{
	system("cls");

cout<<"\t\t\t----------------------------"<<endl;
cout<<"\t\t\t   STACK USING LINKED LIST  "<<endl;
cout<<"\t\t\t----------------------------"<<endl;
cout<<"\n\t\t\t1:-PUSH"<<endl;
cout<<"\t\t\t2:-POP "<<endl;
cout<<"\t\t\t3:-DISPLAY"<<endl;
cout<<"\t\t\t4:-Total Size"<<endl;
cout<<"\t\t\t5:PEAK"<<endl;
cout<<"\t\t\t6:Back To Linear Data Structure"<<endl;
cout<<"\t\t\t-------------------"<<endl;
cout<<"\t\t\tEnter Your Choice"<<endl;
gotoxy(43,11);
cin>>choice;
switch(choice)
{
case 1:
int value;
cout<<"\n\t\t\tEnter the Value want to insert : "<<endl;
gotoxy(58,13);
cin>>value;
push(value);
break;
case 2:
pop();
break;
case 3:
traverse();
break;
case 4:
Stacksize();
break;
case 5:
peek();
break;
case 6:
	Linear_DS();
	break;
default:
cout<<"\n\t\t\tInvalid Input"<<endl;	
}
getch();
system("cls");	
}
}
void Stack::push(int x)
{
node *temp=new node;
temp->data=x;
temp->next=top;
top=temp;
counter++;		
}

void Stack::pop()
{
node *curr=new node;
if(top==NULL)
{
	cout<<"\n\t\t\tStack IS EMPTY"<<endl;
	return;
}
curr=top;
top=curr->next;
cout<<"\n\t\t\t"<<curr->data<<" has been deleted"<<endl;
delete curr;	
cout<<"\n";
}
void Stack::traverse()
{
if(top==NULL)
cout<<"\n\t\t\tStack is Empty"<<endl;
node *curr=new node;
curr=top;
cout<<"\n\t\t\t";
while(curr!=NULL)
{
cout<<curr->data<<"->";	
curr=curr->next;
}
cout<<"NULL"<<endl;	
}
void Stack::reverse()
{
node *temp=new node;
	
}
void Stack::peek()
{
node *temp=new node;
if(top==NULL)
{
cout<<"\n\t\t\tStack is Empty"<<endl;
return;
}
else
temp=top;
cout<<"\n\t\t\tPeek Value is:-"<<temp->data<<endl;		
}
void Stack::Stacksize()
{
	cout<<"\n\t\t\tTotal size of Stack:-"<<counter<<endl;
}
//======================================================================================//
//--------------------------------------Stack Using Array---------------------------///
//======================================================================================//
class Stack_Array 
{

int *arr= new int[10];
int top,counter;
public:
Stack_Array()
{
top=-1;	
counter=0;
}	
void add(int x);
void pop();
void display();
void retTop();
void totalsize();
void menu();
};
void Stack_Array::menu()
{
	int choice;
while(1)
{
	system("cls");

cout<<"\t\t\t-----------------------"<<endl;
cout<<"\t\t\t   STACK USING ARRAY   "<<endl;
cout<<"\t\t\t-----------------------"<<endl;
cout<<"\t\t\t1:PUSH"<<endl;
cout<<"\t\t\t2:POP"<<endl;
cout<<"\t\t\t3:TOP"<<endl;
cout<<"\t\t\t4:DISPLAY"<<endl;
cout<<"\t\t\t5:TOTAL NODES"<<endl;
cout<<"\t\t\t6:BACK TO LINEAR DS MENU"<<endl;
cout<<"\n\t\t\tENTER YOUR CHOICE :"<<endl;
gotoxy(43,10);
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"\n\t\t\tEnter the Value : "<<endl;
		gotoxy(43,12);
		cin>>value;
		add(value);
		break;
	case 2:
		pop();
		break;
	case 3:
		retTop();
		getch();
		break;
	case 4:
		display();
		getch();
		break;
	case 5:
		totalsize();
		break;
	case 6:
		Linear_DS();
		break;
	default:
		cout<<"\n\t\t\tInvalid Choice"<<endl;
		//return;
}
system("cls");	
}
}
void Stack_Array::add(int x)
{

if(top>10)
{
	cout<<"\n\t\t\tStack_Array is FULL"<<endl;
}
else
{
counter++;
top++;
arr[top]=x;	
}
}
void Stack_Array::pop()
{
if(top==-1)
cout<<"\n\t\t\tStack_Array is Empty"<<endl;
else
{
counter--;
int temp=arr[top];
top--;
cout<<"\n\t\t\t"<<temp <<":-has been deleted"<<endl;
}	
}
void Stack_Array::display()
{	
int i=0;
if(top==-1)
cout<<"\n\t\t\tList is Empty"<<endl;
cout<<"\n\t\t\t";
for(i=0;i<counter;i++)
cout<<arr[i]<<" ";
}
void Stack_Array::retTop()
{
	cout<<"\n\t\t\tTop of Stack_Array is: "<<arr[top]<<endl;
}
void Stack_Array::totalsize()
{
	cout<<"\n\t\t\tTotal Number of Nodes:"<<counter<<endl;
}	
class Queue
{
private:
	node *front,*rear;
	int count;
public:
	Queue()
	{
		front=NULL;
		rear=NULL;
		count=0;
	}
	void Enqueue(int);
	void Dequeue();
	void Disp();
	void size();
	int front_ret();	
	void menu();
};
void Queue::menu()
{
	int choice;
while(1)
{
	system("cls");

cout<<"\t\t\t----------------------------"<<endl;
cout<<"\t\t\t  QUEUE USING LINKED LIST   "<<endl;
cout<<"\t\t\t----------------------------"<<endl;
cout<<"\t\t\t1:ENQUEUE"<<endl;
cout<<"\t\t\t2:DEQUEUE"<<endl;
cout<<"\t\t\t3:FRONT"<<endl;
cout<<"\t\t\t4:DISPLAY"<<endl;
cout<<"\t\t\t5:TOTAL NODES"<<endl;
cout<<"\t\t\t6:BACK TO  LINEAR DS MENU"<<endl;
cout<<"\n\t\t\tEnter Your Choice"<<endl;
gotoxy(43,10);
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"\n\t\t\tEnter the Value : "<<endl;
		gotoxy(43,12);
		cin>>value;
		Enqueue(value);
		break;
	case 2:
		Dequeue();
		getch();
		break;
	case 3:
		cout<<"\n\t\t\tFront of Queue is:-"<<front_ret();
		getch();
		break;
	case 4:
		Disp();
		getch();
		break;
	case 5:
		size();
		break;
	case 6:
		Linear_DS();
		break;
	default:
		cout<<"\n\t\t\tInvalid Choice"<<endl;
		//return;
}
system("cls");	
}
}
void Queue::Enqueue(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	if(front==NULL && rear==NULL)
	{
		rear=temp;
		front=temp;
		count++;
	}
	else
	{
	/*node *curr=front;
	while(curr!=NULL)
	curr=curr->next;*/
	rear->next=temp;
	rear=temp;
	count++;
	}
}
void Queue::Dequeue()
{
if(front==NULL)
cout<<"\n\t\t\tQueue is Empty"<<endl;
else
{
node *curr=front;
front=front->next;
count--;
cout<<"\n\t\t\t"<<curr->data<<" has been Dequeued From Queue"<<endl;	
delete curr;
}		
}
void Queue::Disp()
{
if(front==NULL)
cout<<"\n\t\t\tQueue is Empty"<<endl;
else
{
node *curr=front;
cout<<"\n\t\t\t";
while(curr!=NULL)
{
	cout<<curr->data<<"  ";
	curr=curr->next;
	}	
}	
}
int Queue::front_ret()
{
int q=front->data;
return q;	
}
void Queue::size()
{
	cout<<"\n\t\t\tTotal Size of Queue is :-"<<count<<endl;
}
//---------------Queue Class End Here------------------------//
//----------------------------------------------------------//
//-------------------------Queue Using Array-----------------//
//-----------------------------------------------------------//
class  Queue_Array
{
 int size=10;
int *Que =new int[size];
int counter,element;
int front,rear;
public:
 Queue_Array()
{
	front=-1;
	rear=-1;
	counter=0;
	/*cout<<"Enter the Size of Que"<<endl;
	cin>>size;*/
}
~ Queue_Array()
{
	delete Que;
	size=0;
}
void EnQueue_Array(int);
void DeQueue_Array();
void Display();
int Que_size();
void Que_front();
void Descrip();
void menu();
};

//Function Definiton //
void Queue_Array::menu()
{
int choice;
while(1)
{
	system("cls");

cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t      QUEUE USING ARRAY        "<<endl;
cout<<"\t\t\t------------------------"<<endl;
cout<<"\t\t\t1:ENQUEUE"<<endl;
cout<<"\t\t\t2:DEQUEUE"<<endl;
cout<<"\t\t\t3:FRONT"<<endl;
cout<<"\t\t\t4:DISPLAY"<<endl;
cout<<"\t\t\t5:TOTAL SIZE"<<endl;
cout<<"\t\t\t6:BACK TO LINEAR DS MENU"<<endl;
cout<<"\t\t\t7:Description"<<endl;
cout<<"\t\t\tENTER YOUR CHOICE :"<<endl;
gotoxy(43,10);
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"\n\t\t\tEnter the Value : "<<endl;
		gotoxy(45,12);
		cin>>value;
		EnQueue_Array(value);
		getch();
		break;
	case 2:
		DeQueue_Array();
		getch();
		break;
	case 3:
		Que_front();
		getch();
		break;
	case 4:
		Display();
		getch();
		break;
	case 5:
		cout<<"\n\t\t\tTotlal Size of Queue:-"<<Que_size();
		break;
	case 6:
		Linear_DS();
		break;
	case 7:
		Descrip();
		getch();
		break;
	default:
		cout<<"\n\t\t\tInvalid Choice"<<endl;
		//return;
}
system("cls");	
}
}
void  Queue_Array::Descrip()
{
	Sleep(12);
	system("color 2");
	char Desp[]="\n\nA  Queue_Array data structure can be implemented using one dimensional array. But,  Queue_Array implemented using array can store only fixed number of data values. The implementation of  Queue_Array data structure using array is very simple, just define a one dimensional array of specific size and insert or delete the values into that array by using FIFO (First In First Out) principle with the help of variables 'front' and 'rear'. Initially both 'front' and 'rear' are set to -1. Whenever, we want to insert a new value into the  Queue_Array, increment 'rear' value by one and then insert at that position. Whenever we want to delete a value from the  Queue_Array, then increment 'front' value by one and then display the value at 'front' position as deleted element";
	int n=strlen(Desp);
	for(int i=0;i<n;i++)
	{
		Sleep(10);
		cout<<Desp[i];
	}

}
void   Queue_Array::Que_front()
{
	cout<<"\n\t\t\tFront of  Queue_Array id:-"<<Que[front];
}
void  Queue_Array::EnQueue_Array(int x)
{
	if(rear==size-1)
	{
		cout<<"\n\t\t\tQueue_Array is Overflow"<<endl;
		return ;
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		counter++;
		Que[rear]=x;
		cout<<"\n\t\t\t"<<Que[rear]<<"-:Insertion Successfully Done"<<endl;
		
		
		
	}
}
void  Queue_Array::DeQueue_Array()
{
if(rear==-1 && front==-1)
{
cout<<"\n\t\t\tQueue_Array is Underflow"<<endl;	
}	
else
{
cout<<"\n\t\t\tDequed Element:-"<<Que[front]<<endl;	
front++;
counter--;
}	
}
void  Queue_Array::Display()
{
	int i;
	if(rear==-1 && front==-1)
	{
		cout<<"\n\t\t\tQueue_Array is underflow"<<endl;
	}
	else
	{	cout<<"\n\t\t\t";
		for(i=front;i<=rear;i++)
		{
			cout<<Que[i]<<"  ";
		}

	}
}
int  Queue_Array::Que_size()
{
	return counter;
}
//============================================================//
//----------------------Class End Here-----------------------//
//============================================================//

//=================================================================================//
//-------------------------Class Circular Queue Start From Here-------------------//
//================================================================================//
class Circullar_Queue
{	int front,rear,count,Q;
	int *Queue= new int(Q); 
	public:
		Circullar_Queue()
		{
			front=-1;
			rear=-1;
			count=0;
			Q=10;
		}
		void size_Input();
		void Enqueue(int);
		int  DeQueue();
		void disp();
		int ret_front();
		int size();
		void menu();
};
void Circullar_Queue::menu()
{
	int choice;
while(1)
{
	system("cls");
cout<<"\t\t\t--------------------------"<<endl;;
cout<<"\t\t\t      CIRCULAR QUEUE      "<<endl;
cout<<"\t\t\t--------------------------"<<endl;;
cout<<"\t\t\t1:ENQUEUE"<<endl;
cout<<"\t\t\t2:DEQUEUE"<<endl;
cout<<"\t\t\t3:FRONT"<<endl;
cout<<"\t\t\t4:DISPLAY"<<endl;
cout<<"\t\t\t5:TOTAL SIZE"<<endl;
cout<<"\t\t\t6:BACK TO LINEAR DS MENU"<<endl;
cout<<"\n\t\t\tENTER YOUR CHOICE : "<<endl;
gotoxy(43,10);
cin>>choice;
switch(choice)	
{
	case 1:
		int value;
		cout<<"\n\t\t\tEnter the Value : "<<endl;
		gotoxy(46,12);
		cin>>value;
		Enqueue(value);
		getch();
		break;
	case 2:
		{int D=DeQueue();
		cout<<"\n\t\t\tDequeued Value From Queue is:-"<<D<<endl;
		getch();
		break;
		}
	case 3:
		cout<<"\n\t\t\t Front of Queue is:-"<<ret_front();
		getch();
		break;
	case 4:
		disp();
		getch();
		break;
	case 5:
		cout<<"\n\t\t\tTotal Size of Queue is :-"<<size();
		getch();
		break;
	case 6:
		Linear_DS();
		break;
	default:
		cout<<"\n\t\t\tInvalid Choice"<<endl;
		//return;
}
system("cls");	
}		
}
int Circullar_Queue::ret_front()
{
	return Queue[front];
}
int Circullar_Queue::size()
{
	return count;
}
void Circullar_Queue::size_Input()
{
	cout<<"\n\t\t\tEnter the Size of Queue : "<<endl;
	gotoxy(48,12);
	cin>>Q;
}
void Circullar_Queue::Enqueue(int x)
{
if((rear+1)%Q==front)
{
	cout<<"\n\t\t\tQueue is Underflow"<<endl;
	return;
}
else
{
	if(rear==-1 && front==-1)
	{
		rear=front=0;
		Queue[rear]=x;
		count++;
	}
	else
	{
		rear=(rear+1)%Q;
	}
	Queue[rear]=x;
	count++;
}
}
int Circullar_Queue::DeQueue()
{
int value;
if(rear==-1 && front==-1)
{
cout<<"\n\t\t\tQueue is Underflw"<<endl;
//return;	
}	
else
{
value=Queue[front];
if(front==rear)
{
	front=rear=-1;
	count--;
}
else
{
	front=(front+1)%Q;
		count--;
}
		return value;

}
}
void Circullar_Queue::disp()
{
	int i;
	if(front==-1 && rear==-1)
	{
		cout<<"\n\t\t\tQueue is Underflow"<<endl;
	}
	else
	{
	if(front<=rear)
	{
	cout<<"\n\t\t\t";
	for(i=front;i<=rear;i++)
	cout<<Queue[i]<<" ";	
	}	
	else
	{
	for(i=front;i<Q-1;i++)
	cout<<Queue[i]<<" ";
	for(i=0;i<=rear;i++)
	cout<<Queue[i]<<" ";	
	}
		
	}
}
//=========================================================================================//
//-------------------------------Non Linear Data Structure Section Start From here---------//
//========================================================================================//
//=============================================================================//
//----------------------------Priority Queue----------------------------------//
//============================================================================//
struct pnode
{
int data;
pnode *next;
int priority;	
};
class priority_Queue
{
	pnode *front,*temp;
	int Count;
	public:
	Priority_Queue()
	{
		front=NULL;
		Count=0;
	}
	void PQ_Enqueue(int , int);
	void PQ_Dequeue();
	void PQ_Disp();
	int Size();
	int ret_front();
	void menu();
};
int priority_Queue::Size()
{
	return Count;
}
int priority_Queue::ret_front()
{
	return front->data;
}
void priority_Queue::menu()
{
		int choice;
while(1)
{
system("cls");
cout<<"\t\t\t--------------------------"<<endl;;
cout<<"\t\t\t        PRIORITY QUEUE 		 "<<endl;
cout<<"\t\t\t--------------------------"<<endl;;
cout<<"\t\t\t1:ENQUEUE"<<endl;
cout<<"\t\t\t2:DEQUEUE"<<endl;
cout<<"\t\t\t3:FRONT"<<endl;
cout<<"\t\t\t4:DISPLAY"<<endl;
cout<<"\t\t\t5:TOTAL SIZE"<<endl;
cout<<"\t\t\t6:BACK TO NON-LINEAR DS MENU"<<endl;
cout<<"\n\t\t\tENTER YOUR CHOICE : "<<endl;
gotoxy(43,10);
cin>>choice;
switch(choice)	
{
	case 1:
		int value,p;
		cout<<"\n\t\t\tEnter the Value : "<<endl;
		gotoxy(48,12);
		cin>>value;
		cout<<"\n\t\t\tEnter The Priotry : "<<endl;
		gotoxy(48,13);
		cin>>p;
		PQ_Enqueue(p,value);
		getch();
		break;
	case 2:
		{
		PQ_Dequeue();
		getch();
		break;
		}
	case 3:
		cout<<"\n\t\t\tFront of Queue is:-"<<ret_front();
		getch();
		break;
	case 4:
		PQ_Disp();
		getch();
		break;
	case 5:
		cout<<"\n\t\t\tTotal Size of Queue is :-"<<Size();
		getch();
		break;
	case 6:
		Non_Linear_DS();
		break;
	default:
		cout<<"\n\t\t\tInvalid Choice"<<endl;
		//return;
}
system("cls");	
}		

}
void priority_Queue::PQ_Enqueue(int p,int x)
{
	temp=new pnode;
	//temp->next=NULL;
	temp->priority=p;
	temp->data=x;
	if(front==NULL || p < front->priority)
	{
		temp->next=front;
		front=temp;
		Count++;
	}
	else
	{
		pnode *curr=front;
		while(curr->next!=NULL && curr->next->priority<=p)
		curr=curr->next;
		temp->next=curr->next;
		curr->next=temp;
		Count++;
	}
}
void priority_Queue::PQ_Dequeue()
{
	pnode *curr=front;
	if(front==NULL)
	cout<<"\n\t\t\tQueue is Empty"<<endl;
	else 
	curr=front;
	front=front->next;
	Count--;
	cout<<"\n\t\t\tDeleted Element is :-"<< curr->data <<"   having Priority "<<curr->priority<<endl;
	delete curr;
}
void priority_Queue::PQ_Disp()
{
	pnode *curr;
	if(front==NULL)
	{
		cout<<"\n\t\t\tQueue is Empty"<<endl;
		return ;
	}
	else
	{
		curr=front;
		cout<<"\n\t\t\tPriority    "<<"  Data " <<endl;
		cout<<"\n\t\t\t";
		while(curr->next!=NULL)
		{
			cout<<curr->priority<<"             "<<curr->data<<endl;
			curr=curr->next;
		}
	}
}
//===========================================================================================//
//-------------------------------------Priority_Queue class End Here------------------------//
//=========================================================================================//

//=========================================================================================//
//--------------------------------------Binary Search Tree Class Start From Here------------//
//==========================================================================================//
struct tnode
{
int data;
tnode *right;
tnode *left;	
};
class Tree
{
tnode *root;
int counter;
public:
Tree()
{
	root=NULL;
	counter=0;
}
int insert(int);
int Disp();
void pre(tnode*);
void inorder_stack();
void pre_order_stack();
void order_stack();
void levelorder();
void Total_Size();
void search(int);
tnode* findmax(tnode*);
tnode* Delete(tnode* , int);
void menu();
};
void Tree::menu()
{
Tree T;
tnode *root;
int choice ,value=0;
while(1)
{	
	system("cls");
	system("color 7");
	cout<<"\t\t\t------------------"<<endl;
	cout<<"\t\t\tBINARY SEARCH TREE"<<endl;
	cout<<"\t\t\t------------------"<<endl;
	cout<<"\t\t\t1:ADD NODE"<<endl;
	cout<<"\t\t\t2:DISPLAY"<<endl;
	cout<<"\t\t\t3:INORDER TRAVERSAL USIGN STACK"<<endl;
	cout<<"\t\t\t4:PREORDER TRAVERSAL USIGN STACK"<<endl;
	cout<<"\t\t\t5:LEVEL ORDER TRAVERSAL"<<endl;
	cout<<"\t\t\t6:SEARCH "<<endl;
	cout<<"\t\t\t7:DELETE"<<endl;
	cout<<"\t\t\t8:BACK TO NL DS MENU"<<endl;
	cout<<"\n\t\t\tENTER YOUR OPTION : "<<endl;
	gotoxy(43,12);
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\t\t\tEnter the Value For Node : "<<endl;
			gotoxy(50,14);
			cin>>value;
			T.insert(value);
			break;
		case 2:
			T.Disp();
			break;
		case 3:
			T.inorder_stack();
			break;
		case 4:
		T.pre_order_stack();
		break;
		case 5:
			T.levelorder();
			break;
		case 6:
		cout<<"\n\t\t\tEnter the Value For Search In Tree : "<<endl;
					gotoxy(62,14);
		cin>>value;
		T.search(value);
		break;
		case 7:
			int value;
			cout<<"\n\t\t\tEnter the value for Deletion : "<<endl;
						gotoxy(50,14);
			cin>>value;
			T.Delete(root,value);
			break;
		case 8:
			Non_Linear_DS();
			break;
		default:
			cout<<"\n\t\t\tInvalid Choice"<<endl;
			
	}
	getch();
	system("cls");
}
}
tnode * Tree::findmax(tnode* curr)
{
	if(curr==NULL)
	{
		cout<<"Tree is NULL"<<endl;
	}
	else
	{
		while(curr->left!=NULL)
		{
			curr=curr->left;
		}
	}
	return curr;
}
tnode* Tree::Delete(tnode *curr ,int key)
{
	if(curr==NULL)
	{
		cout<<"\n\t\t\tNothing In Tree"<<endl;
		//return;
	}
	if(key<curr->data)
	{
	curr->left=Delete(curr->left,key);
	}
	
	
		if(key>curr->data)
		{
			curr->right=Delete(curr->right,key);
		}
	
	else
	{
	if(curr->left ==NULL && curr->right==NULL)	
		{
			tnode *current=root;
			delete current;
			root=NULL;
		}
	else if(curr->left==NULL)
	{
					tnode *current=root;
					root=root->right;
					delete current;

		
	}
	else if(curr->right==NULL)
	{
					tnode *current=root;
					root=root->left;
					delete current;
	}
	else
	{
			tnode *temp=findmax(root->right);
			root->data=temp->data;
			root->right=Delete(curr->right,temp->data);
	
	
	}
	return root;
	}
}
void Tree::pre_order_stack()
{
stack<tnode*> s;
bool done=false;

if(root==NULL)
{
cout<<"\n\t\t\tTree is Empty"<<endl;
return ;	
}	
tnode *curr =root;
s.push(curr);
while(!s.empty())
{
curr=s.top();
cout<<curr->data<<" ";
s.pop();
if(curr->right!=NULL)
{
s.push(curr->right);

}
if(curr->left!=NULL)
{
s.push(curr->left);

}
}		
}

void Tree::levelorder()
{	
	queue<tnode*> que;
	cout<<"\n\t\t\tLevel Order Traversel"<<endl;
	if(root==NULL)
	{
		cout<<"\n\t\t\tTree  is Empty"<<endl;
		return ;
	}
	else
	{
	//tnode *current=root//
	tnode *curr=root;
		que.push(curr);
	cout<<"\t\t\t";
	while(que.size()!=0)
	{
		curr=que.front();
		que.pop();
		cout<<curr->data<<"---->"<<endl;
		if(curr->left!=NULL)
		{
			que.push(curr->left);
		}
		if(curr->right!=NULL)
		{
			que.push(curr->right);
		}
	//	que.pop();
	}
}
}
void Tree::inorder_stack()
{	cout<<"----------------Inorder Traversal-----------------"<<endl;
	int chk=0;
	tnode *curr=root;
	stack<tnode*> S;
	bool done=false;
	S.push(curr);
	while(!done)
	{
	if(curr)
	{
		S.push(curr);
		curr=curr->left;
	}	
	else
	{
		if(S.empty())
		{
		done=true;
		}
		else
		{
		curr=S.top();
		S.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
		}
	}	
	/*cout<<"Total tnode Visited:"<<chk<<endl;	
	getch();*/
	
}
}
int Tree::insert( int x)
{
tnode *parent;
tnode *temp=new tnode;
temp->data=x;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{	counter++;
	root=temp;
	cout<<"\n\t\t\tRoot:  "<<root->data<<endl;
	return(true);
}
else
{
tnode *curr=root;
while(curr!=NULL)
{
parent=curr;
if(curr->data==x)
{
	cout<<"\n\t\t\tValue Already Exist"<<endl;
	return 0;
}
else if(curr->data>x)
curr=curr->left;
else
curr=curr->right;
	
				} }
if(parent->data<x)
{
parent->right=temp;
cout<<"\n\t\t\tRight  "<<parent->right->data<<endl;
counter++;
}
else 
{
counter++;
parent->left=temp;
cout<<"\n\t\t\tLeft  "<<parent->left->data<<endl;
return 1;

}
}
void Tree::pre(tnode *s)
{	
	while(s!=NULL)	
	{	pre(s->left);
		cout<<s->data<<"  ";
		pre(s->right);
		return ;
	}
}
int Tree::Disp()
{
cout<<"\n\t\t\tInorder Order Traversal:"<<endl;

if(root==NULL)
{
	cout<<"\n\t\t\tTree is Empty"<<endl;
	return 0;
}
else
{	
	cout<<"\n\t\t\t";
	pre(root);
	return(true);
}
}
void Tree::Total_Size()
{
	cout<<"\n\t\t\ttotal size of  tree:"<<counter<<endl;
}
void Tree::search(int key)
{
int pos=0;
tnode *curr=root;
if(root==NULL)
{
	cout<<"\n\t\t\tTree Is Empty"<<endl;
	
}
else
{
while(curr!=NULL)
{
if(curr->data==key)
{
	cout<<"\n\t\t\tData Found "<<curr->data<<" At Position :"<<pos<<endl;
	return ;
}
else if(curr->data>key)
		
{
		curr=curr->left;
		pos++;
}
else
{
	curr=curr->right;
		pos++;

	}
}
if(curr==NULL)
{
cout<<"\n\t\t\tValue Not Found In Tree"<<endl;	
}	
}
}
//===================================================================================//
//--------------------------Sorting Alogrithms
//===================================================================================//

class Sorting
{
int A[10];
//{47,4,0,45,1,32,11,8,78,4};
int n;
int count;
public:	
Sorting()
{
	count=0;
}
void input_element();
void Bubble_Sort();
void Slection_Sort();
void Insertion_Sort();
void Quick_Sort();
void Display();
};
void Sorting::Insertion_Sort()
{
	
int i,j,temp;
int flag=0;
for(i=1;i<10;i++)
{
temp=A[i];
j=i;
while(temp<A[j-1] &&( j>0))
{
A[j]=A[j-1];
j--;
//=j-1;
}
flag++;
A[j]=temp;
}
if(flag!=0)
{
cout<<"\t\t\tArray is Sorted Through Insertion Method "<<endl;
getch();	
}		
}
void Sorting ::Display()
{
	if(count==0)
	{
		cout<<"\n\t\t\tARRAY IS EMPTY"<<endl;
	}
	else
	{
		cout<<"\n\t\t\t";
		for(int i=0;i<count;i++)
		cout<<A[i]<<" ";
	}
}
void Sorting::input_element()
{
	int y=20;
	cout<<"\n\t\t\tENTER THE ELEMENT FOR ARRAY:"<<endl;
	for(int i=0;i<10;i++)
	{
	gotoxy(54,y);
	cin>>A[i];
	count++;
	y++;
	}
}
void Sorting::Slection_Sort()
{
if(count==0)
{
	cout<<"\n\t\t\tARRAY IS EMPTY"<<endl;
}
else
{
cout<<"\n\t\t\t---------Selection Sorting-----------"<<endl;
for(int j=0;j<10;j++)
{
int min;
min=j;
for(int i=j+1;i<10;i++)
{
if(A[i] < A[min])	
min=i;
}
if(min!=j)
{
int temp=0;
temp=A[j];
cout<<"\t\t\tValues Swapped:"<<A[j]<<"<--> "<<A[min]<<endl;
A[j]=A[min];
A[min]=temp;
}
}
cout<<"\n\t\t\tAfter Sorting The Array Loock Like"<<endl;
for(int k=0;k<10;k++)
cout<<A[k]<<" ";
}
}
void Sorting::Bubble_Sort()
{
if(count==0)
{
	cout<<"\n\t\t\tNothing in Array To Sort"<<endl;
}
else
{
for(int j=0;j<10;j++)
{
for(int k=j+1;k<10;k++)
{
if(A[j]>A[k])
{
int temp=A[j];
A[j]=A[k];
A[k]=temp;
    } }  }	}	
}
//====================================Sorting Class End Here=======================================//
//=================================================================================================//
//===================================Class Searching Start From Here==============================//
class Searching
{
const static int max=10;
int Arr[max],n,counts;
public:
Searching()
{
	counts=0;
}
void Input_element();
void Search_Linear();
void Binary_Search();
void sort();
void Display();
void count();
};
//======================================Functions Definations=======================================//
void Searching::sort()
{
for(int j=0;j<10;j++)
{
for(int k=j+1;k<10;k++)
{
if(Arr[j]>Arr[k])
{
int temp=Arr[j];
Arr[j]=Arr[k];
Arr[k]=temp;
    } }  	
}
cout<<"\n\t\t\tValues Are Sorted Now"<<endl;		
}
void Searching::Input_element()
{
	int y=21;
	cout<<"\n\t\t\tEnter The Element for Array 1-10 : "<<endl;
	for(int i=0;i<max;i++)
	{
	gotoxy(64,y);
	cin>>Arr[i];
	counts++;
	y++;
	}
}
void Searching::Display()
{
	cout<<"\n\t\t\tElement In Array : "<<endl;
	cout<<"\n\t\t\t";
	for(int i=0;i<max;i++)
	cout<<Arr[i]<<" ";
}
void Searching::Search_Linear()
{
	int element;
	int flag=0;
	if(counts==0)
	{
		cout<<"\n\t\t\tCurrently Array Is Empty : "<<endl;
	}
	else
	{
	cout<<"\n\t\t\tEnter the Element for Searchign in Array : "<<endl;
	gotoxy(65,19);
	cin>>element;
	for(int i=0;i<max;i++)
	{
		if(Arr[i]==element)
		{
		cout<<"\n\t\t\t"<<element<<" Element Found In Array"<<endl;
		flag++;
		}
	}
	}
	if(flag==0)
	{
		cout<<"\n\t\t\tEntred Element is Not Found In Array"<<endl;
	}
}
void Searching::Binary_Search()            //Bubble Sort Is Uneffective For unsorted Array But Best For Sorted 
{	int Element;
	int low=0;
	int high=counts;
	if(counts==0)
	{
		cout<<"\n\t\t\tCurrently Array is Empty"<<endl;
	}
	cout<<"\n\t\t\tEnter The Element For Search:"<<endl;
	cin>>Element;
	while(low<=high)
	{
	int mid=(low+high)/2;
	if(Arr[mid]==Element)
	{
	cout<<"\n\t\t\t"<<Element<<"Found In Array"<<endl;
	break;	
	}	
	if(Element>Arr[mid])
	{
		low=mid+1;
	}
	else
	high=mid-1;
	}		
	if(Element==-1)
	{
		cout<<"\t\t\tElement is Not Found In Array"<<endl;
	}
}
//========================================End Functions Defs:=======================================//
//===================================Searching Class End Here=====================================//
//=================================================================================================//
//========================================Quiz Class start From Here==============================//
class Quiz
{
int qno,q_marks,correct_ones,Wrong_ones,total;
int totoal_que;
float  percentage;
char remarks[10];
public:
Quiz()
{
qno=0;
q_marks=0;
correct_ones=0;
Wrong_ones=0;
total=0;
percentage=0.0;
strcpy(remarks,"No  Remarks");	
}	
void Quiz_Questions();
void Processing();
void Disp();
int counter_time();
};
void Quiz::Processing()
{
	percentage=correct_ones*100/totoal_que;
//	return percentage;
	
}
void Quiz::Disp()
{
	cout<<"\n\t\t\t\tDATA StRUCTURE QUIZ"<<endl;
	cout<<"\n\tTOTAL QUESTION:  "<<totoal_que<<endl;
	cout<<"\n\tCORRECT ANSWERS: "<<correct_ones<<endl;
	cout<<"\n\tWRONG ANSWERS:   "<<Wrong_ones<<endl;
	cout<<"\n\tTOTAL MARKS:     "<<q_marks<<endl;
	cout<<"\n\t PERCENTAGE:      "<<percentage<<endl;
	cout<<"\n\tREMARKS:         "<<remarks<<endl;
	cout<<"\t\t------------------------------------------------------"<<endl;
}
//=================================================================================================//
//===============================================================================================//
//----------------------------GLOBAL OBJECTS-----------------------------------------------------//
Circullar_Queue C;
priority_Queue pQ;
Queue_Array q;
array a;
Stack_Array s;
D_Link_List DL;
Linked_List L;
C_Link_List c;
Tree T;
Queue Q;
Stack S;
Sorting sort;
Searching Srch;
//========================================================================================================/
void Non_Linear_DS()
{
SetConsoleTitle("                                               NON LINEAR DATA STRUCTRURE");
int choice ,value=0;
while(1)

{		system("cls");
	system("color 7");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t NON LINEAR DATA STRUCTRURE    "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\n\t\t\t1:BINARY SEARCH TREE"<<endl;
	cout<<"\n\t\t\t2:PRIOTRY QUEUE"<<endl;
	cout<<"\n\t\t\t3:AVL TREE"<<endl;
	cout<<"\n\t\t\t4:GRAPH"<<endl;
	cout<<"\n\t\t\t5:BACK TO DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\tENTER YOUR CHOICE : "<<endl;
	gotoxy(44,14);
	cin>>choice;
	switch(choice)
	{
		case 1:
			T.menu();
			break;
		case 2:
			pQ.menu();
			break;
		case 3:
			cout<<"\n\t\t\tAVL TREES IS COMMING SOON"<<endl;
			break;
		case 4:
		cout<<"\n\t\t\tGRAPH IS COMMING SOON"<<endl;
		break;
		case 5:
			 G_menu();
			 break;
			default:
			cout<<"\t\t\tInvalid Entry"<<endl;
	
	}
		getch();
	system("cls");
}
}
void Linear_DS()
{
SetConsoleTitle("                                               LINEAR DATA STRUCTURE ");
int choice ,value=0;
while(1)
{	
	system("cls");
	system("color 3");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t   LINEAR DATA STRUCTURE  "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
for(int i=0;i<1;i++)
{
cout<<"\t";
Sleep(10);
Above();	
}
	cout<<"\t\t\t  1:ARRAY"<<endl;
	cout<<"\n\t\t\t  2:SINGLY LINKED LIST"<<endl;
	cout<<"\n\t\t\t  3:DOUBLY LINKED LIST"<<endl;
	cout<<"\n\t\t\t  4:CIRCULLAY LINKED LIST"<<endl;
	cout<<"\n\t\t\t  5:STACK USING ARRAY"<<endl;
	cout<<"\n\t\t\t  6:STACK USING LINKED LIST"<<endl;
	cout<<"\n\t\t\t  7:QUEUE USING ARRAY"<<endl;
	cout<<"\n\t\t\t  8:QUEUE USING LINKED LIST"<<endl;
	cout<<"\n\t\t\t  9:CIRCULLARY QUEUE"<<endl;
	cout<<"\n\t\t\t  10:BACK TO DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\t  ENTER YOUR OPTION:"<<endl;
	for(int i=0;i<1;i++)
{
cout<<"\t";
Sleep(10);
below();	
}
gotoxy(44,24);
cin>>choice;
	switch(choice)
	{
		case 1:
			a.a_menu();
			break;
		case 2:
			L.menu();
			break;
		case 3:
			DL.menu();
			break;
		case 4:
			c.menu();
		break;
		case 5:
			s.menu();
			break;
		case 6:
			S.menu();
		break;
		case 7:
			q.menu();
			break;
		case 8:
			Q.menu();
			break;
		case 9:
			C.menu();
			break;
		case 10:
			G_menu();
			break;
		default:
			cout<<"\t\t\tInvalid Choice"<<endl;
			
	}
	getch();
	system("cls");
}		
	
	
	
}
void sorT_menu()
{
SetConsoleTitle("                                               SORTING ALOGRITHMS ");
int choice ,value=0;
while(1)

{	system("cls");
	system("color 7");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t       SORTING ALOGRITHMS      "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\n\t\t\t1:INPUT ELEMENT"<<endl;
	cout<<"\n\t\t\t2:BUBBLE SORT"<<endl;
	cout<<"\n\t\t\t3:SELECTION SORT"<<endl;
	cout<<"\n\t\t\t4:INSERTION SORT"<<endl;
	cout<<"\n\t\t\t5:QUICK SORT"<<endl;
	cout<<"\n\t\t\t6:DISPLAY"<<endl;
	cout<<"\n\t\t\t7:BACK TO DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\tENTER YOUR CHOICE:"<<endl;
	gotoxy(43,18);
	cin>>choice;
	switch(choice)
	{	
		case 1:
		sort.input_element();
			break;
		case 2:
		sort.Bubble_Sort();	
		break;
		case 3:
		sort.Slection_Sort();			
		break;
		case 4:
		sort.Insertion_Sort();	
	//	cout<<"\t\t\tComming Soon"<<endl;
		break;
		case 5:
			cout<<"\t\t\tComming Soon"<<endl;
					break;
		case 6:
		sort.Display();
		break;	
		case 7:
		G_menu();
		 break;
		default:
		cout<<"\n\t\t\tInvalid Entry"<<endl;
	
	}
		getch();
	system("cls");
}	
}
//========================================Searching Alogrithms=======================================//
void searching_menu()
{
SetConsoleTitle("                                               SEARCHING  ALOGRITHMS ");
int choice ,value=0;
while(1)

{	system("cls");
	system("color 7");
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t      SEARCHING  ALOGRITHMS    "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\n\t\t\t1:INPUT ELEMENT"<<endl;
	cout<<"\n\t\t\t2:LINEAR SEARCH"<<endl;
	cout<<"\n\t\t\t3:BINARY SEARCH"<<endl;
	cout<<"\n\t\t\t4:SORT"<<endl;
	cout<<"\n\t\t\t5:DISPLAY"<<endl;
	cout<<"\n\t\t\t6:BACK TO DATA STRUCTURE"<<endl;
	cout<<"\n\n\t\t\tENTER YOUR CHOICE:"<<endl;
	gotoxy(43,17);
	cin>>choice;
	switch(choice)
	{	
		case 1:
		Srch.Input_element();
		break;
		case 2:
		Srch.Search_Linear();	
		break;
		case 3:
		Srch.Binary_Search();			
		break;
		case 4:
		Srch.sort();	
		break;
		case 5:
		Srch.Display();
		break;
		break;	
		case 6:
		G_menu();
		 break;
		default:
		cout<<"\n\t\t\tInvalid Entry"<<endl;
	
	}
		getch();
	system("cls");
}		
}
void notic()
{
	system("color 2");

	char b_logo[]="\n\n\t\t-----------------------------------------\n\t\t    \4 DATA STRUCTURE AND ALOGRITHMS \4\n\t\t-----------------------------------------\n";
	int n=strlen(b_logo);
	for(int i=0; i<n;i++)
	{
		Sleep(15);
		cout<<b_logo[i];
	}
	char challan[]="\n\n\n\n\tTHIS  SMALL  PROGRAM CONTAIN ALL SOURCE CODE AND COMPLETE FUNCTION OF\n\n\t\tDATA STRUCTURES BUT SOME FUNCTIONS MAY NOT WORK PROPERLY \n\n\t\t\tWE WILL TRY TO FIX IT AS SOON AS POSSIABLE";
	 n=strlen(challan);
	for(int i=0; i<n;i++)
	{
		Sleep(15);
		cout<<challan[i];
	}
	char logo[]="\n\n\n\n\n\n\t\t\t\t\t\t\t\t-----------\n\t\t\t\t\t\t\t\t\4TECHABOTT\4\n\t\t\t\t\t\t\t\t-----------\n";
	n=strlen(logo);
	for(int i=0;i<n;i++)
	{
		Sleep(20);
		cout<<logo[i];
	}
	
	
}
//=========================================================================================================//
//====================================================================================================//
//==========================================================================================//
//==========================================Grand Menu Function============================//
//========================================================================================//
void G_menu()
{
SetConsoleTitle("                                                DATA STRUCTURE BY TECHABBOTT");
int choice ,value=0;
while(1)
{	system("cls");
cout<<"\n";
for(int i=0;i<1;i++)
{
cout<<"\t";
Sleep(10);
Above();	
}
	system("color 5");
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t\4 DATA STRUCTURES AND ALGORITHMS \4"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\n\t\t\t1:LINEAR DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\t2:NON LINEAR DATA STRUCTURE"<<endl;
	cout<<"\n\t\t\t3:SORTING ALOGRITHMS"<<endl;
	cout<<"\n\t\t\t4:SEARCHING ALOGRITHMS"<<endl;
	cout<<"\n\t\t\t5:TAKE QUIZ"<<endl;
	cout<<"\n\t\t\t6:EXIT"<<endl;
	cout<<"\n\t\t\tENTER YOUR CHOICE : "<<endl;
	cout<<"\n\n"<<endl;
for(int i=0;i<1;i++)
{
cout<<"\t";
Sleep(10);
below();	
}
		gotoxy(43,18);

	cin>>choice;
	switch(choice)
	{
		case 1:
		Linear_DS();
		break;
		case 2:
		Non_Linear_DS();
		break;
		case 3:
		sorT_menu();		
		break;
		case 4:
		searching_menu();
		break;
		case 5:
			cout<<"\n\t\t\tComming Soon"<<endl;
			break;
		case 6:
		{
			system("cls");
			char Solog[]="\n\n\n\n\n\n\n\n\n\t\t\t COPY PASTE IS DESIGN ERROR\n\n\n\t\t\t\t THANK YOU\n\n\n";
			int n=strlen(Solog);
			for(int i=0;i<n;i++)
			{
				system("color 2f");
				Sleep(10);
				cout<<Solog[i];
			}
			char logo[]="\n\n\n\n\n\n\t\t\t\t\t\t\t\t-----------\n\t\t\t\t\t\t\t\t\4TECHABOTT\4\n\t\t\t\t\t\t\t\t-----------\n";
	n=strlen(logo);
	for(int i=0;i<n;i++)
	{
		Sleep(20);
		cout<<logo[i];
	}

			getch();
			exit(0);
					}
		default:
			cout<<"Invalid Choice"<<endl;
			exit(0);
			
	}
	getch();
	system("cls");
}	
}
//================================================================================//
//===============================Main Function===================================//
//===============================================================================//
main()
{
//-------------------------------------
SetConsoleTitle("                                                DATA STRUCTURE BY TECHABBOTT");
		//	L.menu();
		//	c.menu();
		//DL.menu();
		//a.a_menu();
notic();
getch();
G_menu();

return 0;
}
