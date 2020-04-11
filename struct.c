//code by amarjith c k
//github- Amarjith-c-k
//Structure programme to read employee details display them and to find employee with more than 5 yrs of experiment
#include<stdio.h>
struct empl
{
    int eno,eyr;
    char name[20];
};
void display(struct empl e,int j)
{
    printf("details of %d employee \n",j+1);
    printf("employee name  %s\n",e.name);
    printf("employee number  %d\n",e.eno);
    printf("employee eyr of experience  %d\n",e.eyr);
    printf("\n\n");
}
void main()
{
int i,j;
printf("how many employees \n");
scanf("%d",&i);
struct empl e[i];
for(j=0;j<i;j++)
{
    printf("enter employee name  ");
    scanf("%s",&e[j].name);
    printf("enter employee number  ");
    scanf("%d",&e[j].eno);
    printf("Enter employee year of experience  ");
    scanf("%d",&e[j].eyr);
    printf("\n\n");
}
for(j=0;j<i;j++)
{
    display(e[j],j);
}
for(j=0;j<i;j++)
{
    if(e[j].eyr>5)
        printf("employee have more tham 5 year of experiment %s \nemployee I_D = %d\n",e[j].name,e[j].eno);
        continue;
}
}
