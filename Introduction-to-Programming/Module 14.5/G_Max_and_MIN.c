#include<stdio.h>
#include<limits.h>
void fun(int n,int a[]){
  
    int min =INT_MAX;
    int max =INT_MIN ;
    for (int i = 0; i <n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }  
        
    }

     for (int i = 0; i <n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }  
    }
    
    printf("%d %d",min,max);

}
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
         scanf("%d",&a[i]);
    }
    fun(n,a);
    
     
    return 0;
}