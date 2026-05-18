#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],b[105];
    scanf("%s%s",&a,&b);  //orange apple
    int lenth = strlen(b);

   for (int i = 0; i <=lenth; i++)
   {
     a[i] = b[i];
   }
  
  //  strcpy(a,b);//copy krar short cut ..
   
    
    
    printf("%s %s ",a,b);

    return 0;
}