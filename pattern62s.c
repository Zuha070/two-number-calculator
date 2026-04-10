#include<stdio.h>
int main(){
   int n;
   printf("enter num");
   scanf("%d",&n);
   for(int i=1 ; i<=n ; i++){
       for(int j=n-1 ; j>0 ; j--){
          ptintf(" ");
       }
       ptinf("\n");
   }
   for(int i=1 ; i<=n ; i++){
       for(int j=1 ; j<=2*i-1 ; j--){
          ptintf("*");
       }
       ptinf("\n");
   }
   return 0;
}
