// This program identifies if your inputted grade is a passing or a failing grade

#include <stdio.h>

int main()
{
    float grade;
    printf("Enter your grade (in percentage): ");
    scanf("%f", &grade);

    // If (typeof(grade) == "float") [You cannot directly compare data types in C without making your own introspection system]
    //  I cannot add a checker to check whether input is of different data type
    if (grade >= 60 && grade <= 100)
    {
        if (grade == 60)
        {
            printf("You got a PASSING grade, Congratulations!");
        }
        else if (grade < 70)
        {
            printf("You achieved a GOOD grade! Keep it up!");
        }
        else if (grade < 80)
        {
            printf("You achived an EXCELLENT grade! Keep it up!");
        }
        else if (grade < 90)
        {
            printf("You achieved an EXCEPTIONAL grade! Keep it up!");
        }
        else if (grade <= 100)
        {
            printf("You achieved an OUTSTANDING grade! Keep it up!");
        }
    }
    else
    {
        printf("You have a failing mark, never stop trying again!");
    }
    /*
    }
    else
    {
        printf("Please type a valid grade");
    }
    */
}