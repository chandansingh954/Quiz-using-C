#include<stdio.h>
#include<string.h>
main()
{
int choice,a,ch1,i,j,k,l,u,v,count=0;
char uname[20],c;
char pass[20];
char que[10][50];
char opt[40][20];
int rgt[10];
start:
printf("Enter your choice\n");
printf("1.Admin\n2.Player\n3.Exit");
scanf("%d",&choice);
switch(choice){
	case 1:
	printf("Username:");
	scanf("%s",uname);
	printf("\nPassword:");
	scanf("%s",pass);
	if(strcmp(uname,"admin")==0&&strcmp(pass,"admin")==0){
		admenu:
		printf("\nPress 1 to enter the que.\nPress 2 to update the list.\nPress 3 to view the list.\nPress 4 to exit.\n");
		scanf("%d",&ch1);
		switch(ch1){
			case 1:
				for(i=0;i<10;i++){
					printf("Enter que %d\n",i+1);
					scanf("%s",que[i]);
					k = 4*i + 4;
					printf("Enter options\n");
					for(j=4*i;j<k;j++){
						printf("Enter option no %d\n",(j%4)+1);
						scanf("%s",opt[j]);
					}
				}
					for(l=0;l<10;l++){
					printf("Answer of que (%d):\n",(l+1));
					scanf("%d", &rgt[l]);
					}
				break;
				
			case 2:
				printf("Select option to update\n");
				printf("1.All\n2.single\n");
				scanf("%d",&u);
				if(u==1){
					for(i=0;i<10;i++){
						printf("Enter que %d\n",(i+1));
						scanf("%s",que[i]);
						k = 4*i + 4;
						printf("Enter options\n");
						for(j=4*i;j<k;j++){
							printf("Enter option no %d",(j%4)+1);
							scanf("%s",opt[j]);
						}
			
					}
					for(l=0;l<10;l++){
						printf("Answer of que (%d):\n",(l+1));
						scanf("%d", &rgt[l]);
					break;
					}
				}
				else
				{
					printf("Enter the que no. you want to update\n");
					scanf("%d",&v);
					printf("Write the que %d\n",v);
					scanf("%s",que[v-1]);
					printf("Enter options\n");
						for(j=4*(v-1);j<4*(v-1)+4;j++){
							printf("Enter option no %d\n",(j%4)+1);
							scanf("%s",opt[j]);
					         }
					printf("Enter right answer\n");
					u=v-1;
					scanf("%d",&rgt[u]);
					break;
				}
			case 3:
				for(i=0;i<10;i++){
					printf("\n*********************************************************\n");
					printf(" %d %s\n",(i+1),que[i]);
					printf("options are\n");
					k=4*i+4;
					for(j=4*i;j<k;j++){
						printf("%s",opt[j]);
						printf("\n");
					}
					printf("\nright ans is");
					printf("%d", rgt[i]);
				
				}
			break;
			case 4:
				goto start;
				break;
			
		}
		goto admenu;
			
		}
	else{
		printf("Wrong Credentials");
		goto start;
	}
	case 2:
		new:
		for(i=0;i<10;i++){
			printf("(%d) %s",(i+1),que[i]);
			printf("\noptions are-\n");
			for(j=4*i;j<4*i+4;j++){
				printf("(%d) %s",(j%4+1),opt[j]);
				printf("\n");
			}
			printf("Enter your choice number\n");
			scanf("%d", &l);
			if(l==rgt[i])
				count++;
			printf("your score is %d\n",count);
			printf("Press 1 to restart\nPress 2 for the main menu\nPress any no. for next que\n");
			scanf("%d", &ch1);
			if(ch1==1){
				goto new;
			}
			if(ch1==2){
			goto start;
			}
		}
	
			


}	
}
