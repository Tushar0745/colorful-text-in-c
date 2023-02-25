#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i;
clrscr();
textcolor(RED);
textbackground(WHITE);
for(i=1;i<=120;i++)
{
printf("  \3I Love You\3  ");
delay(200);
}
getch();
}