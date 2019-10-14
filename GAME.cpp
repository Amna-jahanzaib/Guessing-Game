
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void game();
int cnum(int);
void main (){
	game();
getch();}
void game(){
	
cout<<"\n Welcome to MY GAME **********\n";
cout<<"\n THIS GAME IS A LOGICAL GAME: \n";
cout<<"\n YOU MAY CALL IT  A MAGIC......\n";
cout<<"\n GET READY........: \n";
_sleep(2000);
cout<<"\n HERE WE GO!!!!!!!!!!!! \n";
system("cls");
cout<<"\n **********INSTRUCTIONS ABOUT GAME\n";
cout<<"\n AS WE STATED EARLIER IT IS A MAGIC SO YOU HAVE TO KNOW FEW THINGS...YEAH...\n";
_sleep(2000);
cout<<"\n FIRST WE WILL ASK YOU TO ENTER ANY NUMBER CONBINATION OF DESIRED CHARACTERS  \n";
_sleep(2000);
cout<<"\n THEN WE WILL TELL YOU THE FINAL ANSWER OF THE ADDITION THAT IS GOING TO BA HELD AFTER SOME OTHER STEPS.... \n";
_sleep(2000);
cout<<"\n YEAH MAGICAL ANSWER ,...RIGHT!!!!!\n";
_sleep(2000);
cout<<"\n NOW WE REQUIRE ANOTHER NUMBER OF SAME SIZE.....\n";
_sleep(2000);
cout<<"\n AND NOW WE ADD SOME MAGICAL NUMBER BY OURSELVE....\n";
_sleep(2000);
cout<<"\n THE MAGICAL NUMBER ..Hmmm\n";
_sleep(2000);
cout<<"\n NOW YOU CAN ADD THE THREE NUMBERS TWO ENTERED BY YOU AND THE LAST ADDED BY ME ..AWW GREAT!!!\n";
_sleep(2000);
cout<<"\n EXAMPLE IS HERE .......\n";
_sleep(2000);
cout<<"\n YOU ENTERED......LET US SAY! ...1234567.....OR ANY OTHER \n";
_sleep(2000);
cout<<"\n AND THE MAGICAL ANSWER APEARS.....11234566\n";
_sleep(2000);
cout<<"\n THE WE REQUIRE ANOTHER NUMBER FROM YOU....\n";
_sleep(2000);
cout<<"\n LET US SAY ..THE PLAYER ENTERED 2345452,....REMEMBER OF SAME LENGTH....\n";
_sleep(2000);
cout<<"\n NOW THE MAGICAL NUMBER BY ME IS ENTERED....IS.....  \"7654547\"\n";
_sleep(2000);
cout<<"\n NOW YOU CAN ADD ALL OF THESE...1234567+2345452+7654547=11234566 \n";
_sleep(2000);
cout<<"\n HEYY!!! IT WAS A DEMOO NOW  I WILL LET YOU TRY\n";
cout<<"\n ARE YOU READY!!! .....PRESS ANY KEY.....\n";
getch();
//system ("flush");
_sleep(2000);
cout<<"\n HOPE YOU WILL ENJOY THIS GAME!!!!!!!!!!!!!!\n";
system("cls");
cout<<"\n AND HERE IS THE GAME!!!!!!!!!!!!!!\n";
cout<<"\n Enter the number of digits( size) :";

cout<<"\n Enter number :";

string num;
getline(cin,num);
int dnum=stoi(num);
int s=num.length();

int *d=new int [s];//partialing the num1
for(int i=0;i<s;i++){

int p=0;
p=num[i];

d[i]=cnum(p);

}//the magical answer
cout<<"\n THE MAGICAL ANSWER IS: ";

int *ans=new int [s+1];
ans[0]=1;
for(int i=1;i<s;i++){



ans[i]=d[i-1];

}
ans[s]=(d[s-1])-1;

for(int i=0;i<s+1;i++){

cout<<ans[i];

}




cout<<"\n Enter another number :";
string num2;
getline(cin,num2);
int *d1=new int [s];//partialing num2
 int *d3=new int [s];//program own number
for(int i=0;i<s;i++){

int n=0;
n=num2[i];

d1[i]=cnum(n);
d3[i]=-(d1[i]-9);  // number that have some logic of 9
}
for(int i=0;i<s;i++){

cout<<d3[i];

}

cout<<"\n NOW YOU CAN SEE....THE THREE NUMBERS \n";
for(int i=0;i<s;i++){

cout<<d[i];

}
cout<<endl;
for(int i=0;i<s;i++){

cout<<d1[i];

}
cout<<endl;
for(int i=0;i<s;i++){

cout<<d3[i];

}
cout<<"\n YOU CAN ADD AND SEE THE NUMBER MATCHES THE ANSWER : \n";
for(int i=0;i<s+1;i++){

cout<<ans[i];

}
getch();




}


int cnum(int p){
	int r=0;
	switch(p){
	
		case 48:r=0;
			break;
			case 49:r=1;
			break;
				case 50:r=2;
			break;
					case 51:r=3;
			break;
						case 52:r=4;
			break;
							case 53:r=5;
			break;
								case 54:r=6;
			break;
									case 55:r=7;
			break;
										case 56:r=8;
			break;
											case 57:r=9;
			break;
											default:r=-1;
	
	
	}

	return r;

}