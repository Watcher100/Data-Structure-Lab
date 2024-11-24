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
    printf("Enter position to insart: ");
    scanf("%d",&position);

    printf("Enter the element to insart : ");
    scanf("%d",&ele);

    for(int i=n; i>position; i--){
        arr[i]=arr[i-1];

    }

    arr[position]=ele;
    n++;
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }


    




    return 0;
}