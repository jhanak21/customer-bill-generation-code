#include<stdio.h>

main()
{
float rt,ro,rp,rap,rb,rg;       //rate
float qt,qap,qg,qb,qo,qp;       //quantity
float tot,top,too,toap,tog,tob,subt; //total

 tot=top=too=toap=tog=tob=subt=0; 

FILE *fp=fopen("rate_data.txt","r");



int op,opp,n;
char a;
/* 
printf("rate per kg\n");
printf("tomato\n");
scanf("%f",&rt);

printf("onion\n");
scanf("%f",&ro);

printf("potato\n");
scanf("%f",&rp);

printf("apple\n");
scanf("%f",&rap);

printf("banana\n");
scanf("%f",&rb);

printf("grapes\n");
scanf("%f",&rg);
*/

fscanf(fp,"%f",&rt);
fscanf(fp,"%f",&ro);
fscanf(fp,"%f",&rp);
fscanf(fp,"%f",&rap);
fscanf(fp,"%f",&rb);
fscanf(fp,"%f",&rg);


L1:
printf("1 for vegi\n2 for fruits\n");
scanf("%d",&op);

if(op==1)
{
printf("quantity in kg\n"); 

printf("vegi\n 1 tomato \n 2 potato \n 3 onion\n");
scanf("%d",&opp);

switch(opp)
{
case 1:
printf("kg=");
scanf("%f",&qt);
tot=qt*rt;
break;

case 2:
printf("kg=");
scanf("%f",&qp);
top=qp*rp;
break;

case 3:
printf("kg=");
scanf("%f",&qo);
too=qo*ro;
break;

default :
printf("invalid option\n");
break ;
}
}

if(op==2)
{
printf("quantity in kg\n");
printf("fruits\n 1 apple \n 2 banana \n 3 grapes\n");
scanf("%d",&opp);
switch(opp)
{
case 1:
printf("kg=");
scanf("%f",&qap);
toap=qap*rap;
break;

case 2:
printf("kg=");
scanf("%f",&qb);
tob=qb*rb;
break;

case 3:
printf("kg=");
scanf("%f",&qg);
tog=qg*rg;
break;

default :
printf("invalid option\n");
}
}

printf("more item press y\n");
scanf("%d",&n);
if(n==1)
goto L1;

if(tot>1)
printf("tomato %.2f kg rate = %.2f tot=%.2f\n",qt,rt,tot);
if(too>1)
printf("onion %.2f kg rate = %.2f tot=%.2f\n",qo,ro,too);
if(top>1)
printf("potato %.2f kg rate = %.2f tot=%.2f\n",qp,rp,top);

if(toap>1)
printf("apple %.2f kg rate = %.2f tot=%.2f\n",qap,rap,toap);
if(tog>1)
printf("grapes %.2f kg rate = %.2f tot=%.2f\n",qg,rg,tog);
if(tob>1)
printf("banana %.2f kg rate = %.2f tot=%.2f\n",qb,rb,tob);

subt=tot+too+top+toap+tob+tog;
printf("sub total= %.2f\n",subt);
}



