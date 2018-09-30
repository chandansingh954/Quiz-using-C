#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int choice,adch,i,j,coptions[50],cchoice,score=0;
char str[50][20],uname[10],passwd[10],option[50][4][10],upch;
clrscr();
start:
printf("*************************Quiz*************************\n");
printf("(1)Admin\n");
printf("(2)Player\n");
printf("(3)Exit\n");
printf("******************************************************\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Username: ");
		scanf("%s",uname);
		printf("Password: ");
		scanf("%s",passwd);
		if(!strcmp(uname,"admin") && !strcmp(passwd,"admin"))
		{       estart:
			printf("Select an option: \n");
			printf("1. Add questions.\n");
			printf("2. List question\n");
			printf("3. Update\n");
			printf("4. Back\n");
			printf("5. Exit\n");
			printf("******************************************************\n");
			scanf("%d",&adch);
			switch(adch)
			{
				case 1:
					for(i=0;i<10;i++)
					{
						printf("Enter the Question %d",i+1);
						scanf("%s",str[i]);
						printf("Enter the options");
						for(j=0;j<4;j++)
							{
								printf("%d",j+1);
								scanf("%s",option[i][j]);
							}
						printf("Enter the correct option number");
						scanf("%d",&coptions[i]);
						fflush(stdin);

					}
				break;
				case 2:
					printf("List of Questions \n");
					for(i=0;i<10;i++)
					{
						printf("******************************************************\n");
						printf("Q%d. %s \n \n",i+1,str[i]);
						for(j=0;j<4;j++)
							{
								printf("%d. %s \n",j+1,option[i][j]);
							}
					}
				break;
				case 3:
					x:
					fflush(stdin);
					printf("Select option \n");
					printf("(a)All \t(b)Single : ");
					scanf("%c",&upch);
					if(upch=='A' || upch=='a')
					{
						for(i=0;i<10;i++)
						{
							printf("Enter the Question %d",i+1);
							scanf("%s",str[i]);
							printf("Enter the options");
							for(j=0;j<4;j++)
							{
								printf("%d",j);
								scanf("%s",option[i][j]);
							}
							printf("Enter the correct option number");
							scanf("%d",&coptions[i]);



					}
						}
					else if(upch=='B' || upch=='b')
					{
						printf("Enter the question number");
						scanf("%d",&i);
						printf("Enter the new question");
						scanf("%s",str[i-1]);
						printf("Enter the new options");
						for(j=0;j<4;j++)
						{
							printf("%d",j+1);
							scanf("%s",option[i-1][j]);
						}

					}
					else
					{
						printf("Wrong choice... \n Please input again.");
						goto x;
					}
				break;
				case 4:
					goto start;
				break;
				case 5:
					goto end;
				break;
				default:
				printf("Wrong choice");

			}
		}
		else
		{
		printf("Wrong Password !!! \n");

		goto start;
		}
		goto estart;
		break;
	case 2:
		//printf("Welcome \n Press X to start the game.");
		//scanf("%c",&upch)
		//if(upch=='X' || upch=='x')
			{	a:
				score=0;
				for(i=0;i<10;i++)
				{

					printf("******************************************************\n");
					printf("Q%d. %s",i+1,str[i]);
					printf("\nChoose the correct option.\n");
					for(j=0;j<4;j++)
					{
						printf("%d. %s\n",j+1,option[i][j]);
					}
					scanf("%d",&cchoice);
					if(cchoice==coptions[i])
						{score++;}
					printf("Your current score is %d.\n",score);
					printf("1. Restart \n2. Next\n");
					scanf("%d",&cchoice);
					if(cchoice==1)
						goto a;
					else
						continue;
				}
				printf("Your total score is : %d",score);

			}
	break;
	case 3:

		goto end;
		break;
	default:
		printf("Wrong selection");

}
end:
printf("Bye");
getch();
return 0;
}