#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int s,admin,i,k,j,ws,update,player,point=0,retry;
char q[100][30],a[30][20],b[30][20],c[30][20],d[30][20]; char an[30][20],re[30][20];
char name[30],password[30];
home:
printf("********************WELCOME***************************");
printf("\n1.Admin\n2.Player\n3.exit\nyour choice:-");
scanf("%d",&s);
  //switcha1//
switch(s)
{
	//admin//
case 1:
printf("Enter username: ");
scanf("%s",name);
printf("Enter password: ");
scanf("%s",password);
if (strcmp(name,"swadeep")== 0 && strcmp(password,"swadeep")== 0)
{
	 admin:
printf("1.Add\n2.List\n3.Update\n4.Back\n5.Exit\nyour choice");
scanf("%d",&admin);
switch(admin)
{
case 1:
printf("number of qus:-");
scanf("%d",&k);
update:
for(i=0;i<k;i++)
{
printf("Q%d",i+1);
scanf(" %s",q[i]);
printf("a.");
scanf("%s",a[i]);
printf("b.");
scanf("%s",b[i]);
printf("c.");
scanf("%s",c[i]);
printf("d.");
scanf("%s",d[i]);
printf("result:-");
scanf("%s",&re[i]);
}
goto admin;

case 2:
 for(i=0;i<k;i++)
 {
	 printf("\nQ%d %s",i+1,q[i]);
	 printf("\na.%s",a[i]);
	 printf("\nb.%s",b[i]);
	 printf("\nc.%s",c[i]);
	 printf("\nd.%s",d[i]);
	 printf("\nresult%c",re[i]);
 }
 goto admin;
 case 3:
       printf("\n1.update all\n2.update single");
	   scanf("%d",&update);
	   //switcha3//
	   switch(update)
	   {
		   case 1:
		   goto update;
	   case 2:
		   printf("enter qus number:-");
	    scanf("%d",&j);
	    i=j-1;
		printf("Q%d",i+1);
scanf(" %s",q[i]);
printf("a.");
scanf("%s",a[i]);
printf("b.");
scanf("%s",b[i]);
printf("c.");
scanf("%s",c[i]);
printf("d.");
scanf("%s",d[i]);
printf("result:-");
scanf("%s",&re[i]);
  goto admin;
  }
  case 4:
    goto home;
	case 5:
	       break;

	   }
	   //player//
case 2:
player:
printf("**********************start game************************");
printf("\n1.Start\n2.home\n3.total point\n4.exit\nyour choice:-");
scanf("%d",&player);
point=0;
switch(player)
{
	case 1:
	r:
	for(i=0;i<k;i++)
 {
	 n:
	 printf("\nQ%d %s",i+1,q[i]);
	 printf("\na.%s",a[i]);
	 printf("\nb.%s",b[i]);
	 printf("\nc.%s",c[i]);
	 printf("\nd.%s",d[i]);
	 printf("\nans:-");
	 scanf("%s",&an[i]);
	 if(strcmp(re[i],an[i])==0)
	 {	 point++;
	   printf("point=%d\n",point);
	   printf("1.retry\n2.restert\n3.next\n4.exit");
	   scanf("%d",&retry);
	   switch(retry)
	   {
		case 1:
		    point--;
		    goto n;
		case 2:
			goto r;
	case 3:
	 if(i<=k)
          {	 
	   i++;
	    goto n;
		}
		else{
		printf("wronge choice");
		goto player;}
	case 4:
	     exit(0);
	   }
	 }
	 else
	 {
		 printf("wrong ans\n");
		 printf("point=%d",point);
		 printf(" 1.retry\n 2.restert\n 3.exit");
	   scanf("%d",&ws);
	   switch(ws)
	   {
		case 1:
		    goto n;
		case 2:
			goto r;
	case 3:
	     exit(0);
 }

}

case 2:
      goto home;
case 3:
      printf("total point:-%d",point);
	  goto player;
case 4:
      exit(0);
}
}
case 3:
       exit(0);
	 } }
}
