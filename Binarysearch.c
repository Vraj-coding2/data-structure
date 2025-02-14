#include<stdio.h>
int Binarysearch(int arr[],int length,int target){
int st = 0,end = length - 1;
while(st <= end)
{
  int mid = st + (end - st)/2;
  if(target > arr[mid]){
    st = mid + 1;
  }else if(target < arr[mid]){
    end = mid - 1;
  }else{
  return mid;
  }
 }
  return -1;
}
int main() {
 int len = 5;
 int arr[len],target = 12;

 for(int i = 0;i < len;i++){
  printf("enter the value of[%d]:",i+1);
  scanf("%d",&arr[i]);
 }

printf("Index is :%d",Binarysearch(arr,len,target));
    return 0;
}