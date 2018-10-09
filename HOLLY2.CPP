#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
   clrscr();
   char str[100],letter,b[100];
   int x=0,l=0,i=0,q=0,y=0;
   cout<<"PLAYER 1, enter the name of the movie(less than 100 char, and use "/" for space, and use small letters)"<<endl;
   gets(str);
   l=strlen(str);
   clrscr();
   cout<<"PLAYER 2, BEGIN THE GAME"<<endl;
   for(x=0;x<l;x++)
     {
       if(str[x]=='a'||str[x]=='e'||str[x]=='i'||str[x]=='o'||str[x]=='u')
	{
	  b[x]=str[x];
	  cout<<str[x]<<"\t";
        }
       else
	{
	  if(str[x]=='/')
	    {
	      b[x]=str[x];
	      cout<<b[x]<<"\t";
	    }
	  else
	    {
	      b[x]='_';
	      q++;
	      cout<<"_"<<"\t";
	    }
       }
     }
  cout<<endl<<endl<<endl;
  for(i=0;i<l+2;i++)
    {
      cout<<endl<<endl;
      cout<<"\t"<<"\t"<<"\t";
      cout<<"GUESS a LETTER "<<l+2-i<<" chances left "<<endl;
      cin>>letter;
      cout<<endl;
      for(x=0;x<l;x++)
	{
	  if(letter==str[x]) { b[x]=str[x]; q--; }
	  else
	   { if(str[x]=='/'){ b[x]=str[x];} }
	  cout<<b[x]<<"\t";
	}
      cout<<endl;
      if(q==0)
      {
       cout<<endl;
       cout<<"you win"<<endl;
       cout<<"The movie is  ";
       for(y=0;y<l;y++)
        {
          cout<<str[y];
        }
	 i=1000;
       }
     }
    if(q!=0)
     {
cout<<endl;
      cout<<"you lost"<<endl;
       cout<<"The movie is  ";
       for(y=0;y<l;y++)
       {
       cout<<str[y];
       }
 }

  getch();
}

