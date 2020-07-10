#include<stdio.h>
int main()
{
int grade;
printf("Enter your mark");
scanf("%d ,&grade);
printf("You entered %d",grade);

if(grade)>=85 && grade<=100){
printf("You got A grade");
}
else if(grade)>=70 && grade<=84){
printf("You got B grade");
}
else if(grade)>=55 && grade<=69){
printf("You got C grade");
}
else if(grade)>=40 && grade<=54){
printf("You got D grade");
}
else if (grade<40){
printf("You failed in the exam");
}
return 0;
}
