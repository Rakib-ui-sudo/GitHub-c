#include <stdio.h>

int main() {

    long long int n;
     scanf("%lld",&n);

     if (n >1000)
     {
        printf("I will buy Punjabi\n");

        if ((n-1000)>=500)
        {
            printf("I will buy new shoes\n");
        }
        if (n>=1500)
        {
            printf("Alisa will buy new shoes\n");
        }
        
     }
     else{
        printf("Bad luck!");
     }
     
     return 0;
}