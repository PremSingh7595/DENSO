#include <stdio.h>
int main()
{
    int X, P, final_X=0,discount_P;
    scanf("%d %d",&X,&P);
    final_X = X;
    
    
    while(X>1){
        discount_P =(X*P)/100;
        final_X = (final_X) + (X - discount_P);
        X = X - discount_P;
    }
    
    printf("%d",final_X);
    return 0;
}
