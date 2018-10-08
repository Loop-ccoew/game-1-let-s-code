#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 char str[100],letter;
 int x=0,chance,count=0,disp;
 cout<<"PLAYER 1: Enter the movie name"<<endl; //lessthan100words
 gets(str);
 l=strlen(str);
 clrscr();
 cout<<"PLAYER 2: Game Begins"<<endl;
 for(x=0;x<l;x++)
  {
   if(str[x]=='a'||str[x]=='e'||str[x]=='i'||str[x]=='o'||str[x]=='u')
   { cout<<str[x]<<"\t";
   disp++;   //countthelettersdisplayed
   }
   else
   { cout<<"_"<<"\t";
   }
  } cout<<endl;
 for(chance=1;chance<l+2;chance++)
  { cout<<endl;
    cout<<"guess a letter; its chance "<<chance<<endl;
    cin>>letter;
    x=0;
    for(x=0;x<l;x++)
    {
     if(letter==str[x])
      { cout<<"it is in the "<<x+1<<" position";
        count++;
      }
    }
  }
  if(count==||<=l-disp)    //ifguessedletters=total letters-displayedletters
  {cout<<"YOU WIN";
  }
  else
  {cout<<"YOU LOSE";
  }
  cout<<"The correct movie is"<<endl;
   x=0;
    for(x=0;x<l;x++)
    {cout<<a[x];}
 getch();
 }
  
