#include<stdio.h>
void main()
{
 int m,c,p,j,bee;
 float avg;
printf("Enter the marks of Maths :");
scanf("%d",&m);
printf("Enter the marks of Chemistry :");
scanf("%d",&c);
printf("Enter the marks of Physics :");
scanf("%d",&p);
printf("Enter the marks of japanese :");
scanf("%d",&j);
printf("Enter the marks of BEE :");
scanf("%d",&bee);
avg =(m+c+p+j+bee)/5;

if(m>100 || c>100 || p>100 || j>100 || bee>100)
{
printf("You put invalid marks");
} 
else if(avg>75)
{
 printf("You have got grade DISTINCTION ");
}
else if(avg<75 && avg>=60)
{
    printf("You have got grade FIRST GRADE ");
}
else if(avg<60 && avg>=50)
{
    printf("You have got grade SECOND GRADE ");
}
else if(avg<50 && avg >=40)
{
    printf("You have got grade THIRD GRADE ");
}
else
    {
    printf("You have FAIL in the exam ");
    }
}
