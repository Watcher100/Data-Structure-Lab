#include<stdio.h>
int main (){

     int n;
    printf("Enter array size :");
    scanf("%d",&n);

    int arr[100];
    printf("Enter array element :\n");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    int position,ele;
    printf("Enter position to delete: ");
    scanf("%d",&position);

    for(int i=position; i<n; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1;i++){
        printf("%d ",arr[i]);
    }

    

    return 0;
}