#include<stdio.h>
void Factori(int,  long int *);
int main(){
         long int factorial;
         int numbr;
         printf("Enter an Integer number: ");
         scanf("%d",&numbr);
         Factori(numbr, &factorial);
         printf("Factorial of %d is: %ld", numbr, factorial);
         getch();

        return;
        }

void Factori(int n,  long int *factorial)
{
        int i;

       *factorial =1;
       for(i=1;i<=n;i++)
       {
       *factorial=*factorial*i;
       }
}
