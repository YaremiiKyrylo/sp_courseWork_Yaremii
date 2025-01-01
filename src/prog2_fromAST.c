#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaa;
   int Bbbbb;
   int Ccccc;
   printf("Enter Aaaaa:");
   scanf("%d", &Aaaaa);
   printf("Enter Bbbbb:");
   scanf("%d", &Bbbbb);
   printf("Enter Ccccc:");
   scanf("%d", &Ccccc);
   if (Aaaaa > Bbbbb) 
   {
   if (Aaaaa > Ccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", Ccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", Aaaaa);
   goto OutofIF;
   }
   }
   if (Bbbbb < Ccccc) 
   {
   printf("%d\n", Ccccc);
   }
   else
   {
   printf("%d\n", Bbbbb);
   }
OutofIF:
   if (((Aaaaa == Bbbbb && Aaaaa == Ccccc) && Bbbbb == Ccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((Aaaaa < 0 || Bbbbb < 0) || Ccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(Aaaaa < (Bbbbb + Ccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
