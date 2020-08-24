#include<stdio.h>
#include<stdlib.h>
int repeat(int arr[],int n);


int main(){  int n;
             scanf("%d",&n);
             int arr[n];
             int i=0;
             while(i<n){
                     
                     scanf("%d",&arr[i]);
                     i++;
             repeat(arr,n);
             }
            
             
             
}
int repeat(int arr[], int n){
             
                          int i;
                          for(i=0;i<n;i++){
                                  int j;
                                  for(j=0;j<n;j++){
                                     if(i!=j && arr[i]==arr[j]){
                                                break;
                                     }
                                  if(j==n-1){
                                         printf("%d",arr[i]);
                                         }                  
                            }}     }

