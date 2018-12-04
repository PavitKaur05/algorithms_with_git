#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int num ,b, sum=0;
    scanf("%d",&num);
    //adding the numbers of digits for first time
    while(num > 0)
    {
        sum = sum + (num%10);
        num = num / 10;
    }
    // adding the numbers of sum until it becomes single digit
    while (sum >= 10)
    {
        b = sum;
        sum = 0;
        while(b > 0)
        {
        sum=sum + (b%10);
        b = b / 10;
        }
    }
    if(sum == 1)//checking whether the sum equals 1
        printf("It is a magic number.");
        else
        printf("It is not a magic number");
}
