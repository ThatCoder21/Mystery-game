/*Programmer:ThatCoder21
  Date: 2/28/14
*/
#include<iostream>
#include<string>
#include<cstdlib> 
#include<ctime> 
using namespace std;




int check(int real, int guess)
{
    if (real==guess)
 {
cout<<"The Murderer! They explained how they did everything!\n";
cout<<"You truly are the worlds greatest detective!\n";
system("pause"); 
exit(0);
 }
  else 
 {
  cout<<"NOT the Murderer....Try looking again...\n";
  system("pause");
 } 
}

/////////Main
int main()
{//main open
cout<<"What was your name again.....?\n";
string x;
cin>>x;
cout<<"Thats right, "<<x<< " , How forgetful of me! You are a that famous\n";
cout<<"Detective who solves murders. You must help find out who killed\n";
cout<<"Mr. Kramer!\n";
system("pause");
system("CLS");

cout<<"So the situation is that we are going to leave you with these 8\n";
cout<<"people just like the killer asked and you will take one of them to\n"; 
cout<<"test every night and if you waste one day the killer will have a\n"; 
cout<<"chance until you guess the killer or until 3 days pass by.\n";
cout<<"You are undercover as one of them. Good luck to you detective.\n";
system("pause");
system("CLS");

int killer;
srand(time(0)); // seed random number generator 
killer= rand() % 8 +1 ; // random number 


for (int x=0; x<3; x++)
 {//for open 
 system("CLS");
cout<<"Who do you suspect is the killer?\n";
cout<<"1. The Waiter\n";
cout<<"2. The Butler\n";
cout<<"3. The Cleaning Lady\n";
cout<<"4. The Wife\n";
cout<<"5. The Maid\n";
cout<<"6. The Gardener\n";
cout<<"7. The Cook\n";
cout<<"8. The Bodyguard\n\n";
if(killer==1)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of servant. \n";
 cout<<"The suspect may be Male.\n";
 cout<<"The suspect may be wearing a suit.\n";
}
if(killer==2)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of servant.\n";
 cout<<"The suspect may be Male.\n";
 cout<<"The suspect may be wearing a suit.\n";
}
if(killer==3)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of household caretaker.\n";
 cout<<"The suspect may be Female.\n";
 cout<<"The suspect may be strong.\n";
}
if(killer==4)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of servant.\n";
 cout<<"The suspect may be Male.\n";
 cout<<"The suspect may be wearing a suit.\n";
}
if(killer==5)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of household caretaker.\n";
 cout<<"The suspect may be Female.\n";
 cout<<"The suspect may be Big.\n";
}
if(killer==6)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of household caretaker.\n";
 cout<<"The suspect may be Female.\n";
 cout<<"The suspect may be BIG.\n";
}
if(killer==7)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of household caretaker . \n";
 cout<<"The suspect may be Female.\n";
 cout<<"The suspect may be Big.\n";
}
if(killer==8)
{cout<<"HINTS:\n";
 cout<<"The suspect may be a type of household caretaker . \n";
 cout<<"The suspect may be Female.\n";
 cout<<"The suspect may be Big.\n";
}

int choice;
 cin>>choice;
 switch(choice)
   {//switch open
   
    case 1:
    int z;
    z=1;
cout<<"You chose The Waiter!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,z);
break;

  case 2:
    int a;
    a=2;
cout<<"You chose The Butler!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,a);
break;

  case 3:
    int t;
    t=3;
cout<<"You chose The Cleaning Lady!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,t);
break;

  case 4:
    int b;
    b=4;
cout<<"You chose The Wife!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,b);
break;

  case 5:
    int c;
    c=5;
cout<<"You chose The Maid!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,c);
break;

  case 6:
    int d;
    d=6;
cout<<"You chose The Gardener!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,d);
break;

  case 7:
    int e;
    e=7;
cout<<"You chose The Cook!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,e);
break;

  case 8:
    int f;
    f=8;
cout<<"You chose The Bodguard!\n";
cout<<"After much deliberation from the police, they are considered.....\n";
system("pause");
system("CLS");
check(killer,f);
break;

   default:
  cout<<"That is an invalid entry. Please choose a number from 1-8 and press enter.\n";
  system("pause");
  break;  
  
    }//switch close
    }//for closed 
    cout<<"You have failed to catch the killer and you were found dead on\n";
    cout<<"the morning of the Third day....\n";
    cout<<"GAME OVER....\n";
    system("pause");
system("CLS");
    
return 0;
}//end main
