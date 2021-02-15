#include<stdio.h>

int main(){
        //1.3.1. Întocmiți schema logică pentru rezolvarea ecuației de gradul 1: 𝑎 ∗ 𝑥 + 𝑏 = 0.

       int a,b,rezolvare;
       printf("Te rog sa introduci termenul a:");
       scanf("%d", &a);
       printf("Te rog sa introduci termenul b:");
       scanf("%d", &b);
       
       rezolvare = -b/a;
       printf("Solutia este : %d",rezolvare);

    
    //    1.3.2. Să se întocmească schema logică pentru calculul expresiei:
    //    𝑓 = 𝑢 + 𝑥^2 −𝑢/𝑥 unde: 𝑢 = 𝑥^2 + 2.34 * sin(𝑥).
}