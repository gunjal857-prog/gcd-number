#include <stdio.h>
int gcd(int a,int b){
    int i,gcd;
for(i=1;i <= a && i <= b;i++){
    if(a % i == 0 && b % i == 0){
        gcd = i;
    }
}
    return gcd;
    
}

int main(){
    int result;
    int a,b;
    printf("\nenter the number for a : ");
    scanf("%d",&a);
    printf("\nenter the number for b :  ");
    scanf("%d",&b);
   result = gcd(a,b);
printf("\na and b gcd is : %d\n",result);
return 0;

}