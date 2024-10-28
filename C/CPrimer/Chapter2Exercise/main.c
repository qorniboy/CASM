#include <stdio.h>
#include <time.h>

int daysDifference(struct tm date1, struct tm date2)
{
    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);
    double deltaSecs = difftime(time1, time2);
    int deltaDays = (int)(deltaSecs/(60*60/24));
    return deltaDays;
}

int printJolly()
{
    printf("For he's a jolly good fellow!\n");
    return 0;
}

int printNoDeny()
{
    printf("Which nobody can deny!\n");
    return 0;
}

int printSmile(){
    printf("Smile!");
    return 0;
}

int printOne(){
    printf("one\n");
    return 0;
}

int printTwo(){
    printf("two\n");
    return 0;
}

int printThree(){
    printf("three\n");
    return 0;
}

int oneThreePrint(){
    printOne();
    printTwo();
    printThree();
    printf("Done!\n");
    return 0 ;
}

int main(int argc, char const *argv[])
{
    char firstName[] = "Anton"; 
    char lastName[] = "Bruckner";
    char address[] = "Europa the moon";

    printf("%s %s First print statement \n", firstName, lastName);
    printf("%s Second print statement \n", lastName);
    printf("%s Still the second print statement \n", lastName);
    printf("%s %s Third and fourth print statement \n", firstName, lastName);
    
    printf("\nname : %s %s \naddress: %s \n", firstName, lastName, address);
    
    time_t now;
    time(&now);
    struct tm today = *localtime(&now);
    struct tm birthdate = {0};
    birthdate.tm_year = 90;
    birthdate.tm_mon = 4;
    birthdate.tm_mday = 15;
    
    int deltaDays = daysDifference(today, birthdate);
    printf("%d days difference between birth and today\n", deltaDays);

    printf("\n");
    for (int i = 0; i < 3; i++)
        printJolly();
    printNoDeny();

    printf("\n");
    int toes = 10;
    printf("%d toes\n", toes);
    printf("%d twice toes\n", toes*2);
    printf("%d thrice toes\n", toes*3);

    printf("\n");
    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            printSmile();
        printf("\n");
    }
    
    printf("\n");
    oneThreePrint();
    return 0;
}
