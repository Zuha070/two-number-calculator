#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int maxx = arr[0];
int smax = arr[0];
    for(int i=0 ; i<=4 ;i++){
    if(arr[i]> maxx){
    maxx=arr[i];
    }
}
for(int i=0 ; i<=4 ;i++){
    if(arr[i]> smax && arr[i] != maxx){
    smax=arr[i];
    }
}
printf("%d",smax);
return 0;
}
