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
lowest = math;
if (programming < lowest)
{ 
lowest = programming;
}
if (english < lowest)
{
lowest = english;
}
printf("\n===== Student Performance =====\n");
printf("Student: %s\n", name);
printf("Average: %.2f\n", average);
printf("Highest grade: %.2f\n", highest);
printf("Lowest grade: %.2f\n" , lowest);

if (average >= 50)
{
printf("Status: Passed\n");
}
else
{ 
printf("Status: Failed\n");
}
if (average >= 90)
{
printf("Performance: Excellent\n");
}
else if (average >= 50)
{
printf("Performance: Needs Improvemernt\n");
}
else
{
printf("Performance: Poor\n");
}
return 0;
}
  
