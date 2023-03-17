#include <stdio.h>
#include <stdlib.h>

//write a program that ask students how many courses they are offering, then ask user to enter the marks obtained in each subject then calaculate the sum and average (GPA)

int main(void) 
{
  int course, j, sum = 0, k, avr;

  printf("Welcome to Holberton School Result Website.\nHow many courses do you offer:\t");
  scanf("%d", &course);
  system("clear");

  for (k = 1; k <= course; k++)
    {
      printf("Please enter you mark for each course:\t");
      scanf("%d", &j);
      system("clear");

      if (j < 0 || j > 100)
      {
        printf("Please enter a valid mark\n");        
        continue;
      }
      sum = sum + j;
    }
  
      printf("Your total marks obtained is %d\n\n", sum);
      avr = sum / course;
        printf("Your average is %d\n\n", avr);
      printf("Your GPA is %d\n\n", avr);
        
  
printf("End of program\n");
  sleep(20);
  system("clear");
  printf("Welcome User\n"); 
  
  return 0;
}