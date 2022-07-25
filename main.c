/*Storing and displaying values of an array using for loop*/
#include <stdio.h>
int main()
{
  int marks[8];// create an array name marks can carry 8 elements
  //int i;//create an integer variable i
  printf("Enter the marks of 8 subjects\n");//asking user to Enter marks of 8 subjects
  for(int i=0;i<8;i++) // using for loop to iterate scanf 8 times
  {
    scanf("%d",&marks[i]);//Taking input from user 8 times and store the values to array index 0 to 7
  }
for(int i=0;i<8;i++)// using for loop to iterate printf 8 times
 {
  printf("Subject %d mark is %d\n",i+1,marks[i]);//display the values
 }
return 0;
}
