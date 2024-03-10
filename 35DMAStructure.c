//Dynamic Memory Allocation Structure
#include <stdio.h>

struct student
{
    int htno;
    char gender;
    float per;
};

int main()
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    s->htno = 101;
    s->gender = 'M';
    s->per = 8.5;
    printf("\n htno=%d, gender=%c, percent=%f", s->htno, s->gender, s->per);
    free(s);
    return 0;
}