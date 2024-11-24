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

    int value;
    printf("Enter value to search : ");
    scanf("%d",&value);

    for(int i=0; i<n; i++){
        if(arr[i]==value){
            printf("The value %d found at %d index",value,arr[i-1]);
        }
    }




    return 0;
}