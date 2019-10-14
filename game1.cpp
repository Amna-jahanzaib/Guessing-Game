#include<iostream>
#include<conio.h>
#include<cstdlib>
#include <time.h>
using namespace std;
void main(){
	 srand(time(0));
	  int number;
	  int times=0;
      number = rand() % 100 + 1;
      int guess;
	    cout << "You HAVE 5 CHANCES FOR THIS GUESS NUMBER BETWEEN 1-100" << endl;

      do {
            cout << "Enter your estimate: ";
            cin >> guess;
			times++;
            if (guess > number){
				cout << "Your estimate is GRETER, than the secret number" << endl;}
            else if (guess <number){
				cout << "Your estimate is LESS, than the secret number" << endl;}
            else{
				cout << "Your guess is right!" << endl;
			break;}
      } while (times != 5);
	  cout << "THE RIGTH ANSWER IS : " <<number ;
      system("PAUSE");
	getch();
}