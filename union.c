#include<stdio.h>
union std
{
    int m[5],rol,ttl;
    char name[20];
};
void main()
{
    union std s[10];
    int i,j;
    for(i=0;i<2;i++)
    {
     printf("details of %d \n",i+1);
     printf("enter the name ");
     scanf("%s",&s[i].name);
     printf("enter roll no.  ");
     scanf("%d",&s[i].rol);
     printf("enter the marks of 5 subject \n");
     s[i].ttl=0;
     for(j=1;j<=5;j++)
     {
         scanf("%d",&s[i].m[j]);
         s[i].ttl=s[i].ttl+s[i].m[j];
     }
         printf("total mark of this student %d \n",s[i]);
    }

}
