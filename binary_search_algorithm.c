#include<stdio.h>
int main (){

    int arr[100];

    int n,key;
    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter the element :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
   }

   printf("The value to search :");
   scanf("%d",&key);

   int low=0,high=n-1;

   while(low<=high){
    int mid =(low + high)/2;
        if(arr[mid]==key){
            printf("Element found at %d index\n",mid);
        break;         
        }else if (arr[mid]<key){
                low=mid+1;
        }else{
            high=mid-1;
        }
   }
   

   

    return 0;
}