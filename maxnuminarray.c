#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int maxx = arr[0];
    for(int i=0 ; i<=4 ;i++){
    if(arr[i]> maxx){
    maxx=arr[i];
    }
}
printf("%d",maxx);
return 0;
}
