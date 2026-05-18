#include<stdio.h>
int main()
{
    int n;
    int x;
    int even = 0 ,odd = 0 ,posi = 0 ,nega = 0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&x);

        if (x%2==0)
        {
            even+=1;
        }else
        {
            odd++;
        }
        if (x>0)
        {
            posi++;
        }
        else if (x<0)
        {
           nega++;
        } 
        
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",posi);
    printf("Negative: %d\n",nega);
     
    return 0;
}