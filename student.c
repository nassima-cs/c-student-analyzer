#include <stdio.h>

int main()
{
  char name[50]
float math, programming, english;
float average;
float highest, lowest;

printf("Enter student name: ");
scanf("%s" , name);

printf("Enter Math grade: ");
scanf("%f" , &math);

printf("Enter Programming grade: ");
scanf("%f , &programming);
  
printf("Enter English grade: ");
scanf("%f , &english);

  average = (math + programming + english) / 3;

highest = math;

if (programming > highest)
{ 
highest = programming;
}
if (english > highest)
{
highest = english;
}
  
