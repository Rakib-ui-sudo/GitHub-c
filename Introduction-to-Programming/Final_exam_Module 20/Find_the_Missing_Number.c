#include <stdio.h>
int main()
{
   int t;
   scanf("%d", &t);
   while (t--)
   {
      int  a, b, c;
      long long int m;
      scanf("%lld %d %d %d", &m, &a, &b, &c);
      int mul = a * b * c;
      if (mul != 0)
      {
         if (m % mul == 0)
         {
            long long ans = m / mul;
            printf("%lld\n", ans);
         }
         else
         {
            printf("-1\n");
         }
         
      }
      else
      {
        // printf("-1\n");
      }
   }

   return 0;
}