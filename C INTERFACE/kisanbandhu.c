#include<stdio.h>
#include<conio.h>
int main()
{


printf("\n*******************************  WELCOME ********************************\n");

int state=0,caste;  
float income,land;
char start;
while(1<2)
{
again:                                                               

printf("\n\nPLEASE ENTER y TO START/CONTINUE AND n TO STOP\n");
scanf("%s",&start);
if(start=='n')
{
  goto stop;
}
printf("\nIN WHICH STATE DO YOU HAVE A FARM : ");
printf("\nFOR GUJARAT / MAHARASHTRA / MADHYA PRADESH ENTER 1 \nFOR TAMIL NADU / KERELA / KARNATAKA ENTER 2 \nFOR OTHERS ENTER 3 \n");
scanf("%d",&state);
if (state==3)
{
  printf("SORRY BUT WE DONT HAVE ANY SUBSIDY INFORMATION FOR YOUR STATE");
  goto again;
}
printf("\nWHAT IS YOUR INCOME(IN LPA) : ");
scanf("%f",&income);
printf("\nWHAT IS YOUR CASTE : ");
printf("\nFOR SC/ST/OBC ENTER 1 \nFOR GENERAL/OTHERS ENTER 2 \n");
scanf("%d",&caste);
printf("\nHOW MUCH FARM LAND AREA DO YOU OWN(IN ACRES) : ");
scanf("%f",&land);

if (state==1)
{
  if(income<5)
  {
    if(caste==1)
    {
      if(land<5)
      {
        printf("\nYOU ARE ELIGIBLE TO CLAIM 10000 Rs PER MONTH BY THE GOVERNMENT\n");
      }
      else
      {
        printf("\nYOU ARE ELIGIBLE TO CLAIM 9000 Rs PER MONTH BY THE GOVERNMENT\n");
      }
    }
    else if(caste==2)
    {
      printf("\nYOU ARE ELIGIBLE TO CLAIM 8000 Rs PER MONTH BY THE GOVERNMENT\n");
    } 
    else
    {
      printf("\nENTER VALID INPUT FOR CASTE\n");
    }
  }  
  else
  {
    printf("\nTHERE IS NO SUBSIDY FOR YOU RIGHT NOW\n");
  } 
}  
else if (state==2)
{ 
  if(income<5)
  {
    if(caste==1)
    {
      if(land<5)
      {
        printf("\nYOU ARE ELIGIBLE TO CLAIM 13000 Rs PER MONTH BY THE GOVERNMENT\n");
      }
      else
      {
        printf("\nYOU ARE ELIGIBLE TO CLAIM 10000 Rs PER MONTH BY THE GOVERNMENT\n");
      }
    }
    else if(caste==2)
    {
      printf("\nYOU ARE ELIGIBLE TO CLAIM 4000 Rs PER MONTH BY THE GOVERNMENT\n");
    } 
    else("\nENTER VALID INPUT FOR CASTE\n");
  }  
  else
  {
    printf("\nTHERE IS NO SUBSIDY FOR YOU RIGHT NOW\n");
  } 
}  
else
 {
  printf("\nENTER VALID INPUT FOR STATE\n");
 }
}
stop :
 {
  printf("\nTHANK YOU AND HAVE A NICE DAY");
 }

return 0;  
}