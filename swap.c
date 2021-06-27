#include<stdio.h>

void swap_max(int arr[], int l, int n){
 int a=0,b=0;
 int p=a[n];
 for(int i=n;i<l;i++){
  if(arr[i]>p)
   p=arr[i];
   b=i;
 }
 int x=arr[b];
 arr[b]=arr[n];
 arr[n]=x;
 

 }
void ssort(int arr[], int l){
   for(int i=0;i<l;i++){
    swap_max(arr,l,i);
   }
 }
