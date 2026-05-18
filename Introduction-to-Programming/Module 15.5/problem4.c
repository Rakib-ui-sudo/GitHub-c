#include<stdio.h>

void change_it(int a[],int n){

      a[n-1] =100;

}
int main()
{
     int n;
     scanf("%d",&n);
     int m[n];
     for (int i = 0; i <n; i++)
     {
        scanf("%d",&m[i]);
     }
     change_it(m,n);
      for (int i = 0; i <n; i++)
    {
        printf("%d ",m[i]);
    }
    return 0;
}