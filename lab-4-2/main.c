#include <stdio.h>
#include <stdlib.h>

int main()
{

    //first question
    int i, divFive, divTwelve;

    printf("******First question******\n");
	printf("Please enter a number: ");
	scanf("%d", &i);

	divFive = i%5;
	divTwelve = i%12;

	if(divFive==0 && divTwelve==00)
        printf("\nYour number can divisible 5 and 12\n");

	else if(divFive==0 && divTwelve!=0)
        printf("\nYour number can divisible 5 but can not divisible 12\n");

	else if(divFive!=0 && divTwelve==0)
        printf("\nYour number can divisible 12 but can not divisible 5\n");

    else
        printf("\nYour number can not divisible 5 and 12\n");

    printf("\n***************************\n");

    //second question
    printf("\n******Second question******\n");

    int price, age, numberOfRooms;

    printf("Enter price, age and the number of rooms > ");
    scanf("%d%d%d", &price, &age, &numberOfRooms);


    if(price <= 400000 && age <= 10 && numberOfRooms >=3 )
        printf("\nCriteria satisfied.\n");
    else
        printf("\nCriteria not satisfied.\n");

    printf("\n***************************\n");

    //third question
    printf("\n******Third question******\n");

    int grade;
    char gLetter=' ';

    printf("Enter the student’s grade (0-100)> ");
    scanf("%d", &grade);

    if(grade>=90)
        gLetter='A';

    else if(grade>=80 && grade<=89)
        gLetter='B';

    else if(grade>=70 && grade<=79)
        gLetter='C';

    else if(grade>=60 && grade<=69)
        gLetter='D';

    else if(grade<60)
        gLetter='F';

    printf("\nStudent scored %d on the exam and his/her grade is %c \n", grade,gLetter);

    printf("\n***************************\n");

    getch();
    return 0;
}
