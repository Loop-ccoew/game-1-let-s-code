	#include<stdio.h>
#include<conio.h>
void main()
{
 char a[5]="RAAZI";
 int j,cnt=9,f=0;
 char s;
  clrscr();
   //printf("Enter a String");
   //gets(a);
    printf("--%c-%c",a[2],a[4]);
//    f=1;
  while(cnt>0)
  {
    printf("\Your %d turn \nEnter a char",9-cnt);
    flushall();
    scanf("%c",&s);
      for(j=0;j<=4;j++)
      {
       if(a[j]==s)
       {
	printf("position %d has %c",j+1,a[j]);
	f++;
	break;
       }
      }
      if(j==5)
      {
       cnt--;
       //printf("\nremaining %d",cnt);
      }
      if(f==3)
      {
       printf("\nYOu won");
       printf("\nThe film is %s",a);
       break;
      }

  }
     if(cnt==0)
      {
       printf("\nYou lost");
       printf("\nThe correct film is:%s",a);
      }
  getch();
}
