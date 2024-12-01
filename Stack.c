#include<stdio.h>
#include<stdlib.h>
int main()
{
    int stack[10], top = -1, choice, value, i;
    while(1)
    {
        printf("stack Menu: \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("4. Exit \n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(top==10-1)
                {
                    printf("stack Overflow");
                }
                else
                {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top]=value;
                    printf("value %d pushed in to stack\n", value);
                } break;

                case 2:
                    if(top==-1)
                    {
                        printf("Underflow");
                    }
                    else
                    {
                        printf("%d popped\n",stack[top]);
                        top--;
                    } break;

                case 3:
                    if(top==-1)
                    {
                        printf("stack empty");
                    }
                    else
                    {
                        printf("Current Stack: ");
                        for(i=top; i>=0;i--)
                        {
                            printf("%d ", stack[i]);
                        }
                        printf("\n");
                    } break;

                case 4:
                    exit(0);



        }

    }
 return 0;
}
