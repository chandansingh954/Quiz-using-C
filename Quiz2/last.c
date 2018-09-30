#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int choice1,choice2,choice3,choice4,ques,i,k,option;
int close,update,update2,cont,right[60];
char quest[100][100],opt1[25][10],opt2[25][10],opt3[25][10],opt4[25][10];
char username[40]="v";
char password[40]="r";
char nm1[30],nm2[30];
menu:s
printf("(1)Admin\n(2)Player\n(3)Exit\n");						
printf("Enter your choice: ");
scanf("%d",&choice1);
switch(choice1)																	
{ 
case 1:											
{
 user:

	    printf("user name........\n");
		scanf("%s",nm1);
		printf("password........\n");
		scanf("%s",nm2);
if(strcmp(nm1,username)==0 && strcmp(nm2,password)==0)	
{											
printf("1)add\n2)list\n3)update\n4)back\n5)exit\n");
printf("**************\n");
printf("Enter your choice:::::: ");
scanf("%d",&choice2);
switch (choice2)									
{
case 1:
{
printf("Enter number of questions you want to add ");
scanf("%d",&ques);
for(i=0;i<ques;i++)
{
printf(" question number is %d\n",i+1);	
printf("enter the quetion is");
scanf("%s",quest[i]);
printf("Give your options for the player\n");							
printf("option 1\t");
scanf("%s",opt1[i]);
printf("option 2\t");
scanf("%s",opt2[i]);
printf("option 3\t");
scanf("%s",opt3[i]);
printf("option 4\t");
scanf("%s",opt4[i]);
printf("Enter the right option\n");
scanf("%d",&right[i]);
fflush(stdin);
}
printf(" questions added sussesfully\n");
{
printf("Enter 0 to go to main menu or 1 to exit \n\n");
int close1;
scanf("%d",&close1);
again1:
if(close1==0)
{
	goto menu;
}
else if(close1==1)
{
	exit(1);
}
else
{
	printf("Wrong option choose plz again try\n\n");
	goto again1;
}
}
}
case 2:
{
printf("you are check the list of quetion \n\n");
printf("Total no of questions are:-%d\n",ques);
for(i=0;i<ques;i++)
{
	printf("Question no.%d\n",i+1);
	printf("%s\n",quest[i]);
	printf("(1)%s\t(2)%s\n(3)%s\t(4)%s\n",opt1[i],opt2[i],opt3[i],opt4[i]);
	printf("The correct answer is %d\n\n",right[i]);
}
goto menu;
}
case 3:
{
printf("enter your choice\n");
printf("\n(1)Update All \t(2)Single update\n");
scanf("%d",&update);
if(update==1)
{
printf("Enter total number of questions ");
scanf("%d",&ques);
for(i=0;i<ques;i++)
{
printf("Enter question no %d\n",i+1);	
scanf("%s",quest[i]);
printf("Give your options for the player\n");	
printf("option 1\t");
scanf("%s",opt1[i]);
printf("option 2\t");
scanf("%s",opt2[i]);
printf("option 3\t");
scanf("%s",opt3[i]);
printf("option 4\t");
scanf("%s",opt4[i]);
//questions added
printf("Enter the right option\n");
scanf("%d",&right[i]);
}
printf("Your questions have been entered\n");
printf("Enter 0 to go to  menu or 1 to exit ");
int close2;
scanf("%d",&close2);
again:
if(close2==0)
	goto menu;
else if(close2==1)
	exit(1);
else
{
	printf("Wrong try again");
	goto again;
}
}
else if(update==2)
{
up:
	printf("Enter the question number you want to update:- ");
	scanf("%d",&update2);
	printf("Enter your question\n");
	scanf("%s",quest[update2]);	
	printf("option 1\t");
	scanf("%s",opt1[update2]);
	printf("option 2\t");
	scanf("%s",opt2[update2]);
	printf("option 3\t");
	scanf("%s",opt3[update2]);
	printf("option 4\t");
	scanf("%s",opt4[update2]);
	printf("Enter the right answer\n");
	scanf("%d",&right[update2]);
	printf("Do you want to continue?(0 for continue and 1 for out )");
	scanf("%d",&cont);
	if(cont==0)
{
	goto up;
}
	else{
	goto menu;
}
}
	break;
}
case 4:
{
	goto menu;
	break;
}
case 5:
{
	exit(1);
}
}			
}
else
{	
	printf("Wrong Username  password\n");
	goto user;
}
}										// declaration for end of case1
case 2:
{
	printf("*****************************************************************\n");
	printf(" WELCOME PLAYER  you are paly a quize Game     \n");
	printf("(1)Start\n(2)Back\n(3)Exit\n");
	printf("---------------------------------------------------------------------\n");
	printf("Enter your Choice");
       int score=0;
	scanf("%d",&choice3);
	switch (choice3)
	{
		case 1:
		{
			game:
 			score=0;
			for(i=0;i<ques;i++){
				printf("Question number % is :\n",i+1);
				printf("%s\n",quest[i]);
				printf("options:\n");
				printf("1.%s\t2.%s\n3.%s\t4.%s\n",opt1[i],opt2[i],opt3[i],opt4[i]);
				printf("----------------------------------------------------------------------\n");
				printf("Enter your options:-  ");
				scanf("%d",&option);
				printf("----------------------------------------------------------------\n");
				printf("values are %d %d \n",option,right[i]);
				if(option==right[i])
				{
					score++;
				}				
				printf(" score is =%d  \n\n\n\n",score);
				printf("------------------------------------------------------------------\n");
				printf("(1)Next\t(2)Restart\n(3)Back\t(4)Exit\n");
				scanf("%d",&choice4);
				switch(choice4)
				{
					case 1:
					{
					break;
					}
					case 2:
					{
						goto game;
						break;
					}
					case 3:
					{
						goto menu;
						break;
					}
					case 4:
					{
						exit(1);
						break;
					}
				}				
			}							
			printf("Your Score is %d\n",score);
			printf("---------------------------------------------\n");
		}							   	
		case 2:
		{
			goto menu;
			break;
		}								
		case 3:
		{
			exit(1);
			break;
		}								
}									
	break;
}					   					
case 3:
{
	exit(1);
	break;
}
}	
return(0);							
}										
	





