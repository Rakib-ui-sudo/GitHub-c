#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
         
         int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        
        int one,two,three,four;
        one=M1*D;
        two=M1+M2;
        three=one/two;
        four = D-three;
        
        
        printf("%d\n",four);
    }
 
     
    return 0;
}