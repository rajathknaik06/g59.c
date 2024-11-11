/*Mrs. Johnson, a dedicated teacher, wanted to develop a program to calculate the total marks and percentages obtained by her students in a set of five subjects using arithmetic operators.



Could you assist Mrs. Johnson by writing the program?

Input format :
The input consists of five space-separated integers, representing the scores obtained by a student in five subjects.

Output format :
The first line displays "Total: " followed by an integer, representing the sum of the five subject scores.

The second line displays "Percentage: " followed by a float value, representing the calculated percentage, rounded off to two decimal places.*/

#include<stdio.h>
int main()
{
    int e, h, m, s, c, total;
    float per;
    scanf("%d",&e);
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);
    scanf("%d",&c);
    total = e + h + m + s + c;
    per=total/5.0;

    printf("Total: %d",total);
    printf("\nPercentage: %.2f",per);
    return 0;
}

