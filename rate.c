#include<stdio.h>

main()
{
float rt,ro,rp,rap,rb,rg;       //rate

FILE *fp;

fp=fopen("rate_data.txt","w+");

 
printf("rate per kg\n");
printf("tomato\n");
scanf("%f",&rt);
fprintf(fp,"%.2f ",rt);

printf("onion\n");
scanf("%f",&ro);
fprintf(fp,"%.2f ",ro);

printf("potato\n");
scanf("%f",&rp);
fprintf(fp,"%.2f ",rp);

printf("apple\n");
scanf("%f",&rap);
fprintf(fp,"%.2f ",rap);

printf("banana\n");
scanf("%f",&rb);
fprintf(fp,"%.2f ",rb);

printf("grapes\n");
scanf("%f",&rg);
fprintf(fp,"%.2f ",rg);
}
