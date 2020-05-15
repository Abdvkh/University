#include<stdio.h>
#include<conio.h>//for clearing the console
void main()
{
    char city[5][20];//for storing the words
    int i,j;//for iterations(traversing)
    clrscr();//clearing the console
    printf("Enter the words to be sorted: \n\n");//asking to enter the words
    for(i=0; i<5; i++)//storing 5 words
        scanf("%s",&city[i]);//storing them in list
    printf("Sorted list of Names are: \n\n");//displaying sorted list
    for(i=65; i<122; i++)//going through alphabet
    {
        for(j=0; j<5; j++)//going through words
        {
            if(city[j][0]==i)//if word equals to the alphabet's letter
                printf("\n%s",city[j]);//prints word
        }
    }
}
