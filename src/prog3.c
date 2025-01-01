#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaa, Aaaa2, Bbbbb, Xxxxx, Cccc1, Cccc2;
   printf("Enter Aaaaa:");
   scanf("%d", &Aaaaa);
   printf("Enter Bbbbb:");
   scanf("%d", &Bbbbb);
   for (int Aaaa2 = Aaaaa; Aaaa2 <= Bbbbb; Aaaa2++)
   printf("%d\n", Aaaa2 * Aaaa2);
   for (int Aaaa2 = Bbbbb; Aaaa2 <= Aaaaa; Aaaa2++)
   printf("%d\n", Aaaa2 * Aaaa2);
   Xxxxx = 0;
   Cccc1 = 0;
   while (Cccc1 < Aaaaa)
   {
   {
   Cccc2 = 0;
   while (Cccc2 < Bbbbb)
   {
   {
   Xxxxx = Xxxxx + 1;
   Cccc2 = Cccc2 + 1;
   }
   }
   Cccc1 = Cccc1 + 1;
   }
   }
   printf("%d\n", Xxxxx);
   Xxxxx = 0;
   Cccc1 = 1;
   do
   {
   Cccc2 = 1;
   do
   {
   Xxxxx = Xxxxx + 1;
   Cccc2 = Cccc2 + 1;
   }
   while (!(Cccc2 > Bbbbb));
   Cccc1 = Cccc1 + 1;
   }
   while (!(Cccc1 > Aaaaa));
   printf("%d\n", Xxxxx);
   system("pause");
    return 0;
}
