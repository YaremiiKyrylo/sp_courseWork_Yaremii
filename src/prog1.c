#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaa, Bbbbb, Xxxxx, Yyyyy;
   printf("Enter Aaaaa:");
   scanf("%d", &Aaaaa);
   printf("Enter Bbbbb:");
   scanf("%d", &Bbbbb);
   printf("%d\n", Aaaaa + Bbbbb);
   printf("%d\n", Aaaaa - Bbbbb);
   printf("%d\n", Aaaaa * Bbbbb);
   printf("%d\n", Aaaaa / Bbbbb);
   printf("%d\n", Aaaaa % Bbbbb);
   Xxxxx = (Aaaaa - Bbbbb) * 10 + (Aaaaa + Bbbbb) / 10;
   Yyyyy = Xxxxx + (Xxxxx % 10);
   printf("%d\n", Xxxxx);
   printf("%d\n", Yyyyy);
   system("pause");
    return 0;
}
