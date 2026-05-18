#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int first_number = a /1000; //1000 mana 4 digit ar sonkha thakea prthime sonkha bar kora.
    if (first_number % 2 ==0)  //int first_number = a %1000; laster sonkkha bar kora
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    
    return 0;
}