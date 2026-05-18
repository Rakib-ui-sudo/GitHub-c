#include<stdio.h>
int main()
{
    char a[105],b[105];
    scanf("%s%s",&a,&b);//cat bat
    int lenth = strlen(a),lenth2 = strlen(b);
    // for (int i = 0; i <=lenth2; i++)
    // {
    //     a[i+lenth]=b[i];
    // }

    //short funsition
    strcat(a,b); 

    printf("%s",&a);//catbat
 
    return 0;
}